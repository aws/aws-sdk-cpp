/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for IoT pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/iot/IoTClientPagination.h>
#include <aws/iot/IoTPaginationBase.h>
#include <aws/iot/model/ListAttachedPoliciesPaginationTraits.h>
#include <aws/iot/model/ListIndicesPaginationTraits.h>
#include <aws/iot/model/ListSecurityProfilesForTargetPaginationTraits.h>
#include <aws/iot/model/ListProvisioningTemplatesPaginationTraits.h>
#include <aws/iot/model/ListTagsForResourcePaginationTraits.h>
#include <aws/iot/model/ListThingTypesPaginationTraits.h>
#include <aws/iot/model/ListThingPrincipalsV2PaginationTraits.h>
#include <aws/iot/model/ListCertificatesPaginationTraits.h>
#include <aws/iot/model/ListCACertificatesPaginationTraits.h>
#include <aws/iot/model/ListStreamsPaginationTraits.h>
#include <aws/iot/model/ListThingRegistrationTaskReportsPaginationTraits.h>
#include <aws/iot/model/ListPrincipalThingsPaginationTraits.h>
#include <aws/iot/model/ListThingRegistrationTasksPaginationTraits.h>
#include <aws/iot/model/ListManagedJobTemplatesPaginationTraits.h>
#include <aws/iot/model/ListScheduledAuditsPaginationTraits.h>
#include <aws/iot/model/ListThingsInThingGroupPaginationTraits.h>
#include <aws/iot/model/ListPackagesPaginationTraits.h>
#include <aws/iot/model/ListViolationEventsPaginationTraits.h>
#include <aws/iot/model/ListThingPrincipalsPaginationTraits.h>
#include <aws/iot/model/ListCommandsPaginationTraits.h>
#include <aws/iot/model/ListCertificatesByCAPaginationTraits.h>
#include <aws/iot/model/ListTargetsForSecurityProfilePaginationTraits.h>
#include <aws/iot/model/ListThingsPaginationTraits.h>
#include <aws/iot/model/ListThingsInBillingGroupPaginationTraits.h>
#include <aws/iot/model/ListV2LoggingLevelsPaginationTraits.h>
#include <aws/iot/model/ListFleetMetricsPaginationTraits.h>
#include <aws/iot/model/ListAuditSuppressionsPaginationTraits.h>
#include <aws/iot/model/ListDomainConfigurationsPaginationTraits.h>
#include <aws/iot/model/ListOTAUpdatesPaginationTraits.h>
#include <aws/iot/model/ListCustomMetricsPaginationTraits.h>
#include <aws/iot/model/ListCommandExecutionsPaginationTraits.h>
#include <aws/iot/model/ListSbomValidationResultsPaginationTraits.h>
#include <aws/iot/model/ListAuditMitigationActionsExecutionsPaginationTraits.h>
#include <aws/iot/model/ListAuditMitigationActionsTasksPaginationTraits.h>
#include <aws/iot/model/ListThingGroupsForThingPaginationTraits.h>
#include <aws/iot/model/ListPrincipalThingsV2PaginationTraits.h>
#include <aws/iot/model/ListDetectMitigationActionsTasksPaginationTraits.h>
#include <aws/iot/model/ListTopicRulesPaginationTraits.h>
#include <aws/iot/model/ListJobExecutionsForJobPaginationTraits.h>
#include <aws/iot/model/ListMetricValuesPaginationTraits.h>
#include <aws/iot/model/ListActiveViolationsPaginationTraits.h>
#include <aws/iot/model/ListSecurityProfilesPaginationTraits.h>
#include <aws/iot/model/ListRoleAliasesPaginationTraits.h>
#include <aws/iot/model/ListThingGroupsPaginationTraits.h>
#include <aws/iot/model/ListTargetsForPolicyPaginationTraits.h>
#include <aws/iot/model/ListAuditFindingsPaginationTraits.h>
#include <aws/iot/model/ListJobsPaginationTraits.h>
#include <aws/iot/model/ListRelatedResourcesForAuditFindingPaginationTraits.h>
#include <aws/iot/model/ListProvisioningTemplateVersionsPaginationTraits.h>
#include <aws/iot/model/ListBillingGroupsPaginationTraits.h>
#include <aws/iot/model/ListPackageVersionsPaginationTraits.h>
#include <aws/iot/model/ListDetectMitigationActionsExecutionsPaginationTraits.h>
#include <aws/iot/model/ListJobExecutionsForThingPaginationTraits.h>
#include <aws/iot/model/ListOutgoingCertificatesPaginationTraits.h>
#include <aws/iot/model/ListAuthorizersPaginationTraits.h>
#include <aws/iot/model/ListTopicRuleDestinationsPaginationTraits.h>
#include <aws/iot/model/ListDimensionsPaginationTraits.h>
#include <aws/iot/model/ListMitigationActionsPaginationTraits.h>
#include <aws/iot/model/ListAuditTasksPaginationTraits.h>
#include <aws/iot/model/ListPoliciesPaginationTraits.h>
#include <aws/iot/model/GetBehaviorModelTrainingSummariesPaginationTraits.h>
#include <aws/iot/model/ListJobTemplatesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class IoTPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(IoTPaginationCompilationTest, IoTPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
