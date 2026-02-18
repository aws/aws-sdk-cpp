/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace TranscribeStreamingService {

class TranscribeStreamingServiceClient;

template <typename DerivedClient>
class TranscribeStreamingServicePaginationBase {
 public:
  virtual ~TranscribeStreamingServicePaginationBase() = default;
};
}  // namespace TranscribeStreamingService
}  // namespace Aws
