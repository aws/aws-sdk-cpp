/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/ApplicationSettingsStatusEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkSpaces {
namespace Model {

/**
 * <p>The persistent application settings for WorkSpaces Pools users.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ApplicationSettingsRequest">AWS
 * API Reference</a></p>
 */
class ApplicationSettingsRequest {
 public:
  AWS_WORKSPACES_API ApplicationSettingsRequest() = default;
  AWS_WORKSPACES_API ApplicationSettingsRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACES_API ApplicationSettingsRequest& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Enables or disables persistent application settings for users during their
   * pool sessions.</p>
   */
  inline ApplicationSettingsStatusEnum GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ApplicationSettingsStatusEnum value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ApplicationSettingsRequest& WithStatus(ApplicationSettingsStatusEnum value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path prefix for the S3 bucket where users’ persistent application
   * settings are stored. You can allow the same persistent application settings to
   * be used across multiple pools by specifying the same settings group for each
   * pool.</p>
   */
  inline const Aws::String& GetSettingsGroup() const { return m_settingsGroup; }
  inline bool SettingsGroupHasBeenSet() const { return m_settingsGroupHasBeenSet; }
  template <typename SettingsGroupT = Aws::String>
  void SetSettingsGroup(SettingsGroupT&& value) {
    m_settingsGroupHasBeenSet = true;
    m_settingsGroup = std::forward<SettingsGroupT>(value);
  }
  template <typename SettingsGroupT = Aws::String>
  ApplicationSettingsRequest& WithSettingsGroup(SettingsGroupT&& value) {
    SetSettingsGroup(std::forward<SettingsGroupT>(value));
    return *this;
  }
  ///@}
 private:
  ApplicationSettingsStatusEnum m_status{ApplicationSettingsStatusEnum::NOT_SET};

  Aws::String m_settingsGroup;
  bool m_statusHasBeenSet = false;
  bool m_settingsGroupHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
