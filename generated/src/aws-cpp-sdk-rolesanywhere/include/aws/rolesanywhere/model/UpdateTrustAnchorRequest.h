/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/Source.h>

#include <utility>

namespace Aws {
namespace RolesAnywhere {
namespace Model {

/**
 */
class UpdateTrustAnchorRequest : public RolesAnywhereRequest {
 public:
  AWS_ROLESANYWHERE_API UpdateTrustAnchorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTrustAnchor"; }

  AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The trust anchor to act on. You can specify one of the following:</p> <ul>
   * <li> <p>The trust anchor ID.</p> </li> <li> <p>The trust anchor ARN.</p> </li>
   * <li> <p>The alias ARN of the trust anchor.</p> </li> </ul> <p>An ARN must be for
   * a trust anchor in your account and Region.</p>
   */
  inline const Aws::String& GetTrustAnchorId() const { return m_trustAnchorId; }
  inline bool TrustAnchorIdHasBeenSet() const { return m_trustAnchorIdHasBeenSet; }
  template <typename TrustAnchorIdT = Aws::String>
  void SetTrustAnchorId(TrustAnchorIdT&& value) {
    m_trustAnchorIdHasBeenSet = true;
    m_trustAnchorId = std::forward<TrustAnchorIdT>(value);
  }
  template <typename TrustAnchorIdT = Aws::String>
  UpdateTrustAnchorRequest& WithTrustAnchorId(TrustAnchorIdT&& value) {
    SetTrustAnchorId(std::forward<TrustAnchorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the trust anchor.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateTrustAnchorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust anchor type and its related certificate data.</p>
   */
  inline const Source& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = Source>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = Source>
  UpdateTrustAnchorRequest& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the trust anchor checks certificate revocation status
   * against CRL distribution points.</p>
   */
  inline bool GetCrlDpRevocationEnabled() const { return m_crlDpRevocationEnabled; }
  inline bool CrlDpRevocationEnabledHasBeenSet() const { return m_crlDpRevocationEnabledHasBeenSet; }
  inline void SetCrlDpRevocationEnabled(bool value) {
    m_crlDpRevocationEnabledHasBeenSet = true;
    m_crlDpRevocationEnabled = value;
  }
  inline UpdateTrustAnchorRequest& WithCrlDpRevocationEnabled(bool value) {
    SetCrlDpRevocationEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias for the trust anchor.</p> <p>You can use this parameter in the
   * following ways:</p> <ul> <li> <p>To set or change the alias, specify the new
   * alias name. After the change, the previous alias ARN no longer identifies the
   * resource. You can then assign the previous alias to another resource of the same
   * type. A change can take a short time to take effect for requests that use an
   * alias ARN.</p> </li> <li> <p>To remove the alias, specify an empty string.</p>
   * </li> <li> <p>To keep the current alias, omit this parameter.</p> </li> </ul>
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
   * <code>ValidationException</code>.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  UpdateTrustAnchorRequest& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trustAnchorId;

  Aws::String m_name;

  Source m_source;

  bool m_crlDpRevocationEnabled{false};

  Aws::String m_aliasName;
  bool m_trustAnchorIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_crlDpRevocationEnabledHasBeenSet = false;
  bool m_aliasNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
