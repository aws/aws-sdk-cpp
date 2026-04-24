package com.amazonaws.util.awsclientgenerator.generators.cpp.monitoring;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import com.google.common.collect.ImmutableMap;

public class CloudwatchMonitoringJsonCppClientGenerator extends JsonCppClientGenerator {
    public CloudwatchMonitoringJsonCppClientGenerator() throws Exception {
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
