/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ResourceCriticality.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Allows you to define the structure for modifying specific fields of
 * resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesResourceFieldsUpdateV2">AWS
 * API Reference</a></p>
 */
class AutomationRulesResourceFieldsUpdateV2 {
 public:
  AWS_SECURITYHUB_API AutomationRulesResourceFieldsUpdateV2() = default;
  AWS_SECURITYHUB_API AutomationRulesResourceFieldsUpdateV2(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API AutomationRulesResourceFieldsUpdateV2& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The criticality level to be assigned to resources that match the automation
   * rule criteria.</p>
   */
  inline ResourceCriticality GetCriticality() const { return m_criticality; }
  inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
  inline void SetCriticality(ResourceCriticality value) {
    m_criticalityHasBeenSet = true;
    m_criticality = value;
  }
  inline AutomationRulesResourceFieldsUpdateV2& WithCriticality(ResourceCriticality value) {
    SetCriticality(value);
    return *this;
  }
  ///@}
 private:
  ResourceCriticality m_criticality{ResourceCriticality::NOT_SET};
  bool m_criticalityHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
