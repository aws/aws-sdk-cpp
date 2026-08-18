/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/TagPropagationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

TagPropagationConfiguration::TagPropagationConfiguration(JsonView jsonValue) { *this = jsonValue; }

TagPropagationConfiguration& TagPropagationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DestinationRoleArn")) {
    m_destinationRoleArn = jsonValue.GetString("DestinationRoleArn");
    m_destinationRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TagConflictResolutionStrategy")) {
    m_tagConflictResolutionStrategy =
        TagConflictResolutionStrategyMapper::GetTagConflictResolutionStrategyForName(jsonValue.GetString("TagConflictResolutionStrategy"));
    m_tagConflictResolutionStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue TagPropagationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_destinationRoleArnHasBeenSet) {
    payload.WithString("DestinationRoleArn", m_destinationRoleArn);
  }

  if (m_tagConflictResolutionStrategyHasBeenSet) {
    payload.WithString("TagConflictResolutionStrategy",
                       TagConflictResolutionStrategyMapper::GetNameForTagConflictResolutionStrategy(m_tagConflictResolutionStrategy));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
