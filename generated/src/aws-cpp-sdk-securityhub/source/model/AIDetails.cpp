/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/AIDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

AIDetails::AIDetails(JsonView jsonValue) { *this = jsonValue; }

AIDetails& AIDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("HostResourceGuid")) {
    m_hostResourceGuid = jsonValue.GetString("HostResourceGuid");
    m_hostResourceGuidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HostResourceType")) {
    m_hostResourceType = jsonValue.GetString("HostResourceType");
    m_hostResourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CanonicalId")) {
    m_canonicalId = jsonValue.GetString("CanonicalId");
    m_canonicalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfHostedAIModelResourceCount")) {
    m_selfHostedAIModelResourceCount = jsonValue.GetInteger("SelfHostedAIModelResourceCount");
    m_selfHostedAIModelResourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfHostedAIAgentResourceCount")) {
    m_selfHostedAIAgentResourceCount = jsonValue.GetInteger("SelfHostedAIAgentResourceCount");
    m_selfHostedAIAgentResourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfHostedAIModelServingResourceCount")) {
    m_selfHostedAIModelServingResourceCount = jsonValue.GetInteger("SelfHostedAIModelServingResourceCount");
    m_selfHostedAIModelServingResourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfHostedAIExternalEndpointResourceCount")) {
    m_selfHostedAIExternalEndpointResourceCount = jsonValue.GetInteger("SelfHostedAIExternalEndpointResourceCount");
    m_selfHostedAIExternalEndpointResourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfHostedAIDevelopmentResourceCount")) {
    m_selfHostedAIDevelopmentResourceCount = jsonValue.GetInteger("SelfHostedAIDevelopmentResourceCount");
    m_selfHostedAIDevelopmentResourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfHostedAIAgentFrameworkResourceCount")) {
    m_selfHostedAIAgentFrameworkResourceCount = jsonValue.GetInteger("SelfHostedAIAgentFrameworkResourceCount");
    m_selfHostedAIAgentFrameworkResourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfHostedAIAgentToolsAndIdentityResourceCount")) {
    m_selfHostedAIAgentToolsAndIdentityResourceCount = jsonValue.GetInteger("SelfHostedAIAgentToolsAndIdentityResourceCount");
    m_selfHostedAIAgentToolsAndIdentityResourceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfHostedTotalAIResourceCount")) {
    m_selfHostedTotalAIResourceCount = jsonValue.GetInteger("SelfHostedTotalAIResourceCount");
    m_selfHostedTotalAIResourceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AIDetails::Jsonize() const {
  JsonValue payload;

  if (m_hostResourceGuidHasBeenSet) {
    payload.WithString("HostResourceGuid", m_hostResourceGuid);
  }

  if (m_hostResourceTypeHasBeenSet) {
    payload.WithString("HostResourceType", m_hostResourceType);
  }

  if (m_canonicalIdHasBeenSet) {
    payload.WithString("CanonicalId", m_canonicalId);
  }

  if (m_selfHostedAIModelResourceCountHasBeenSet) {
    payload.WithInteger("SelfHostedAIModelResourceCount", m_selfHostedAIModelResourceCount);
  }

  if (m_selfHostedAIAgentResourceCountHasBeenSet) {
    payload.WithInteger("SelfHostedAIAgentResourceCount", m_selfHostedAIAgentResourceCount);
  }

  if (m_selfHostedAIModelServingResourceCountHasBeenSet) {
    payload.WithInteger("SelfHostedAIModelServingResourceCount", m_selfHostedAIModelServingResourceCount);
  }

  if (m_selfHostedAIExternalEndpointResourceCountHasBeenSet) {
    payload.WithInteger("SelfHostedAIExternalEndpointResourceCount", m_selfHostedAIExternalEndpointResourceCount);
  }

  if (m_selfHostedAIDevelopmentResourceCountHasBeenSet) {
    payload.WithInteger("SelfHostedAIDevelopmentResourceCount", m_selfHostedAIDevelopmentResourceCount);
  }

  if (m_selfHostedAIAgentFrameworkResourceCountHasBeenSet) {
    payload.WithInteger("SelfHostedAIAgentFrameworkResourceCount", m_selfHostedAIAgentFrameworkResourceCount);
  }

  if (m_selfHostedAIAgentToolsAndIdentityResourceCountHasBeenSet) {
    payload.WithInteger("SelfHostedAIAgentToolsAndIdentityResourceCount", m_selfHostedAIAgentToolsAndIdentityResourceCount);
  }

  if (m_selfHostedTotalAIResourceCountHasBeenSet) {
    payload.WithInteger("SelfHostedTotalAIResourceCount", m_selfHostedTotalAIResourceCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
