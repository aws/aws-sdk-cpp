/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ProviderResourceCapabilities.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ProviderResourceCapabilities::ProviderResourceCapabilities(JsonView jsonValue) { *this = jsonValue; }

ProviderResourceCapabilities& ProviderResourceCapabilities::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue ProviderResourceCapabilities::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
