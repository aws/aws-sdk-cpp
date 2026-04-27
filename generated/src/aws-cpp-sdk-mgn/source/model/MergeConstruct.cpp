/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/MergeConstruct.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

MergeConstruct::MergeConstruct(JsonView jsonValue) { *this = jsonValue; }

MergeConstruct& MergeConstruct::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("segmentID")) {
    m_segmentID = jsonValue.GetString("segmentID");
    m_segmentIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("constructID")) {
    m_constructID = jsonValue.GetString("constructID");
    m_constructIDHasBeenSet = true;
  }
  return *this;
}

JsonValue MergeConstruct::Jsonize() const {
  JsonValue payload;

  if (m_segmentIDHasBeenSet) {
    payload.WithString("segmentID", m_segmentID);
  }

  if (m_constructIDHasBeenSet) {
    payload.WithString("constructID", m_constructID);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
