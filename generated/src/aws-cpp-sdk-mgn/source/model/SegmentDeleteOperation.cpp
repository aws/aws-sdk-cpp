/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SegmentDeleteOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SegmentDeleteOperation::SegmentDeleteOperation(JsonView jsonValue) { *this = jsonValue; }

SegmentDeleteOperation& SegmentDeleteOperation::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue SegmentDeleteOperation::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
