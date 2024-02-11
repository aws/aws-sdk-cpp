/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.config;

import com.amazonaws.util.awsclientgenerator.SdkSpec;
import com.amazonaws.util.awsclientgenerator.config.exceptions.GeneratorNotImplementedException;
import com.amazonaws.util.awsclientgenerator.generators.ClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.QueryCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.RestXmlCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.apigateway.APIGatewayRestJsonCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.apigatewayv2.APIGatewayV2RestJsonCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.docdb.DocDBCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.dynamodb.DynamoDBJsonCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.ec2.Ec2CppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.eventbridge.EventBridgeCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.glacier.GlacierRestJsonCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.lambda.LambdaRestJsonCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.machinelearning.MachineLearningJsonCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.neptune.NeptuneCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.polly.PollyCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.rds.RDSCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.s3.S3RestXmlCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.s3control.S3ControlRestXmlCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.sqs.SQSJsonCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.sqs.SQSQueryXmlCppClientGenerator;

import java.util.HashMap;
import java.util.Map;

public class ServiceGeneratorConfig {
    static final Map<String, ClientGenerator> LANGUAGE_PROTOCOL_DEFAULT_MAPPING = new HashMap<>();
    static final Map<String, ClientGenerator> SPEC_OVERRIDE_MAPPING = new HashMap<>();

    static {
        try {
            LANGUAGE_PROTOCOL_DEFAULT_MAPPING.put("cpp-json", new JsonCppClientGenerator());
            LANGUAGE_PROTOCOL_DEFAULT_MAPPING.put("cpp-rest-json", new JsonCppClientGenerator());
            LANGUAGE_PROTOCOL_DEFAULT_MAPPING.put("cpp-application-json", new JsonCppClientGenerator());
            LANGUAGE_PROTOCOL_DEFAULT_MAPPING.put("cpp-rest-xml", new RestXmlCppClientGenerator());
            LANGUAGE_PROTOCOL_DEFAULT_MAPPING.put("cpp-query", new QueryCppClientGenerator());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    static {
        try {
            SPEC_OVERRIDE_MAPPING.put("cpp-dynamodb-json", new DynamoDBJsonCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-glacier-rest-json", new GlacierRestJsonCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-lambda-rest-json", new LambdaRestJsonCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-sqs-query", new SQSQueryXmlCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-sqs-json", new SQSJsonCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-s3-rest-xml", new S3RestXmlCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-s3-crt-rest-xml", new S3RestXmlCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-s3control-rest-xml", new S3ControlRestXmlCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-ec2-ec2", new Ec2CppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-apigateway-rest-json", new APIGatewayRestJsonCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-apigatewayv2-rest-json", new APIGatewayV2RestJsonCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-machinelearning-json", new MachineLearningJsonCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-polly-rest-json", new PollyCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-rds-query", new RDSCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-docdb-query", new DocDBCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-neptune-query", new NeptuneCppClientGenerator());
            SPEC_OVERRIDE_MAPPING.put("cpp-eventbridge-json", new EventBridgeCppClientGenerator());

        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static ClientGenerator findGenerator(final SdkSpec spec, final String protocol)
            throws GeneratorNotImplementedException {

        ClientGenerator generator = SPEC_OVERRIDE_MAPPING.get(String.format("%s-%s-%s", spec.getLanguageBinding(), spec.getServiceName(), protocol));

        if (generator == null) {
            generator = LANGUAGE_PROTOCOL_DEFAULT_MAPPING.get(spec.getLanguageBinding() + "-" + protocol);
        }

        if(generator == null) {
           throw new GeneratorNotImplementedException(
                   String.format("No generator for Spec: %s protocol: %s", spec, protocol));
        }

        return generator;
    }

}
