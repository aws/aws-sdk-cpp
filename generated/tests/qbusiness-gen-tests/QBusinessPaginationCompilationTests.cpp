/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for QBusiness pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/qbusiness/QBusinessClientPagination.h>
#include <aws/qbusiness/QBusinessPaginationBase.h>
#include <aws/qbusiness/model/ListConversationsPaginationTraits.h>
#include <aws/qbusiness/model/ListWebExperiencesPaginationTraits.h>
#include <aws/qbusiness/model/ListIndicesPaginationTraits.h>
#include <aws/qbusiness/model/ListPluginTypeActionsPaginationTraits.h>
#include <aws/qbusiness/model/ListDataSourcesPaginationTraits.h>
#include <aws/qbusiness/model/ListGroupsPaginationTraits.h>
#include <aws/qbusiness/model/ListMessagesPaginationTraits.h>
#include <aws/qbusiness/model/ListPluginActionsPaginationTraits.h>
#include <aws/qbusiness/model/ListAttachmentsPaginationTraits.h>
#include <aws/qbusiness/model/SearchRelevantContentPaginationTraits.h>
#include <aws/qbusiness/model/GetChatControlsConfigurationPaginationTraits.h>
#include <aws/qbusiness/model/ListDataAccessorsPaginationTraits.h>
#include <aws/qbusiness/model/ListDataSourceSyncJobsPaginationTraits.h>
#include <aws/qbusiness/model/ListRetrieversPaginationTraits.h>
#include <aws/qbusiness/model/ListSubscriptionsPaginationTraits.h>
#include <aws/qbusiness/model/ListDocumentsPaginationTraits.h>
#include <aws/qbusiness/model/ListChatResponseConfigurationsPaginationTraits.h>
#include <aws/qbusiness/model/ListPluginTypeMetadataPaginationTraits.h>
#include <aws/qbusiness/model/ListApplicationsPaginationTraits.h>
#include <aws/qbusiness/model/ListPluginsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class QBusinessPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(QBusinessPaginationCompilationTest, QBusinessPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
