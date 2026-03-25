/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpClientStream.h>

#include <functional>
#include <memory>

namespace Aws {
namespace Http {
class HttpRequest;
class AWS_CORE_API Connection {
 public:
  virtual ~Connection() = default;
  virtual std::shared_ptr<Aws::Http::ClientStream> NewClientStream(
    const std::shared_ptr<HttpRequest>& request,
    std::function<void(int errorCode)> onStreamComplete) = 0;
};
}  // namespace Http
}  // namespace Aws
