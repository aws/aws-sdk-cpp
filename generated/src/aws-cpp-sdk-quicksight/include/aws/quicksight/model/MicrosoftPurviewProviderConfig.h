/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DlpAction.h>
#include <aws/quicksight/model/LabelActionMapping.h>
#include <aws/quicksight/model/MicrosoftPurviewCredentials.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The full configuration for Microsoft Purview DLP integration, including the
 * provider credentials and the label-action mappings that define the enforcement
 * policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MicrosoftPurviewProviderConfig">AWS
 * API Reference</a></p>
 */
class MicrosoftPurviewProviderConfig {
 public:
  AWS_QUICKSIGHT_API MicrosoftPurviewProviderConfig() = default;
  AWS_QUICKSIGHT_API MicrosoftPurviewProviderConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API MicrosoftPurviewProviderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The credentials used to authenticate with Microsoft Purview.</p>
   */
  inline const MicrosoftPurviewCredentials& GetCredentials() const { return m_credentials; }
  inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
  template <typename CredentialsT = MicrosoftPurviewCredentials>
  void SetCredentials(CredentialsT&& value) {
    m_credentialsHasBeenSet = true;
    m_credentials = std::forward<CredentialsT>(value);
  }
  template <typename CredentialsT = MicrosoftPurviewCredentials>
  MicrosoftPurviewProviderConfig& WithCredentials(CredentialsT&& value) {
    SetCredentials(std::forward<CredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mappings from Microsoft Purview sensitivity labels to enforcement
   * actions.</p>
   */
  inline const Aws::Vector<LabelActionMapping>& GetLabelActionMappings() const { return m_labelActionMappings; }
  inline bool LabelActionMappingsHasBeenSet() const { return m_labelActionMappingsHasBeenSet; }
  template <typename LabelActionMappingsT = Aws::Vector<LabelActionMapping>>
  void SetLabelActionMappings(LabelActionMappingsT&& value) {
    m_labelActionMappingsHasBeenSet = true;
    m_labelActionMappings = std::forward<LabelActionMappingsT>(value);
  }
  template <typename LabelActionMappingsT = Aws::Vector<LabelActionMapping>>
  MicrosoftPurviewProviderConfig& WithLabelActionMappings(LabelActionMappingsT&& value) {
    SetLabelActionMappings(std::forward<LabelActionMappingsT>(value));
    return *this;
  }
  template <typename LabelActionMappingsT = LabelActionMapping>
  MicrosoftPurviewProviderConfig& AddLabelActionMappings(LabelActionMappingsT&& value) {
    m_labelActionMappingsHasBeenSet = true;
    m_labelActionMappings.emplace_back(std::forward<LabelActionMappingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default action to apply to content that has no sensitivity label or whose
   * label is not mapped. Valid values are <code>ALLOW</code>, <code>BLOCK</code>,
   * and <code>WARN</code>.</p>
   */
  inline DlpAction GetUnmappedAction() const { return m_unmappedAction; }
  inline bool UnmappedActionHasBeenSet() const { return m_unmappedActionHasBeenSet; }
  inline void SetUnmappedAction(DlpAction value) {
    m_unmappedActionHasBeenSet = true;
    m_unmappedAction = value;
  }
  inline MicrosoftPurviewProviderConfig& WithUnmappedAction(DlpAction value) {
    SetUnmappedAction(value);
    return *this;
  }
  ///@}
 private:
  MicrosoftPurviewCredentials m_credentials;

  Aws::Vector<LabelActionMapping> m_labelActionMappings;

  DlpAction m_unmappedAction{DlpAction::NOT_SET};
  bool m_credentialsHasBeenSet = false;
  bool m_labelActionMappingsHasBeenSet = false;
  bool m_unmappedActionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
