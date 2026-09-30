/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ProviderInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ProviderInput::ProviderInput(JsonView jsonValue) { *this = jsonValue; }

ProviderInput& ProviderInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("github")) {
    m_github = jsonValue.GetObject("github");
    m_githubHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gitlab")) {
    m_gitlab = jsonValue.GetObject("gitlab");
    m_gitlabHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bitbucket")) {
    m_bitbucket = jsonValue.GetObject("bitbucket");
    m_bitbucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confluence")) {
    m_confluence = jsonValue.GetObject("confluence");
    m_confluenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azureDevOps")) {
    m_azureDevOps = jsonValue.GetObject("azureDevOps");
    m_azureDevOpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bitbucketDataCenter")) {
    m_bitbucketDataCenter = jsonValue.GetObject("bitbucketDataCenter");
    m_bitbucketDataCenterHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderInput::Jsonize() const {
  JsonValue payload;

  if (m_githubHasBeenSet) {
    payload.WithObject("github", m_github.Jsonize());
  }

  if (m_gitlabHasBeenSet) {
    payload.WithObject("gitlab", m_gitlab.Jsonize());
  }

  if (m_bitbucketHasBeenSet) {
    payload.WithObject("bitbucket", m_bitbucket.Jsonize());
  }

  if (m_confluenceHasBeenSet) {
    payload.WithObject("confluence", m_confluence.Jsonize());
  }

  if (m_azureDevOpsHasBeenSet) {
    payload.WithObject("azureDevOps", m_azureDevOps.Jsonize());
  }

  if (m_bitbucketDataCenterHasBeenSet) {
    payload.WithObject("bitbucketDataCenter", m_bitbucketDataCenter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
