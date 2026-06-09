/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/DatabaseCloneConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

DatabaseCloneConfiguration::DatabaseCloneConfiguration(JsonView jsonValue) { *this = jsonValue; }

DatabaseCloneConfiguration& DatabaseCloneConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceAutonomousDatabaseId")) {
    m_sourceAutonomousDatabaseId = jsonValue.GetString("sourceAutonomousDatabaseId");
    m_sourceAutonomousDatabaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloneType")) {
    m_cloneType = CloneTypeMapper::GetCloneTypeForName(jsonValue.GetString("cloneType"));
    m_cloneTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseCloneConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceAutonomousDatabaseIdHasBeenSet) {
    payload.WithString("sourceAutonomousDatabaseId", m_sourceAutonomousDatabaseId);
  }

  if (m_cloneTypeHasBeenSet) {
    payload.WithString("cloneType", CloneTypeMapper::GetNameForCloneType(m_cloneType));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
