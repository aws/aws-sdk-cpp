/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/NamedEntitySort.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

NamedEntitySort::NamedEntitySort(JsonView jsonValue) { *this = jsonValue; }

NamedEntitySort& NamedEntitySort::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldName")) {
    m_fieldName = jsonValue.GetString("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Direction")) {
    m_direction = TopicSortDirectionMapper::GetTopicSortDirectionForName(jsonValue.GetString("Direction"));
    m_directionHasBeenSet = true;
  }
  return *this;
}

JsonValue NamedEntitySort::Jsonize() const {
  JsonValue payload;

  if (m_fieldNameHasBeenSet) {
    payload.WithString("FieldName", m_fieldName);
  }

  if (m_directionHasBeenSet) {
    payload.WithString("Direction", TopicSortDirectionMapper::GetNameForTopicSortDirection(m_direction));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
