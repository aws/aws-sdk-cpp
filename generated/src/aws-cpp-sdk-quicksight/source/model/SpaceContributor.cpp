/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SpaceContributor.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SpaceContributor::SpaceContributor(JsonView jsonValue) { *this = jsonValue; }

SpaceContributor& SpaceContributor::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userName")) {
    m_userName = jsonValue.GetString("userName");
    m_userNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rawFileSizeBytes")) {
    m_rawFileSizeBytes = jsonValue.GetInt64("rawFileSizeBytes");
    m_rawFileSizeBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("percentage")) {
    m_percentage = jsonValue.GetDouble("percentage");
    m_percentageHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceContributor::Jsonize() const {
  JsonValue payload;

  if (m_userNameHasBeenSet) {
    payload.WithString("userName", m_userName);
  }

  if (m_rawFileSizeBytesHasBeenSet) {
    payload.WithInt64("rawFileSizeBytes", m_rawFileSizeBytes);
  }

  if (m_percentageHasBeenSet) {
    payload.WithDouble("percentage", m_percentage);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
