/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/comprehendmedical/ComprehendMedicalClient.h>
#include <aws/comprehendmedical/ComprehendMedicalEndpointProvider.h>
#include <aws/comprehendmedical/ComprehendMedicalEndpointRules.h>
#include <aws/comprehendmedical/ComprehendMedicalErrorMarshaller.h>
#include <aws/comprehendmedical/ComprehendMedicalErrors.h>
#include <aws/comprehendmedical/ComprehendMedicalRequest.h>
#include <aws/comprehendmedical/ComprehendMedicalServiceClientModel.h>
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/Attribute.h>
#include <aws/comprehendmedical/model/AttributeName.h>
#include <aws/comprehendmedical/model/Characters.h>
#include <aws/comprehendmedical/model/ComprehendMedicalAsyncJobFilter.h>
#include <aws/comprehendmedical/model/ComprehendMedicalAsyncJobProperties.h>
#include <aws/comprehendmedical/model/DescribeEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/DescribeEntitiesDetectionV2JobResult.h>
#include <aws/comprehendmedical/model/DescribeICD10CMInferenceJobRequest.h>
#include <aws/comprehendmedical/model/DescribeICD10CMInferenceJobResult.h>
#include <aws/comprehendmedical/model/DescribePHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/DescribePHIDetectionJobResult.h>
#include <aws/comprehendmedical/model/DescribeRxNormInferenceJobRequest.h>
#include <aws/comprehendmedical/model/DescribeRxNormInferenceJobResult.h>
#include <aws/comprehendmedical/model/DescribeSNOMEDCTInferenceJobRequest.h>
#include <aws/comprehendmedical/model/DescribeSNOMEDCTInferenceJobResult.h>
#include <aws/comprehendmedical/model/DetectEntitiesV2Request.h>
#include <aws/comprehendmedical/model/DetectEntitiesV2Result.h>
#include <aws/comprehendmedical/model/DetectPHIRequest.h>
#include <aws/comprehendmedical/model/DetectPHIResult.h>
#include <aws/comprehendmedical/model/Entity.h>
#include <aws/comprehendmedical/model/EntitySubType.h>
#include <aws/comprehendmedical/model/EntityType.h>
#include <aws/comprehendmedical/model/ICD10CMAttribute.h>
#include <aws/comprehendmedical/model/ICD10CMAttributeType.h>
#include <aws/comprehendmedical/model/ICD10CMConcept.h>
#include <aws/comprehendmedical/model/ICD10CMEntity.h>
#include <aws/comprehendmedical/model/ICD10CMEntityCategory.h>
#include <aws/comprehendmedical/model/ICD10CMEntityType.h>
#include <aws/comprehendmedical/model/ICD10CMRelationshipType.h>
#include <aws/comprehendmedical/model/ICD10CMTrait.h>
#include <aws/comprehendmedical/model/ICD10CMTraitName.h>
#include <aws/comprehendmedical/model/InferICD10CMRequest.h>
#include <aws/comprehendmedical/model/InferICD10CMResult.h>
#include <aws/comprehendmedical/model/InferRxNormRequest.h>
#include <aws/comprehendmedical/model/InferRxNormResult.h>
#include <aws/comprehendmedical/model/InferSNOMEDCTRequest.h>
#include <aws/comprehendmedical/model/InferSNOMEDCTResult.h>
#include <aws/comprehendmedical/model/InputDataConfig.h>
#include <aws/comprehendmedical/model/JobStatus.h>
#include <aws/comprehendmedical/model/LanguageCode.h>
#include <aws/comprehendmedical/model/ListEntitiesDetectionV2JobsRequest.h>
#include <aws/comprehendmedical/model/ListEntitiesDetectionV2JobsResult.h>
#include <aws/comprehendmedical/model/ListICD10CMInferenceJobsRequest.h>
#include <aws/comprehendmedical/model/ListICD10CMInferenceJobsResult.h>
#include <aws/comprehendmedical/model/ListPHIDetectionJobsRequest.h>
#include <aws/comprehendmedical/model/ListPHIDetectionJobsResult.h>
#include <aws/comprehendmedical/model/ListRxNormInferenceJobsRequest.h>
#include <aws/comprehendmedical/model/ListRxNormInferenceJobsResult.h>
#include <aws/comprehendmedical/model/ListSNOMEDCTInferenceJobsRequest.h>
#include <aws/comprehendmedical/model/ListSNOMEDCTInferenceJobsResult.h>
#include <aws/comprehendmedical/model/OutputDataConfig.h>
#include <aws/comprehendmedical/model/RelationshipType.h>
#include <aws/comprehendmedical/model/RxNormAttribute.h>
#include <aws/comprehendmedical/model/RxNormAttributeType.h>
#include <aws/comprehendmedical/model/RxNormConcept.h>
#include <aws/comprehendmedical/model/RxNormEntity.h>
#include <aws/comprehendmedical/model/RxNormEntityCategory.h>
#include <aws/comprehendmedical/model/RxNormEntityType.h>
#include <aws/comprehendmedical/model/RxNormTrait.h>
#include <aws/comprehendmedical/model/RxNormTraitName.h>
#include <aws/comprehendmedical/model/SNOMEDCTAttribute.h>
#include <aws/comprehendmedical/model/SNOMEDCTAttributeType.h>
#include <aws/comprehendmedical/model/SNOMEDCTConcept.h>
#include <aws/comprehendmedical/model/SNOMEDCTDetails.h>
#include <aws/comprehendmedical/model/SNOMEDCTEntity.h>
#include <aws/comprehendmedical/model/SNOMEDCTEntityCategory.h>
#include <aws/comprehendmedical/model/SNOMEDCTEntityType.h>
#include <aws/comprehendmedical/model/SNOMEDCTRelationshipType.h>
#include <aws/comprehendmedical/model/SNOMEDCTTrait.h>
#include <aws/comprehendmedical/model/SNOMEDCTTraitName.h>
#include <aws/comprehendmedical/model/StartEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/StartEntitiesDetectionV2JobResult.h>
#include <aws/comprehendmedical/model/StartICD10CMInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StartICD10CMInferenceJobResult.h>
#include <aws/comprehendmedical/model/StartPHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/StartPHIDetectionJobResult.h>
#include <aws/comprehendmedical/model/StartRxNormInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StartRxNormInferenceJobResult.h>
#include <aws/comprehendmedical/model/StartSNOMEDCTInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StartSNOMEDCTInferenceJobResult.h>
#include <aws/comprehendmedical/model/StopEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/StopEntitiesDetectionV2JobResult.h>
#include <aws/comprehendmedical/model/StopICD10CMInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StopICD10CMInferenceJobResult.h>
#include <aws/comprehendmedical/model/StopPHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/StopPHIDetectionJobResult.h>
#include <aws/comprehendmedical/model/StopRxNormInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StopRxNormInferenceJobResult.h>
#include <aws/comprehendmedical/model/StopSNOMEDCTInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StopSNOMEDCTInferenceJobResult.h>
#include <aws/comprehendmedical/model/Trait.h>
#include <aws/comprehendmedical/model/UnmappedAttribute.h>

using ComprehendMedicalIncludeTest = ::testing::Test;

TEST_F(ComprehendMedicalIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ComprehendMedical::ComprehendMedicalClient>("ComprehendMedicalIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
