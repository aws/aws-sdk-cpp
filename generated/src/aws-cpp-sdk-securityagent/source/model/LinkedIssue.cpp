/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/LinkedIssue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

LinkedIssue::LinkedIssue(JsonView jsonValue) { *this = jsonValue; }

LinkedIssue& LinkedIssue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("provider")) {
    m_provider = ProviderMapper::GetProviderForName(jsonValue.GetString("provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integrationId")) {
    m_integrationId = jsonValue.GetString("integrationId");
    m_integrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("projectKey")) {
    m_projectKey = jsonValue.GetString("projectKey");
    m_projectKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issueKey")) {
    m_issueKey = jsonValue.GetString("issueKey");
    m_issueKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issueId")) {
    m_issueId = jsonValue.GetString("issueId");
    m_issueIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issueUrl")) {
    m_issueUrl = jsonValue.GetString("issueUrl");
    m_issueUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("siteUrl")) {
    m_siteUrl = jsonValue.GetString("siteUrl");
    m_siteUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkedIssue::Jsonize() const {
  JsonValue payload;

  if (m_providerHasBeenSet) {
    payload.WithString("provider", ProviderMapper::GetNameForProvider(m_provider));
  }

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_projectKeyHasBeenSet) {
    payload.WithString("projectKey", m_projectKey);
  }

  if (m_issueKeyHasBeenSet) {
    payload.WithString("issueKey", m_issueKey);
  }

  if (m_issueIdHasBeenSet) {
    payload.WithString("issueId", m_issueId);
  }

  if (m_issueUrlHasBeenSet) {
    payload.WithString("issueUrl", m_issueUrl);
  }

  if (m_siteUrlHasBeenSet) {
    payload.WithString("siteUrl", m_siteUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
