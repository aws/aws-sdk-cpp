/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws {
namespace Http {
class HttpResponse;
class ClientStream {
public:
  virtual ~ClientStream() = default;
  virtual bool Activate() = 0;
  virtual int WriteData(std::shared_ptr<Aws::IOStream> stream, bool endStream = false) = 0;
  virtual std::shared_ptr<Aws::Http::HttpResponse> GetResponse() const = 0;
};
}
}  // namespace Aws
