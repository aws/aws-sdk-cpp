/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/rolesanywhere/model/CertificateField.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class DeleteAttributeMappingRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API DeleteAttributeMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAttributeMapping"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;

    AWS_ROLESANYWHERE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline CertificateField GetCertificateField() const { return m_certificateField; }
    inline bool CertificateFieldHasBeenSet() const { return m_certificateFieldHasBeenSet; }
    inline void SetCertificateField(CertificateField value) { m_certificateFieldHasBeenSet = true; m_certificateField = value; }
    inline DeleteAttributeMappingRequest& WithCertificateField(CertificateField value) { SetCertificateField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline const Aws::String& GetProfileId() const { return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    template<typename ProfileIdT = Aws::String>
    void SetProfileId(ProfileIdT&& value) { m_profileIdHasBeenSet = true; m_profileId = std::forward<ProfileIdT>(value); }
    template<typename ProfileIdT = Aws::String>
    DeleteAttributeMappingRequest& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of specifiers of a certificate field; for example, CN, OU, UID from a
     * Subject.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpecifiers() const { return m_specifiers; }
    inline bool SpecifiersHasBeenSet() const { return m_specifiersHasBeenSet; }
    template<typename SpecifiersT = Aws::Vector<Aws::String>>
    void SetSpecifiers(SpecifiersT&& value) { m_specifiersHasBeenSet = true; m_specifiers = std::forward<SpecifiersT>(value); }
    template<typename SpecifiersT = Aws::Vector<Aws::String>>
    DeleteAttributeMappingRequest& WithSpecifiers(SpecifiersT&& value) { SetSpecifiers(std::forward<SpecifiersT>(value)); return *this;}
    template<typename SpecifiersT = Aws::String>
    DeleteAttributeMappingRequest& AddSpecifiers(SpecifiersT&& value) { m_specifiersHasBeenSet = true; m_specifiers.emplace_back(std::forward<SpecifiersT>(value)); return *this; }
    ///@}
  private:

    CertificateField m_certificateField{CertificateField::NOT_SET};
    bool m_certificateFieldHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_specifiers;
    bool m_specifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
