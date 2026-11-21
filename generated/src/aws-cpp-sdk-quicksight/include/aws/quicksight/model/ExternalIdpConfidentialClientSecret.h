/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>A client secret of a confidential external IdP client. Secret values are
 * never included.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ExternalIdpConfidentialClientSecret">AWS
 * API Reference</a></p>
 */
class ExternalIdpConfidentialClientSecret {
 public:
  AWS_QUICKSIGHT_API ExternalIdpConfidentialClientSecret() = default;
  AWS_QUICKSIGHT_API ExternalIdpConfidentialClientSecret(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ExternalIdpConfidentialClientSecret& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the client secret.</p>
   */
  inline const Aws::String& GetClientSecretId() const { return m_clientSecretId; }
  inline bool ClientSecretIdHasBeenSet() const { return m_clientSecretIdHasBeenSet; }
  template <typename ClientSecretIdT = Aws::String>
  void SetClientSecretId(ClientSecretIdT&& value) {
    m_clientSecretIdHasBeenSet = true;
    m_clientSecretId = std::forward<ClientSecretIdT>(value);
  }
  template <typename ClientSecretIdT = Aws::String>
  ExternalIdpConfidentialClientSecret& WithClientSecretId(ClientSecretIdT&& value) {
    SetClientSecretId(std::forward<ClientSecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Secrets Manager secret that holds the
   * client secret, for each Region.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetRegionalSecretManagerArns() const { return m_regionalSecretManagerArns; }
  inline bool RegionalSecretManagerArnsHasBeenSet() const { return m_regionalSecretManagerArnsHasBeenSet; }
  template <typename RegionalSecretManagerArnsT = Aws::Map<Aws::String, Aws::String>>
  void SetRegionalSecretManagerArns(RegionalSecretManagerArnsT&& value) {
    m_regionalSecretManagerArnsHasBeenSet = true;
    m_regionalSecretManagerArns = std::forward<RegionalSecretManagerArnsT>(value);
  }
  template <typename RegionalSecretManagerArnsT = Aws::Map<Aws::String, Aws::String>>
  ExternalIdpConfidentialClientSecret& WithRegionalSecretManagerArns(RegionalSecretManagerArnsT&& value) {
    SetRegionalSecretManagerArns(std::forward<RegionalSecretManagerArnsT>(value));
    return *this;
  }
  template <typename RegionalSecretManagerArnsKeyT = Aws::String, typename RegionalSecretManagerArnsValueT = Aws::String>
  ExternalIdpConfidentialClientSecret& AddRegionalSecretManagerArns(RegionalSecretManagerArnsKeyT&& key,
                                                                    RegionalSecretManagerArnsValueT&& value) {
    m_regionalSecretManagerArnsHasBeenSet = true;
    m_regionalSecretManagerArns.emplace(std::forward<RegionalSecretManagerArnsKeyT>(key),
                                        std::forward<RegionalSecretManagerArnsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the client secret was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ExternalIdpConfidentialClientSecret& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the secret's Region ARNs were last updated. This value is
   * present only after you call
   * <code>UpdateAccessControlApplicationSecret</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ExternalIdpConfidentialClientSecret& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the client secret.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ExternalIdpConfidentialClientSecret& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientSecretId;

  Aws::Map<Aws::String, Aws::String> m_regionalSecretManagerArns;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_description;
  bool m_clientSecretIdHasBeenSet = false;
  bool m_regionalSecretManagerArnsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
