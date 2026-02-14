/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Macie2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/macie2/Macie2ClientPagination.h>
#include <aws/macie2/Macie2PaginationBase.h>
#include <aws/macie2/model/ListAutomatedDiscoveryAccountsPaginationTraits.h>
#include <aws/macie2/model/ListFindingsPaginationTraits.h>
#include <aws/macie2/model/ListInvitationsPaginationTraits.h>
#include <aws/macie2/model/ListClassificationScopesPaginationTraits.h>
#include <aws/macie2/model/ListSensitivityInspectionTemplatesPaginationTraits.h>
#include <aws/macie2/model/ListResourceProfileArtifactsPaginationTraits.h>
#include <aws/macie2/model/ListResourceProfileDetectionsPaginationTraits.h>
#include <aws/macie2/model/ListFindingsFiltersPaginationTraits.h>
#include <aws/macie2/model/GetUsageStatisticsPaginationTraits.h>
#include <aws/macie2/model/ListMembersPaginationTraits.h>
#include <aws/macie2/model/ListAllowListsPaginationTraits.h>
#include <aws/macie2/model/ListOrganizationAdminAccountsPaginationTraits.h>
#include <aws/macie2/model/ListClassificationJobsPaginationTraits.h>
#include <aws/macie2/model/SearchResourcesPaginationTraits.h>
#include <aws/macie2/model/DescribeBucketsPaginationTraits.h>
#include <aws/macie2/model/ListCustomDataIdentifiersPaginationTraits.h>
#include <aws/macie2/model/ListManagedDataIdentifiersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Macie2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Macie2PaginationCompilationTest, Macie2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
