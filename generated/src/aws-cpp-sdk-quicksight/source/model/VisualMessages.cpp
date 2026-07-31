/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/VisualMessages.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

VisualMessages::VisualMessages(JsonView jsonValue) { *this = jsonValue; }

VisualMessages& VisualMessages::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NoDataMessage")) {
    m_noDataMessage = jsonValue.GetObject("NoDataMessage");
    m_noDataMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue VisualMessages::Jsonize() const {
  JsonValue payload;

  if (m_noDataMessageHasBeenSet) {
    payload.WithObject("NoDataMessage", m_noDataMessage.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
