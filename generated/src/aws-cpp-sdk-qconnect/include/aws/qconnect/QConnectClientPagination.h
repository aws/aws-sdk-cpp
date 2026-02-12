/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/qconnect/QConnectClient.h>
#include <aws/qconnect/model/ListAIAgentVersionsPaginationTraits.h>
#include <aws/qconnect/model/ListAIAgentsPaginationTraits.h>
#include <aws/qconnect/model/ListAIGuardrailVersionsPaginationTraits.h>
#include <aws/qconnect/model/ListAIGuardrailsPaginationTraits.h>
#include <aws/qconnect/model/ListAIPromptVersionsPaginationTraits.h>
#include <aws/qconnect/model/ListAIPromptsPaginationTraits.h>
#include <aws/qconnect/model/ListAssistantAssociationsPaginationTraits.h>
#include <aws/qconnect/model/ListAssistantsPaginationTraits.h>
#include <aws/qconnect/model/ListContentAssociationsPaginationTraits.h>
#include <aws/qconnect/model/ListContentsPaginationTraits.h>
#include <aws/qconnect/model/ListImportJobsPaginationTraits.h>
#include <aws/qconnect/model/ListKnowledgeBasesPaginationTraits.h>
#include <aws/qconnect/model/ListMessageTemplateVersionsPaginationTraits.h>
#include <aws/qconnect/model/ListMessageTemplatesPaginationTraits.h>
#include <aws/qconnect/model/ListMessagesPaginationTraits.h>
#include <aws/qconnect/model/ListQuickResponsesPaginationTraits.h>
#include <aws/qconnect/model/ListSpansPaginationTraits.h>
#include <aws/qconnect/model/SearchContentPaginationTraits.h>
#include <aws/qconnect/model/SearchMessageTemplatesPaginationTraits.h>
#include <aws/qconnect/model/SearchQuickResponsesPaginationTraits.h>
#include <aws/qconnect/model/SearchSessionsPaginationTraits.h>

namespace Aws {
namespace QConnect {

using ListAIAgentsPaginator =
    Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListAIAgentsRequest, Pagination::ListAIAgentsPaginationTraits<QConnectClient>>;
using ListAIAgentVersionsPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListAIAgentVersionsRequest,
                                                                       Pagination::ListAIAgentVersionsPaginationTraits<QConnectClient>>;
using ListAIGuardrailsPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListAIGuardrailsRequest,
                                                                    Pagination::ListAIGuardrailsPaginationTraits<QConnectClient>>;
using ListAIGuardrailVersionsPaginator =
    Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListAIGuardrailVersionsRequest,
                                      Pagination::ListAIGuardrailVersionsPaginationTraits<QConnectClient>>;
using ListAIPromptsPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListAIPromptsRequest,
                                                                 Pagination::ListAIPromptsPaginationTraits<QConnectClient>>;
using ListAIPromptVersionsPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListAIPromptVersionsRequest,
                                                                        Pagination::ListAIPromptVersionsPaginationTraits<QConnectClient>>;
using ListAssistantAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListAssistantAssociationsRequest,
                                      Pagination::ListAssistantAssociationsPaginationTraits<QConnectClient>>;
using ListAssistantsPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListAssistantsRequest,
                                                                  Pagination::ListAssistantsPaginationTraits<QConnectClient>>;
using ListContentAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListContentAssociationsRequest,
                                      Pagination::ListContentAssociationsPaginationTraits<QConnectClient>>;
using ListContentsPaginator =
    Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListContentsRequest, Pagination::ListContentsPaginationTraits<QConnectClient>>;
using ListImportJobsPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListImportJobsRequest,
                                                                  Pagination::ListImportJobsPaginationTraits<QConnectClient>>;
using ListKnowledgeBasesPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListKnowledgeBasesRequest,
                                                                      Pagination::ListKnowledgeBasesPaginationTraits<QConnectClient>>;
using ListMessagesPaginator =
    Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListMessagesRequest, Pagination::ListMessagesPaginationTraits<QConnectClient>>;
using ListMessageTemplatesPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListMessageTemplatesRequest,
                                                                        Pagination::ListMessageTemplatesPaginationTraits<QConnectClient>>;
using ListMessageTemplateVersionsPaginator =
    Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListMessageTemplateVersionsRequest,
                                      Pagination::ListMessageTemplateVersionsPaginationTraits<QConnectClient>>;
using ListQuickResponsesPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListQuickResponsesRequest,
                                                                      Pagination::ListQuickResponsesPaginationTraits<QConnectClient>>;
using ListSpansPaginator =
    Aws::Utils::Pagination::Paginator<QConnectClient, Model::ListSpansRequest, Pagination::ListSpansPaginationTraits<QConnectClient>>;
using SearchContentPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::SearchContentRequest,
                                                                 Pagination::SearchContentPaginationTraits<QConnectClient>>;
using SearchMessageTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<QConnectClient, Model::SearchMessageTemplatesRequest,
                                      Pagination::SearchMessageTemplatesPaginationTraits<QConnectClient>>;
using SearchQuickResponsesPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::SearchQuickResponsesRequest,
                                                                        Pagination::SearchQuickResponsesPaginationTraits<QConnectClient>>;
using SearchSessionsPaginator = Aws::Utils::Pagination::Paginator<QConnectClient, Model::SearchSessionsRequest,
                                                                  Pagination::SearchSessionsPaginationTraits<QConnectClient>>;

}  // namespace QConnect
}  // namespace Aws
