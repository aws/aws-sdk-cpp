/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/socialmessaging/SocialMessagingClient.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsPaginationTraits.h>
#include <aws/socialmessaging/model/ListWhatsAppMessageTemplatesPaginationTraits.h>
#include <aws/socialmessaging/model/ListWhatsAppTemplateLibraryPaginationTraits.h>

namespace Aws {
namespace SocialMessaging {

using ListLinkedWhatsAppBusinessAccountsPaginator =
    Aws::Utils::Pagination::Paginator<SocialMessagingClient, Model::ListLinkedWhatsAppBusinessAccountsRequest,
                                      Pagination::ListLinkedWhatsAppBusinessAccountsPaginationTraits<SocialMessagingClient>>;
using ListWhatsAppMessageTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<SocialMessagingClient, Model::ListWhatsAppMessageTemplatesRequest,
                                      Pagination::ListWhatsAppMessageTemplatesPaginationTraits<SocialMessagingClient>>;
using ListWhatsAppTemplateLibraryPaginator =
    Aws::Utils::Pagination::Paginator<SocialMessagingClient, Model::ListWhatsAppTemplateLibraryRequest,
                                      Pagination::ListWhatsAppTemplateLibraryPaginationTraits<SocialMessagingClient>>;

}  // namespace SocialMessaging
}  // namespace Aws
