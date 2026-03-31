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
  return *this;
}

JsonValue ProviderInput::Jsonize() const {
  JsonValue payload;

  if (m_githubHasBeenSet) {
    payload.WithObject("github", m_github.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
