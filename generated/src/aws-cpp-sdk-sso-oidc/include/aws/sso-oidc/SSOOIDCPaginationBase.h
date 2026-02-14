/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace SSOOIDC {

class SSOOIDCClient;

template <typename DerivedClient>
class SSOOIDCPaginationBase {
 public:
  virtual ~SSOOIDCPaginationBase() = default;
};
}  // namespace SSOOIDC
}  // namespace Aws
