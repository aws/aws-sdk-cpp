/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/UpdateNodeLifecycleActionsRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

UpdateNodeLifecycleActionsRequest::UpdateNodeLifecycleActionsRequest(JsonView jsonValue) { *this = jsonValue; }

UpdateNodeLifecycleActionsRequest& UpdateNodeLifecycleActionsRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stages")) {
    m_stages = jsonValue.GetObject("stages");
    m_stagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scriptCachingPolicy")) {
    m_scriptCachingPolicy = ScriptCachingPolicyMapper::GetScriptCachingPolicyForName(jsonValue.GetString("scriptCachingPolicy"));
    m_scriptCachingPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateNodeLifecycleActionsRequest::Jsonize() const {
  JsonValue payload;

  if (m_stagesHasBeenSet) {
    payload.WithObject("stages", m_stages.Jsonize());
  }

  if (m_scriptCachingPolicyHasBeenSet) {
    payload.WithString("scriptCachingPolicy", ScriptCachingPolicyMapper::GetNameForScriptCachingPolicy(m_scriptCachingPolicy));
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
