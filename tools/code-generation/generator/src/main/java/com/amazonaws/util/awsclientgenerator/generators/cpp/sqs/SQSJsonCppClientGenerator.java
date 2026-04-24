package com.amazonaws.util.awsclientgenerator.generators.cpp.sqs;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;

public class SQSJsonCppClientGenerator extends JsonCppClientGenerator {

    public SQSJsonCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {
        Shape queueAttributeNameShape = serviceModel.getShapes().get("QueueAttributeName");

        /*
         * Add missing unmodeled queue attribute shapes that were already present
         * in a customization for the QueryXML client generation.
         */
        if(queueAttributeNameShape != null) {
            queueAttributeNameShape.getEnumValues().add("SentTimestamp");
            queueAttributeNameShape.getEnumValues().add("ApproximateFirstReceiveTimestamp");
            queueAttributeNameShape.getEnumValues().add("ApproximateReceiveCount");
            queueAttributeNameShape.getEnumValues().add("SenderId");
        }

        return super.generateSourceFiles(serviceModel);
    }
}
