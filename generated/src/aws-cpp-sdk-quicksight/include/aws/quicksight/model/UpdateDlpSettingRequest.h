/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DlpAction.h>
#include <aws/quicksight/model/DlpProviderType.h>
#include <aws/quicksight/model/ProviderConfig.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateDlpSettingRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateDlpSettingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDlpSetting"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the DLP setting that
   * you want to update.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateDlpSettingRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DLP setting that you want to update.</p>
   */
  inline const Aws::String& GetDlpSettingId() const { return m_dlpSettingId; }
  inline bool DlpSettingIdHasBeenSet() const { return m_dlpSettingIdHasBeenSet; }
  template <typename DlpSettingIdT = Aws::String>
  void SetDlpSettingId(DlpSettingIdT&& value) {
    m_dlpSettingIdHasBeenSet = true;
    m_dlpSettingId = std::forward<DlpSettingIdT>(value);
  }
  template <typename DlpSettingIdT = Aws::String>
  UpdateDlpSettingRequest& WithDlpSettingId(DlpSettingIdT&& value) {
    SetDlpSettingId(std::forward<DlpSettingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated display name for the DLP setting.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateDlpSettingRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated DLP provider type. Currently, the only supported value is
   * <code>MICROSOFT_PURVIEW</code>.</p>
   */
  inline DlpProviderType GetProviderType() const { return m_providerType; }
  inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
  inline void SetProviderType(DlpProviderType value) {
    m_providerTypeHasBeenSet = true;
    m_providerType = value;
  }
  inline UpdateDlpSettingRequest& WithProviderType(DlpProviderType value) {
    SetProviderType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated provider-specific configuration for the DLP integration. This is a
   * union type structure. For this structure to be valid, only one of the attributes
   * can be defined.</p>
   */
  inline const ProviderConfig& GetProviderConfig() const { return m_providerConfig; }
  inline bool ProviderConfigHasBeenSet() const { return m_providerConfigHasBeenSet; }
  template <typename ProviderConfigT = ProviderConfig>
  void SetProviderConfig(ProviderConfigT&& value) {
    m_providerConfigHasBeenSet = true;
    m_providerConfig = std::forward<ProviderConfigT>(value);
  }
  template <typename ProviderConfigT = ProviderConfig>
  UpdateDlpSettingRequest& WithProviderConfig(ProviderConfigT&& value) {
    SetProviderConfig(std::forward<ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated behavior to apply when the DLP provider is unreachable. Valid
   * values are <code>ALLOW</code>, <code>WARN</code>, and <code>BLOCK</code>.</p>
   */
  inline DlpAction GetProviderOutageAction() const { return m_providerOutageAction; }
  inline bool ProviderOutageActionHasBeenSet() const { return m_providerOutageActionHasBeenSet; }
  inline void SetProviderOutageAction(DlpAction value) {
    m_providerOutageActionHasBeenSet = true;
    m_providerOutageAction = value;
  }
  inline UpdateDlpSettingRequest& WithProviderOutageAction(DlpAction value) {
    SetProviderOutageAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether DLP enforcement is active for this setting. Set to
   * <code>true</code> to enable enforcement, or <code>false</code> to disable
   * it.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline UpdateDlpSettingRequest& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_dlpSettingId;

  Aws::String m_name;

  DlpProviderType m_providerType{DlpProviderType::NOT_SET};

  ProviderConfig m_providerConfig;

  DlpAction m_providerOutageAction{DlpAction::NOT_SET};

  bool m_enabled{false};
  bool m_awsAccountIdHasBeenSet = false;
  bool m_dlpSettingIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_providerTypeHasBeenSet = false;
  bool m_providerConfigHasBeenSet = false;
  bool m_providerOutageActionHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
