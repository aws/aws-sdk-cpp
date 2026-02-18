/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsPaginationTraits.h>
#include <aws/socialmessaging/model/ListWhatsAppMessageTemplatesPaginationTraits.h>
#include <aws/socialmessaging/model/ListWhatsAppTemplateLibraryPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SocialMessaging {

class SocialMessagingClient;

template <typename DerivedClient>
class SocialMessagingPaginationBase {
 public:
  /**
   * Create a paginator for ListLinkedWhatsAppBusinessAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinkedWhatsAppBusinessAccountsRequest,
                                    Pagination::ListLinkedWhatsAppBusinessAccountsPaginationTraits<DerivedClient>>
  ListLinkedWhatsAppBusinessAccountsPaginator(const Model::ListLinkedWhatsAppBusinessAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinkedWhatsAppBusinessAccountsRequest,
                                             Pagination::ListLinkedWhatsAppBusinessAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWhatsAppMessageTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatsAppMessageTemplatesRequest,
                                    Pagination::ListWhatsAppMessageTemplatesPaginationTraits<DerivedClient>>
  ListWhatsAppMessageTemplatesPaginator(const Model::ListWhatsAppMessageTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatsAppMessageTemplatesRequest,
                                             Pagination::ListWhatsAppMessageTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWhatsAppTemplateLibrary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatsAppTemplateLibraryRequest,
                                    Pagination::ListWhatsAppTemplateLibraryPaginationTraits<DerivedClient>>
  ListWhatsAppTemplateLibraryPaginator(const Model::ListWhatsAppTemplateLibraryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWhatsAppTemplateLibraryRequest,
                                             Pagination::ListWhatsAppTemplateLibraryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SocialMessaging
}  // namespace Aws
