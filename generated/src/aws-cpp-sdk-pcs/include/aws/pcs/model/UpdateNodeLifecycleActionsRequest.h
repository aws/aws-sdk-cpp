/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/NodeLifecycleStages.h>
#include <aws/pcs/model/ScriptCachingPolicy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {

/**
 * <p>The lifecycle actions to configure on a compute node group when you update
 * it. Lifecycle actions define scripts that PCS runs on compute nodes at specific
 * stages of their lifecycle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/UpdateNodeLifecycleActionsRequest">AWS
 * API Reference</a></p>
 */
class UpdateNodeLifecycleActionsRequest {
 public:
  AWS_PCS_API UpdateNodeLifecycleActionsRequest() = default;
  AWS_PCS_API UpdateNodeLifecycleActionsRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API UpdateNodeLifecycleActionsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The lifecycle stages where you configure scripts to run.</p>
   */
  inline const NodeLifecycleStages& GetStages() const { return m_stages; }
  inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }
  template <typename StagesT = NodeLifecycleStages>
  void SetStages(StagesT&& value) {
    m_stagesHasBeenSet = true;
    m_stages = std::forward<StagesT>(value);
  }
  template <typename StagesT = NodeLifecycleStages>
  UpdateNodeLifecycleActionsRequest& WithStages(StagesT&& value) {
    SetStages(std::forward<StagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The caching policy for node lifecycle scripts. The default value is
   * <code>CACHE_ONCE</code>. Valid values:</p> <ul> <li> <p> <code>CACHE_ONCE</code>
   * – Downloads each script once and reuses it on subsequent boots.</p> </li> <li>
   * <p> <code>REFRESH_ON_REBOOT</code> – Downloads each script on every boot.</p>
   * </li> </ul>
   */
  inline ScriptCachingPolicy GetScriptCachingPolicy() const { return m_scriptCachingPolicy; }
  inline bool ScriptCachingPolicyHasBeenSet() const { return m_scriptCachingPolicyHasBeenSet; }
  inline void SetScriptCachingPolicy(ScriptCachingPolicy value) {
    m_scriptCachingPolicyHasBeenSet = true;
    m_scriptCachingPolicy = value;
  }
  inline UpdateNodeLifecycleActionsRequest& WithScriptCachingPolicy(ScriptCachingPolicy value) {
    SetScriptCachingPolicy(value);
    return *this;
  }
  ///@}
 private:
  NodeLifecycleStages m_stages;

  ScriptCachingPolicy m_scriptCachingPolicy{ScriptCachingPolicy::NOT_SET};
  bool m_stagesHasBeenSet = false;
  bool m_scriptCachingPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
