/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpClientStream.h>

#include <memory>

namespace Aws {
namespace Http {
class HttpRequest;
class Connection {
 public:
  virtual ~Connection() = default;
  virtual std::shared_ptr<Aws::Http::ClientStream> NewClientStream(
    const std::shared_ptr<HttpRequest>& request,
    std::function<void ()> onStreamComplete) = 0;
};
}  // namespace Http
}  // namespace Aws
