/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/PolicyValueSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains an effective RTO or RPO value and its source.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TargetSource">AWS
 * API Reference</a></p>
 */
class TargetSource {
 public:
  AWS_RESILIENCEHUBV2_API TargetSource() = default;
  AWS_RESILIENCEHUBV2_API TargetSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TargetSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The RTO or RPO value in minutes.</p>
   */
  inline int GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(int value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline TargetSource& WithValue(int value) {
    SetValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  TargetSource& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the value comes from the service's own account or a
   * cross-account policy.</p>
   */
  inline PolicyValueSource GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  inline void SetSource(PolicyValueSource value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline TargetSource& WithSource(PolicyValueSource value) {
    SetSource(value);
    return *this;
  }
  ///@}
 private:
  int m_value{0};

  Aws::String m_policyName;

  PolicyValueSource m_source{PolicyValueSource::NOT_SET};
  bool m_valueHasBeenSet = false;
  bool m_policyNameHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
