/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/service-quotas/ServiceQuotasClient.h>
#include <aws/service-quotas/ServiceQuotasEndpointProvider.h>
#include <aws/service-quotas/ServiceQuotasEndpointRules.h>
#include <aws/service-quotas/ServiceQuotasErrorMarshaller.h>
#include <aws/service-quotas/ServiceQuotasErrors.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/service-quotas/ServiceQuotasServiceClientModel.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/AppliedLevelEnum.h>
#include <aws/service-quotas/model/AssociateServiceQuotaTemplateRequest.h>
#include <aws/service-quotas/model/AssociateServiceQuotaTemplateResult.h>
#include <aws/service-quotas/model/CreateSupportCaseRequest.h>
#include <aws/service-quotas/model/CreateSupportCaseResult.h>
#include <aws/service-quotas/model/DeleteServiceQuotaIncreaseRequestFromTemplateRequest.h>
#include <aws/service-quotas/model/DeleteServiceQuotaIncreaseRequestFromTemplateResult.h>
#include <aws/service-quotas/model/DisassociateServiceQuotaTemplateRequest.h>
#include <aws/service-quotas/model/DisassociateServiceQuotaTemplateResult.h>
#include <aws/service-quotas/model/ErrorCode.h>
#include <aws/service-quotas/model/ErrorReason.h>
#include <aws/service-quotas/model/GetAWSDefaultServiceQuotaRequest.h>
#include <aws/service-quotas/model/GetAWSDefaultServiceQuotaResult.h>
#include <aws/service-quotas/model/GetAssociationForServiceQuotaTemplateRequest.h>
#include <aws/service-quotas/model/GetAssociationForServiceQuotaTemplateResult.h>
#include <aws/service-quotas/model/GetRequestedServiceQuotaChangeRequest.h>
#include <aws/service-quotas/model/GetRequestedServiceQuotaChangeResult.h>
#include <aws/service-quotas/model/GetServiceQuotaIncreaseRequestFromTemplateRequest.h>
#include <aws/service-quotas/model/GetServiceQuotaIncreaseRequestFromTemplateResult.h>
#include <aws/service-quotas/model/GetServiceQuotaRequest.h>
#include <aws/service-quotas/model/GetServiceQuotaResult.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasRequest.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasResult.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaRequest.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaResult.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryRequest.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryResult.h>
#include <aws/service-quotas/model/ListServiceQuotaIncreaseRequestsInTemplateRequest.h>
#include <aws/service-quotas/model/ListServiceQuotaIncreaseRequestsInTemplateResult.h>
#include <aws/service-quotas/model/ListServiceQuotasRequest.h>
#include <aws/service-quotas/model/ListServiceQuotasResult.h>
#include <aws/service-quotas/model/ListServicesRequest.h>
#include <aws/service-quotas/model/ListServicesResult.h>
#include <aws/service-quotas/model/ListTagsForResourceRequest.h>
#include <aws/service-quotas/model/ListTagsForResourceResult.h>
#include <aws/service-quotas/model/MetricInfo.h>
#include <aws/service-quotas/model/PeriodUnit.h>
#include <aws/service-quotas/model/PutServiceQuotaIncreaseRequestIntoTemplateRequest.h>
#include <aws/service-quotas/model/PutServiceQuotaIncreaseRequestIntoTemplateResult.h>
#include <aws/service-quotas/model/QuotaContextInfo.h>
#include <aws/service-quotas/model/QuotaContextScope.h>
#include <aws/service-quotas/model/QuotaPeriod.h>
#include <aws/service-quotas/model/RequestServiceQuotaIncreaseRequest.h>
#include <aws/service-quotas/model/RequestServiceQuotaIncreaseResult.h>
#include <aws/service-quotas/model/RequestStatus.h>
#include <aws/service-quotas/model/RequestedServiceQuotaChange.h>
#include <aws/service-quotas/model/ServiceInfo.h>
#include <aws/service-quotas/model/ServiceQuota.h>
#include <aws/service-quotas/model/ServiceQuotaIncreaseRequestInTemplate.h>
#include <aws/service-quotas/model/ServiceQuotaTemplateAssociationStatus.h>
#include <aws/service-quotas/model/Tag.h>
#include <aws/service-quotas/model/TagResourceRequest.h>
#include <aws/service-quotas/model/TagResourceResult.h>
#include <aws/service-quotas/model/UntagResourceRequest.h>
#include <aws/service-quotas/model/UntagResourceResult.h>

using ServiceQuotasIncludeTest = ::testing::Test;

TEST_F(ServiceQuotasIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ServiceQuotas::ServiceQuotasClient>("ServiceQuotasIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
