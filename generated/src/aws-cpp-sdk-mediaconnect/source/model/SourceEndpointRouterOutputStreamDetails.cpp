/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SourceEndpointRouterOutputStreamDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SourceEndpointRouterOutputStreamDetails::SourceEndpointRouterOutputStreamDetails(JsonView jsonValue) { *this = jsonValue; }

SourceEndpointRouterOutputStreamDetails& SourceEndpointRouterOutputStreamDetails::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue SourceEndpointRouterOutputStreamDetails::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
