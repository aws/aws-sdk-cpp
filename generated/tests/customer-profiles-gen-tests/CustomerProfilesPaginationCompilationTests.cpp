/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CustomerProfiles pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/customer-profiles/CustomerProfilesClientPagination.h>
#include <aws/customer-profiles/CustomerProfilesPaginationBase.h>
#include <aws/customer-profiles/model/ListDomainLayoutsPaginationTraits.h>
#include <aws/customer-profiles/model/ListRecommendersPaginationTraits.h>
#include <aws/customer-profiles/model/ListEventTriggersPaginationTraits.h>
#include <aws/customer-profiles/model/ListSegmentDefinitionsPaginationTraits.h>
#include <aws/customer-profiles/model/ListDomainObjectTypesPaginationTraits.h>
#include <aws/customer-profiles/model/ListEventStreamsPaginationTraits.h>
#include <aws/customer-profiles/model/ListRuleBasedMatchesPaginationTraits.h>
#include <aws/customer-profiles/model/ListUploadJobsPaginationTraits.h>
#include <aws/customer-profiles/model/GetSimilarProfilesPaginationTraits.h>
#include <aws/customer-profiles/model/ListObjectTypeAttributesPaginationTraits.h>
#include <aws/customer-profiles/model/ListRecommenderRecipesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CustomerProfilesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CustomerProfilesPaginationCompilationTest, CustomerProfilesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
