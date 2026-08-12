/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DlpAction.h>
#include <aws/quicksight/model/DlpProviderType.h>
#include <aws/quicksight/model/ProviderConfig.h>
#include <aws/quicksight/model/Tag.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class CreateDlpSettingRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API CreateDlpSettingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDlpSetting"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account in which to create the DLP
   * setting.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  CreateDlpSettingRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the DLP setting.</p>
   */
  inline const Aws::String& GetDlpSettingId() const { return m_dlpSettingId; }
  inline bool DlpSettingIdHasBeenSet() const { return m_dlpSettingIdHasBeenSet; }
  template <typename DlpSettingIdT = Aws::String>
  void SetDlpSettingId(DlpSettingIdT&& value) {
    m_dlpSettingIdHasBeenSet = true;
    m_dlpSettingId = std::forward<DlpSettingIdT>(value);
  }
  template <typename DlpSettingIdT = Aws::String>
  CreateDlpSettingRequest& WithDlpSettingId(DlpSettingIdT&& value) {
    SetDlpSettingId(std::forward<DlpSettingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable display name for the DLP setting.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDlpSettingRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of external DLP provider to use for sensitivity label
   * classification. Currently, the only supported value is
   * <code>MICROSOFT_PURVIEW</code>.</p>
   */
  inline DlpProviderType GetProviderType() const { return m_providerType; }
  inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
  inline void SetProviderType(DlpProviderType value) {
    m_providerTypeHasBeenSet = true;
    m_providerType = value;
  }
  inline CreateDlpSettingRequest& WithProviderType(DlpProviderType value) {
    SetProviderType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific configuration for the DLP integration. This is a union
   * type structure. For this structure to be valid, only one of the attributes can
   * be defined.</p>
   */
  inline const ProviderConfig& GetProviderConfig() const { return m_providerConfig; }
  inline bool ProviderConfigHasBeenSet() const { return m_providerConfigHasBeenSet; }
  template <typename ProviderConfigT = ProviderConfig>
  void SetProviderConfig(ProviderConfigT&& value) {
    m_providerConfigHasBeenSet = true;
    m_providerConfig = std::forward<ProviderConfigT>(value);
  }
  template <typename ProviderConfigT = ProviderConfig>
  CreateDlpSettingRequest& WithProviderConfig(ProviderConfigT&& value) {
    SetProviderConfig(std::forward<ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The behavior to apply when the DLP provider is unreachable. Valid values are
   * <code>ALLOW</code>, <code>WARN</code>, and <code>BLOCK</code>.</p>
   */
  inline DlpAction GetProviderOutageAction() const { return m_providerOutageAction; }
  inline bool ProviderOutageActionHasBeenSet() const { return m_providerOutageActionHasBeenSet; }
  inline void SetProviderOutageAction(DlpAction value) {
    m_providerOutageActionHasBeenSet = true;
    m_providerOutageAction = value;
  }
  inline CreateDlpSettingRequest& WithProviderOutageAction(DlpAction value) {
    SetProviderOutageAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether DLP enforcement is active for this setting. Set to
   * <code>true</code> to enable enforcement, or <code>false</code> to disable it at
   * time of setting creation.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline CreateDlpSettingRequest& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of resource tags to apply to the DLP setting. You can use tags to
   * manage access to your Amazon Web Services resources.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateDlpSettingRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateDlpSettingRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
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

  Aws::Vector<Tag> m_tags;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_dlpSettingIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_providerTypeHasBeenSet = false;
  bool m_providerConfigHasBeenSet = false;
  bool m_providerOutageActionHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
