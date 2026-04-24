/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/AIConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

AIConfig::AIConfig(JsonView jsonValue) { *this = jsonValue; }

AIConfig& AIConfig::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue AIConfig::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
