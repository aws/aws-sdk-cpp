/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Configuration for selecting source profiles for centralization.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/SourceProfilesConfiguration">AWS
 * API Reference</a></p>
 */
class SourceProfilesConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API SourceProfilesConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API SourceProfilesConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API SourceProfilesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter expression that selects which source profiles to centralize.</p>
   */
  inline const Aws::String& GetProfilesSelectionCriteria() const { return m_profilesSelectionCriteria; }
  inline bool ProfilesSelectionCriteriaHasBeenSet() const { return m_profilesSelectionCriteriaHasBeenSet; }
  template <typename ProfilesSelectionCriteriaT = Aws::String>
  void SetProfilesSelectionCriteria(ProfilesSelectionCriteriaT&& value) {
    m_profilesSelectionCriteriaHasBeenSet = true;
    m_profilesSelectionCriteria = std::forward<ProfilesSelectionCriteriaT>(value);
  }
  template <typename ProfilesSelectionCriteriaT = Aws::String>
  SourceProfilesConfiguration& WithProfilesSelectionCriteria(ProfilesSelectionCriteriaT&& value) {
    SetProfilesSelectionCriteria(std::forward<ProfilesSelectionCriteriaT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profilesSelectionCriteria;
  bool m_profilesSelectionCriteriaHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
