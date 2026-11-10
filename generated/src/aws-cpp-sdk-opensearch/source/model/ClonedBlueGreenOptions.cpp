/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/ClonedBlueGreenOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

ClonedBlueGreenOptions::ClonedBlueGreenOptions(JsonView jsonValue) { *this = jsonValue; }

ClonedBlueGreenOptions& ClonedBlueGreenOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RetentionOptions")) {
    m_retentionOptions = jsonValue.GetObject("RetentionOptions");
    m_retentionOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClonedBlueGreenOptions::Jsonize() const {
  JsonValue payload;

  if (m_retentionOptionsHasBeenSet) {
    payload.WithObject("RetentionOptions", m_retentionOptions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
