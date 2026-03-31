/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/IntegratedResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

IntegratedResource::IntegratedResource(JsonView jsonValue) { *this = jsonValue; }

IntegratedResource& IntegratedResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("githubRepository")) {
    m_githubRepository = jsonValue.GetObject("githubRepository");
    m_githubRepositoryHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegratedResource::Jsonize() const {
  JsonValue payload;

  if (m_githubRepositoryHasBeenSet) {
    payload.WithObject("githubRepository", m_githubRepository.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
