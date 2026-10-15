/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/Smithy_EXPORTS.h>

#include <utility>

namespace smithy {
namespace schema {

struct SMITHY_API OperationRequestContext {
  OperationRequestContext() = default;
  // RPC protocols name only the action / version; HTTP-binding protocols add the URI pattern / host prefix.
  OperationRequestContext(Aws::String actionName, Aws::String apiVersion, Aws::String httpUriPattern = {},
                          Aws::String endpointHostPrefix = {})
      : action(std::move(actionName)),
        version(std::move(apiVersion)),
        uriPattern(std::move(httpUriPattern)),
        hostPrefix(std::move(endpointHostPrefix)) {}

  Aws::String action;
  Aws::String version;
  /** HTTP-binding protocols: the operation's {@code @http} URI pattern, e.g. {@code /items/{id}/{path+}?x-id=Get}. */
  Aws::String uriPattern;
  /** HTTP-binding protocols: the operation's {@code @endpoint} host prefix, e.g. {@code {label}.data.}; empty for none. */
  Aws::String hostPrefix;
};

}  // namespace schema
}  // namespace smithy
