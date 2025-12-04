package com.amazonaws.util.awsclientgenerator.generators.cpp.monitoring;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.generators.cpp.CborCppClientGenerator;
import com.google.common.collect.ImmutableMap;

public class CloudwatchMonitoringCborCppClientGenerator extends CborCppClientGenerator {
    public CloudwatchMonitoringCborCppClientGenerator() throws Exception {
        super();
    }

    @Override
    protected SdkFileEntry generateErrorSourceFile(ServiceModel serviceModel) throws Exception {
        serviceModel.setQueryCompatibleErrorMappings(ImmutableMap.of(
                "DASHBOARD_NOT_FOUND", "DashboardNotFoundError"
        ));

        return super.generateErrorSourceFile(serviceModel);
    }
}
