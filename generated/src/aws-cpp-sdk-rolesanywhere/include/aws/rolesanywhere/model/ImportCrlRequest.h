/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/Tag.h>

#include <utility>

namespace Aws {
namespace RolesAnywhere {
namespace Model {

/**
 */
class ImportCrlRequest : public RolesAnywhereRequest {
 public:
  AWS_ROLESANYWHERE_API ImportCrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ImportCrl"; }

  AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the certificate revocation list (CRL).</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ImportCrlRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The x509 v3 specified certificate revocation list (CRL).</p>
   */
  inline const Aws::Utils::ByteBuffer& GetCrlData() const { return m_crlData; }
  inline bool CrlDataHasBeenSet() const { return m_crlDataHasBeenSet; }
  template <typename CrlDataT = Aws::Utils::ByteBuffer>
  void SetCrlData(CrlDataT&& value) {
    m_crlDataHasBeenSet = true;
    m_crlData = std::forward<CrlDataT>(value);
  }
  template <typename CrlDataT = Aws::Utils::ByteBuffer>
  ImportCrlRequest& WithCrlData(CrlDataT&& value) {
    SetCrlData(std::forward<CrlDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the certificate revocation list (CRL) is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline ImportCrlRequest& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of tags to attach to the certificate revocation list (CRL).</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  ImportCrlRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ImportCrlRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the trust anchor that the certificate revocation list (CRL)
   * provides revocation for. Specify the trust anchor ARN that contains the trust
   * anchor ID. This parameter doesn't support alias ARNs. If you specify an alias
   * ARN, the request fails with <code>ResourceNotFoundException</code>.</p>
   */
  inline const Aws::String& GetTrustAnchorArn() const { return m_trustAnchorArn; }
  inline bool TrustAnchorArnHasBeenSet() const { return m_trustAnchorArnHasBeenSet; }
  template <typename TrustAnchorArnT = Aws::String>
  void SetTrustAnchorArn(TrustAnchorArnT&& value) {
    m_trustAnchorArnHasBeenSet = true;
    m_trustAnchorArn = std::forward<TrustAnchorArnT>(value);
  }
  template <typename TrustAnchorArnT = Aws::String>
  ImportCrlRequest& WithTrustAnchorArn(TrustAnchorArnT&& value) {
    SetTrustAnchorArn(std::forward<TrustAnchorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An alias for the certificate revocation list (CRL). When you set an alias,
   * the response includes the alias ARN of the CRL in <code>aliasArn</code>.</p>
   * <p>An alias name contains 1 to 256 characters. It must begin with a letter (A-Z
   * or a-z). It can contain only letters (A-Z and a-z), numbers (0-9), underscores
   * (_), hyphens (-), and forward slashes (/). A forward slash can appear only
   * between two other characters, so an alias name can't end with a forward slash or
   * contain two in a row. Alias names that begin with <code>aws/</code>, in any
   * combination of uppercase and lowercase letters, are reserved. Alias names are
   * case sensitive.</p> <p>The alias name must be unique among resources of the same
   * type in your account and Region. If another resource of the same type already
   * has the alias, the request fails with a <code>ValidationException</code>. An
   * invalid or reserved alias name also causes a
   * <code>ValidationException</code>.</p> <p>If you omit this parameter or specify
   * an empty string, the resource is created without an alias.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  ImportCrlRequest& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Utils::ByteBuffer m_crlData{};

  bool m_enabled{false};

  Aws::Vector<Tag> m_tags;

  Aws::String m_trustAnchorArn;

  Aws::String m_aliasName;
  bool m_nameHasBeenSet = false;
  bool m_crlDataHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_trustAnchorArnHasBeenSet = false;
  bool m_aliasNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
