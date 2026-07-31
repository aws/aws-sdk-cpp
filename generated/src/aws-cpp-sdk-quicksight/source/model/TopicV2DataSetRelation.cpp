/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TopicV2DataSetRelation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TopicV2DataSetRelation::TopicV2DataSetRelation(JsonView jsonValue) { *this = jsonValue; }

TopicV2DataSetRelation& TopicV2DataSetRelation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Left")) {
    m_left = jsonValue.GetObject("Left");
    m_leftHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Right")) {
    m_right = jsonValue.GetObject("Right");
    m_rightHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicV2DataSetRelation::Jsonize() const {
  JsonValue payload;

  if (m_leftHasBeenSet) {
    payload.WithObject("Left", m_left.Jsonize());
  }

  if (m_rightHasBeenSet) {
    payload.WithObject("Right", m_right.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
