#include "vpi_user.h"
void (*vlog_startup_routines[])()={hello_register,0};
void hello_register()
{
	s_vpi_systf_data tf_data;
	tf_data.type=vpi SystTask;
	tf_data.tfname=$hello;
	tf_data.calltf=hello_calltf;
	tf_data.compiletf=hello.compiletf;
	tf_data.sizetf=0;
	tf_data.userdata=0;
	vpi_register_systf(& tf_data);
	
}

static int hello, coeff(char, *user, data)
{
	vpi_printf("Hello");
	
}
return 0;
static int hello compiletf(char *user_data)
{
	return 0;
}
