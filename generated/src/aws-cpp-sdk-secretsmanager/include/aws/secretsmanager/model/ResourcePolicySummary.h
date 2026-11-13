/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecretsManager {
namespace Model {

/**
 * <p>A structure that contains details about a resource policy attached to a
 * secret. It does not contain the contents of the resource policy. To view the
 * contents of the policy, use <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/apireference/API_GetResourcePolicy.html">GetResourcePolicy</a>
 * .</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ResourcePolicySummary">AWS
 * API Reference</a></p>
 */
class ResourcePolicySummary {
 public:
  AWS_SECRETSMANAGER_API ResourcePolicySummary() = default;
  AWS_SECRETSMANAGER_API ResourcePolicySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECRETSMANAGER_API ResourcePolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the resource policy.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  ResourcePolicySummary& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyName;
  bool m_policyNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
