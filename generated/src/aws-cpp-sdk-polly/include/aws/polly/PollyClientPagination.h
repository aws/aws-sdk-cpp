/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/polly/PollyClient.h>
#include <aws/polly/model/ListSpeechSynthesisTasksPaginationTraits.h>

namespace Aws {
namespace Polly {

using ListSpeechSynthesisTasksPaginator =
    Aws::Utils::Pagination::Paginator<PollyClient, Model::ListSpeechSynthesisTasksRequest,
                                      Pagination::ListSpeechSynthesisTasksPaginationTraits<PollyClient>>;

}  // namespace Polly
}  // namespace Aws
