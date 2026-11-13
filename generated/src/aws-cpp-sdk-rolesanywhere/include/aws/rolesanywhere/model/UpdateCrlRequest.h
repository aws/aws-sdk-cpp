/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RolesAnywhere {
namespace Model {

/**
 */
class UpdateCrlRequest : public RolesAnywhereRequest {
 public:
  AWS_ROLESANYWHERE_API UpdateCrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCrl"; }

  AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The certificate revocation list (CRL) to act on. You can specify one of the
   * following:</p> <ul> <li> <p>The CRL ID.</p> </li> <li> <p>The CRL ARN.</p> </li>
   * <li> <p>The alias ARN of the CRL.</p> </li> </ul> <p>An ARN must be for a CRL in
   * your account and Region.</p>
   */
  inline const Aws::String& GetCrlId() const { return m_crlId; }
  inline bool CrlIdHasBeenSet() const { return m_crlIdHasBeenSet; }
  template <typename CrlIdT = Aws::String>
  void SetCrlId(CrlIdT&& value) {
    m_crlIdHasBeenSet = true;
    m_crlId = std::forward<CrlIdT>(value);
  }
  template <typename CrlIdT = Aws::String>
  UpdateCrlRequest& WithCrlId(CrlIdT&& value) {
    SetCrlId(std::forward<CrlIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Crl.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateCrlRequest& WithName(NameT&& value) {
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
  UpdateCrlRequest& WithCrlData(CrlDataT&& value) {
    SetCrlData(std::forward<CrlDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The alias for the certificate revocation list (CRL).</p> <p>You can use this
   * parameter in the following ways:</p> <ul> <li> <p>To set or change the alias,
   * specify the new alias name. After the change, the previous alias ARN no longer
   * identifies the resource. You can then assign the previous alias to another
   * resource of the same type. A change can take a short time to take effect for
   * requests that use an alias ARN.</p> </li> <li> <p>To remove the alias, specify
   * an empty string.</p> </li> <li> <p>To keep the current alias, omit this
   * parameter.</p> </li> </ul> <p>An alias name contains 1 to 256 characters. It
   * must begin with a letter (A-Z or a-z). It can contain only letters (A-Z and
   * a-z), numbers (0-9), underscores (_), hyphens (-), and forward slashes (/). A
   * forward slash can appear only between two other characters, so an alias name
   * can't end with a forward slash or contain two in a row. Alias names that begin
   * with <code>aws/</code>, in any combination of uppercase and lowercase letters,
   * are reserved. Alias names are case sensitive.</p> <p>The alias name must be
   * unique among resources of the same type in your account and Region. If another
   * resource of the same type already has the alias, the request fails with a
   * <code>ValidationException</code>. An invalid or reserved alias name also causes
   * a <code>ValidationException</code>.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  UpdateCrlRequest& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_crlId;

  Aws::String m_name;

  Aws::Utils::ByteBuffer m_crlData{};

  Aws::String m_aliasName;
  bool m_crlIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_crlDataHasBeenSet = false;
  bool m_aliasNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
