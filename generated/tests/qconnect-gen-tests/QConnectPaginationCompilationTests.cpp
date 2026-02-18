/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for QConnect pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/qconnect/QConnectClientPagination.h>
#include <aws/qconnect/QConnectPaginationBase.h>
#include <aws/qconnect/model/ListAIPromptsPaginationTraits.h>
#include <aws/qconnect/model/SearchQuickResponsesPaginationTraits.h>
#include <aws/qconnect/model/ListMessageTemplateVersionsPaginationTraits.h>
#include <aws/qconnect/model/ListContentAssociationsPaginationTraits.h>
#include <aws/qconnect/model/SearchContentPaginationTraits.h>
#include <aws/qconnect/model/ListAIPromptVersionsPaginationTraits.h>
#include <aws/qconnect/model/ListMessageTemplatesPaginationTraits.h>
#include <aws/qconnect/model/ListContentsPaginationTraits.h>
#include <aws/qconnect/model/ListKnowledgeBasesPaginationTraits.h>
#include <aws/qconnect/model/ListAssistantAssociationsPaginationTraits.h>
#include <aws/qconnect/model/ListImportJobsPaginationTraits.h>
#include <aws/qconnect/model/ListMessagesPaginationTraits.h>
#include <aws/qconnect/model/SearchSessionsPaginationTraits.h>
#include <aws/qconnect/model/ListAIAgentVersionsPaginationTraits.h>
#include <aws/qconnect/model/ListAIGuardrailsPaginationTraits.h>
#include <aws/qconnect/model/ListQuickResponsesPaginationTraits.h>
#include <aws/qconnect/model/ListAIAgentsPaginationTraits.h>
#include <aws/qconnect/model/ListAIGuardrailVersionsPaginationTraits.h>
#include <aws/qconnect/model/ListSpansPaginationTraits.h>
#include <aws/qconnect/model/SearchMessageTemplatesPaginationTraits.h>
#include <aws/qconnect/model/ListAssistantsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class QConnectPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(QConnectPaginationCompilationTest, QConnectPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
