/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/PreferenceKey.h>
#include <aws/wellarchitected/model/PreferenceState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>A caller's requested change to one preference, supplied to
 * PutAgentPreferences.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/PreferenceUpdate">AWS
 * API Reference</a></p>
 */
class PreferenceUpdate {
 public:
  AWS_WELLARCHITECTED_API PreferenceUpdate() = default;
  AWS_WELLARCHITECTED_API PreferenceUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API PreferenceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Which preference to update.</p>
   */
  inline PreferenceKey GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  inline void SetKey(PreferenceKey value) {
    m_keyHasBeenSet = true;
    m_key = value;
  }
  inline PreferenceUpdate& WithKey(PreferenceKey value) {
    SetKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>State to set the preference to. FAILED is an observed state only and cannot
   * be requested.</p>
   */
  inline PreferenceState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(PreferenceState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline PreferenceUpdate& WithState(PreferenceState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  PreferenceKey m_key{PreferenceKey::NOT_SET};

  PreferenceState m_state{PreferenceState::NOT_SET};
  bool m_keyHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
