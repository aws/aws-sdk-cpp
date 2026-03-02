/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/polly/model/ListSpeechSynthesisTasksPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Polly {

class PollyClient;

template <typename DerivedClient>
class PollyPaginationBase {
 public:
  /**
   * Create a paginator for ListSpeechSynthesisTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpeechSynthesisTasksRequest,
                                    Pagination::ListSpeechSynthesisTasksPaginationTraits<DerivedClient>>
  ListSpeechSynthesisTasksPaginator(const Model::ListSpeechSynthesisTasksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSpeechSynthesisTasksRequest,
                                             Pagination::ListSpeechSynthesisTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Polly
}  // namespace Aws
