/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DestinationTableSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DestinationTableSource::DestinationTableSource(JsonView jsonValue) { *this = jsonValue; }

DestinationTableSource& DestinationTableSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TransformOperationId")) {
    m_transformOperationId = jsonValue.GetString("TransformOperationId");
    m_transformOperationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationTableSource::Jsonize() const {
  JsonValue payload;

  if (m_transformOperationIdHasBeenSet) {
    payload.WithString("TransformOperationId", m_transformOperationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
