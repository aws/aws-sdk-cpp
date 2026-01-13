/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DataExchange pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/dataexchange/DataExchangeClientPagination.h>
#include <aws/dataexchange/DataExchangePaginationBase.h>
#include <aws/dataexchange/model/ListDataGrantsPaginationTraits.h>
#include <aws/dataexchange/model/ListJobsPaginationTraits.h>
#include <aws/dataexchange/model/ListReceivedDataGrantsPaginationTraits.h>
#include <aws/dataexchange/model/ListRevisionAssetsPaginationTraits.h>
#include <aws/dataexchange/model/ListDataSetRevisionsPaginationTraits.h>
#include <aws/dataexchange/model/ListEventActionsPaginationTraits.h>
#include <aws/dataexchange/model/ListDataSetsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DataExchangePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DataExchangePaginationCompilationTest, DataExchangePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
