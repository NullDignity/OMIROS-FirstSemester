#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system("CHCP 1253 > nul");
	
	int flat_value, local_calls, overlocal_calls;
	float total, local_call_value, overlocal_call_value, vat;
	flat_value = 20;
	vat = 19;
	
	printf("���� ������ ������� �������: ");
	scanf("%d", &local_calls);
	local_call_value = local_calls * 0.03;
	
	printf("���� ������ ����������� �������: ");
	scanf("%d", &overlocal_calls);
	//
	if (overlocal_calls > 0 && overlocal_calls <= 200)
		overlocal_call_value = overlocal_calls*0.04;
	else if (overlocal_calls <= 400)
		overlocal_call_value = 200*0.04 + (overlocal_calls-200)*0.05;
	else //(overlocal_calls > 400)
		overlocal_call_value = 200*0.04 + 200*0.05 + (overlocal_calls-400)*0.06;
		
	total = (flat_value + local_call_value + overlocal_call_value) * 1.19;
	
	printf("�����: %d\n", flat_value);
	printf("������� ��������: %d\n", local_calls);
	printf("����������� ��������: %d\n", overlocal_calls);
	printf("���: %.2f\n", vat);
	printf("������: %.2f\n", total);
	
	system("PAUSE");
	return 0;
	
}
