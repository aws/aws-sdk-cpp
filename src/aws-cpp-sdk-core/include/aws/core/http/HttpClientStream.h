/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/Core_EXPORTS.h>

#include <functional>
#include <memory>

namespace Aws {
namespace Http {
class HttpResponse;
class AWS_CORE_API ClientStream {
 public:
  virtual ~ClientStream() = default;
  virtual bool Activate() = 0;
  virtual int WriteData(std::shared_ptr<Aws::IOStream> stream,
    const std::function<void(int errorCode)>& onComplete,
    bool endStream = false) = 0;
  virtual std::shared_ptr<Aws::Http::HttpResponse> GetResponse() const = 0;
};
}  // namespace Http
}  // namespace Aws
