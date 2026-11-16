/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/PreferenceUpdate.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class PutAgentPreferencesRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API PutAgentPreferencesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAgentPreferences"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_WELLARCHITECTED_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>Preference updates to apply. A given preference key may appear at most
   * once.</p>
   */
  inline const Aws::Vector<PreferenceUpdate>& GetPreferences() const { return m_preferences; }
  inline bool PreferencesHasBeenSet() const { return m_preferencesHasBeenSet; }
  template <typename PreferencesT = Aws::Vector<PreferenceUpdate>>
  void SetPreferences(PreferencesT&& value) {
    m_preferencesHasBeenSet = true;
    m_preferences = std::forward<PreferencesT>(value);
  }
  template <typename PreferencesT = Aws::Vector<PreferenceUpdate>>
  PutAgentPreferencesRequest& WithPreferences(PreferencesT&& value) {
    SetPreferences(std::forward<PreferencesT>(value));
    return *this;
  }
  template <typename PreferencesT = PreferenceUpdate>
  PutAgentPreferencesRequest& AddPreferences(PreferencesT&& value) {
    m_preferencesHasBeenSet = true;
    m_preferences.emplace_back(std::forward<PreferencesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PreferenceUpdate> m_preferences;
  bool m_preferencesHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
