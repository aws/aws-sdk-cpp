/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SystemCreatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SystemCreatedMetadata::SystemCreatedMetadata(JsonView jsonValue) { *this = jsonValue; }

SystemCreatedMetadata& SystemCreatedMetadata::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue SystemCreatedMetadata::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
