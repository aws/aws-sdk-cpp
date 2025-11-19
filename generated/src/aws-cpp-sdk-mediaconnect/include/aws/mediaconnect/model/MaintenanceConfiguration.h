/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/DefaultMaintenanceConfiguration.h>
#include <aws/mediaconnect/model/PreferredDayTimeMaintenanceConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The configuration settings for maintenance operations, including preferred
 * maintenance windows and schedules.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MaintenanceConfiguration">AWS
 * API Reference</a></p>
 */
class MaintenanceConfiguration {
 public:
  AWS_MEDIACONNECT_API MaintenanceConfiguration() = default;
  AWS_MEDIACONNECT_API MaintenanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MaintenanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Preferred day and time maintenance configuration settings.</p>
   */
  inline const PreferredDayTimeMaintenanceConfiguration& GetPreferredDayTime() const { return m_preferredDayTime; }
  inline bool PreferredDayTimeHasBeenSet() const { return m_preferredDayTimeHasBeenSet; }
  template <typename PreferredDayTimeT = PreferredDayTimeMaintenanceConfiguration>
  void SetPreferredDayTime(PreferredDayTimeT&& value) {
    m_preferredDayTimeHasBeenSet = true;
    m_preferredDayTime = std::forward<PreferredDayTimeT>(value);
  }
  template <typename PreferredDayTimeT = PreferredDayTimeMaintenanceConfiguration>
  MaintenanceConfiguration& WithPreferredDayTime(PreferredDayTimeT&& value) {
    SetPreferredDayTime(std::forward<PreferredDayTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Default maintenance configuration settings.</p>
   */
  inline const DefaultMaintenanceConfiguration& GetDefault() const { return m_default; }
  inline bool DefaultHasBeenSet() const { return m_defaultHasBeenSet; }
  template <typename DefaultT = DefaultMaintenanceConfiguration>
  void SetDefault(DefaultT&& value) {
    m_defaultHasBeenSet = true;
    m_default = std::forward<DefaultT>(value);
  }
  template <typename DefaultT = DefaultMaintenanceConfiguration>
  MaintenanceConfiguration& WithDefault(DefaultT&& value) {
    SetDefault(std::forward<DefaultT>(value));
    return *this;
  }
  ///@}
 private:
  PreferredDayTimeMaintenanceConfiguration m_preferredDayTime;
  bool m_preferredDayTimeHasBeenSet = false;

  DefaultMaintenanceConfiguration m_default;
  bool m_defaultHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
