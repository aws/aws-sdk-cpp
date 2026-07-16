/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/CspmProviderUpdateConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

CspmProviderUpdateConfiguration::CspmProviderUpdateConfiguration(JsonView jsonValue) { *this = jsonValue; }

CspmProviderUpdateConfiguration& CspmProviderUpdateConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Azure")) {
    m_azure = jsonValue.GetObject("Azure");
    m_azureHasBeenSet = true;
  }
  return *this;
}

JsonValue CspmProviderUpdateConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_azureHasBeenSet) {
    payload.WithObject("Azure", m_azure.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
