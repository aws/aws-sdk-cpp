/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace QConnect {

class QConnectClient;

template <typename DerivedClient>
class QConnectPaginationBase {
 public:
  /**
   * Create a paginator for ListAIAgents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIAgentsRequest, Pagination::ListAIAgentsPaginationTraits<DerivedClient>>
  ListAIAgentsPaginator(const Model::ListAIAgentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIAgentsRequest,
                                             Pagination::ListAIAgentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListAIAgentVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIAgentVersionsRequest,
                                    Pagination::ListAIAgentVersionsPaginationTraits<DerivedClient>>
  ListAIAgentVersionsPaginator(const Model::ListAIAgentVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIAgentVersionsRequest,
                                             Pagination::ListAIAgentVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAIGuardrails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIGuardrailsRequest,
                                    Pagination::ListAIGuardrailsPaginationTraits<DerivedClient>>
  ListAIGuardrailsPaginator(const Model::ListAIGuardrailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIGuardrailsRequest,
                                             Pagination::ListAIGuardrailsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAIGuardrailVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIGuardrailVersionsRequest,
                                    Pagination::ListAIGuardrailVersionsPaginationTraits<DerivedClient>>
  ListAIGuardrailVersionsPaginator(const Model::ListAIGuardrailVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIGuardrailVersionsRequest,
                                             Pagination::ListAIGuardrailVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAIPrompts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIPromptsRequest, Pagination::ListAIPromptsPaginationTraits<DerivedClient>>
  ListAIPromptsPaginator(const Model::ListAIPromptsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIPromptsRequest,
                                             Pagination::ListAIPromptsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListAIPromptVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIPromptVersionsRequest,
                                    Pagination::ListAIPromptVersionsPaginationTraits<DerivedClient>>
  ListAIPromptVersionsPaginator(const Model::ListAIPromptVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAIPromptVersionsRequest,
                                             Pagination::ListAIPromptVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssistantAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssistantAssociationsRequest,
                                    Pagination::ListAssistantAssociationsPaginationTraits<DerivedClient>>
  ListAssistantAssociationsPaginator(const Model::ListAssistantAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssistantAssociationsRequest,
                                             Pagination::ListAssistantAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssistants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssistantsRequest, Pagination::ListAssistantsPaginationTraits<DerivedClient>>
  ListAssistantsPaginator(const Model::ListAssistantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssistantsRequest,
                                             Pagination::ListAssistantsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListContentAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContentAssociationsRequest,
                                    Pagination::ListContentAssociationsPaginationTraits<DerivedClient>>
  ListContentAssociationsPaginator(const Model::ListContentAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContentAssociationsRequest,
                                             Pagination::ListContentAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContentsRequest, Pagination::ListContentsPaginationTraits<DerivedClient>>
  ListContentsPaginator(const Model::ListContentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContentsRequest,
                                             Pagination::ListContentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportJobsRequest, Pagination::ListImportJobsPaginationTraits<DerivedClient>>
  ListImportJobsPaginator(const Model::ListImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportJobsRequest,
                                             Pagination::ListImportJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListKnowledgeBases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKnowledgeBasesRequest,
                                    Pagination::ListKnowledgeBasesPaginationTraits<DerivedClient>>
  ListKnowledgeBasesPaginator(const Model::ListKnowledgeBasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKnowledgeBasesRequest,
                                             Pagination::ListKnowledgeBasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMessages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMessagesRequest, Pagination::ListMessagesPaginationTraits<DerivedClient>>
  ListMessagesPaginator(const Model::ListMessagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMessagesRequest,
                                             Pagination::ListMessagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListMessageTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMessageTemplatesRequest,
                                    Pagination::ListMessageTemplatesPaginationTraits<DerivedClient>>
  ListMessageTemplatesPaginator(const Model::ListMessageTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMessageTemplatesRequest,
                                             Pagination::ListMessageTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMessageTemplateVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMessageTemplateVersionsRequest,
                                    Pagination::ListMessageTemplateVersionsPaginationTraits<DerivedClient>>
  ListMessageTemplateVersionsPaginator(const Model::ListMessageTemplateVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMessageTemplateVersionsRequest,
                                             Pagination::ListMessageTemplateVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQuickResponses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuickResponsesRequest,
                                    Pagination::ListQuickResponsesPaginationTraits<DerivedClient>>
  ListQuickResponsesPaginator(const Model::ListQuickResponsesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQuickResponsesRequest,
                                             Pagination::ListQuickResponsesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSpans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpansRequest, Pagination::ListSpansPaginationTraits<DerivedClient>>
  ListSpansPaginator(const Model::ListSpansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpansRequest, Pagination::ListSpansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchContent operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContentRequest, Pagination::SearchContentPaginationTraits<DerivedClient>>
  SearchContentPaginator(const Model::SearchContentRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchContentRequest,
                                             Pagination::SearchContentPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for SearchMessageTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchMessageTemplatesRequest,
                                    Pagination::SearchMessageTemplatesPaginationTraits<DerivedClient>>
  SearchMessageTemplatesPaginator(const Model::SearchMessageTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchMessageTemplatesRequest,
                                             Pagination::SearchMessageTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchQuickResponses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQuickResponsesRequest,
                                    Pagination::SearchQuickResponsesPaginationTraits<DerivedClient>>
  SearchQuickResponsesPaginator(const Model::SearchQuickResponsesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchQuickResponsesRequest,
                                             Pagination::SearchQuickResponsesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSessionsRequest, Pagination::SearchSessionsPaginationTraits<DerivedClient>>
  SearchSessionsPaginator(const Model::SearchSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchSessionsRequest,
                                             Pagination::SearchSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace QConnect
}  // namespace Aws
