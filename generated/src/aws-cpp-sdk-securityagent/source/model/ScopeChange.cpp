/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ScopeChange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ScopeChange::ScopeChange(JsonView jsonValue) { *this = jsonValue; }

ScopeChange& ScopeChange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("integrationId")) {
    m_integrationId = jsonValue.GetString("integrationId");
    m_integrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerResourceId")) {
    m_providerResourceId = jsonValue.GetString("providerResourceId");
    m_providerResourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("baseCommitSha")) {
    m_baseCommitSha = jsonValue.GetString("baseCommitSha");
    m_baseCommitShaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("headCommitSha")) {
    m_headCommitSha = jsonValue.GetString("headCommitSha");
    m_headCommitShaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("triggerRunId")) {
    m_triggerRunId = jsonValue.GetString("triggerRunId");
    m_triggerRunIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeChange::Jsonize() const {
  JsonValue payload;

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_providerResourceIdHasBeenSet) {
    payload.WithString("providerResourceId", m_providerResourceId);
  }

  if (m_baseCommitShaHasBeenSet) {
    payload.WithString("baseCommitSha", m_baseCommitSha);
  }

  if (m_headCommitShaHasBeenSet) {
    payload.WithString("headCommitSha", m_headCommitSha);
  }

  if (m_triggerRunIdHasBeenSet) {
    payload.WithString("triggerRunId", m_triggerRunId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
