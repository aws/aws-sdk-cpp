/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/IntegrationFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

IntegrationFilter::IntegrationFilter(JsonView jsonValue) { *this = jsonValue; }

IntegrationFilter& IntegrationFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("provider")) {
    m_provider = ProviderMapper::GetProviderForName(jsonValue.GetString("provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerType")) {
    m_providerType = ProviderTypeMapper::GetProviderTypeForName(jsonValue.GetString("providerType"));
    m_providerTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegrationFilter::Jsonize() const {
  JsonValue payload;

  if (m_providerHasBeenSet) {
    payload.WithString("provider", ProviderMapper::GetNameForProvider(m_provider));
  }

  if (m_providerTypeHasBeenSet) {
    payload.WithString("providerType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
