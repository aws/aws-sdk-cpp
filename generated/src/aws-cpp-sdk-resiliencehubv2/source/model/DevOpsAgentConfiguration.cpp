/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/DevOpsAgentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

DevOpsAgentConfiguration::DevOpsAgentConfiguration(JsonView jsonValue) { *this = jsonValue; }

DevOpsAgentConfiguration& DevOpsAgentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentSpaceArn")) {
    m_agentSpaceArn = jsonValue.GetString("agentSpaceArn");
    m_agentSpaceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue DevOpsAgentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_agentSpaceArnHasBeenSet) {
    payload.WithString("agentSpaceArn", m_agentSpaceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
