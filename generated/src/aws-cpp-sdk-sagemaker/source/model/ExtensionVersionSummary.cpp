/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ExtensionVersionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ExtensionVersionSummary::ExtensionVersionSummary(JsonView jsonValue) { *this = jsonValue; }

ExtensionVersionSummary& ExtensionVersionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ExtensionVersion")) {
    m_extensionVersion = jsonValue.GetString("ExtensionVersion");
    m_extensionVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtensionVersionSummary::Jsonize() const {
  JsonValue payload;

  if (m_extensionVersionHasBeenSet) {
    payload.WithString("ExtensionVersion", m_extensionVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
