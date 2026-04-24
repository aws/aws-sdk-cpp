/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/RegisteredUserQuickChatEmbeddingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

RegisteredUserQuickChatEmbeddingConfiguration::RegisteredUserQuickChatEmbeddingConfiguration(JsonView jsonValue) { *this = jsonValue; }

RegisteredUserQuickChatEmbeddingConfiguration& RegisteredUserQuickChatEmbeddingConfiguration::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue RegisteredUserQuickChatEmbeddingConfiguration::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
