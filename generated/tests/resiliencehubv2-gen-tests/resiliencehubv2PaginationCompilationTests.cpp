/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for resiliencehubv2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/resiliencehubv2/Resiliencehubv2ClientPagination.h>
#include <aws/resiliencehubv2/Resiliencehubv2PaginationBase.h>
#include <aws/resiliencehubv2/model/ListDependenciesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListUserJourneysPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListServiceTopologyEdgesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListSystemEventsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListFailureModeAssessmentsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListServicesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListReportsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListResourcesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListSystemsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListServiceFunctionsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListFailureModeFindingsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListPoliciesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListServiceEventsPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListInputSourcesPaginationTraits.h>
#include <aws/resiliencehubv2/model/ListAssertionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class resiliencehubv2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(resiliencehubv2PaginationCompilationTest, resiliencehubv2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
