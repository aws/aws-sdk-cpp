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
    AWS_ROLESANYWHERE_API DeleteAttributeMappingRequest();

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
    inline const CertificateField& GetCertificateField() const{ return m_certificateField; }
    inline bool CertificateFieldHasBeenSet() const { return m_certificateFieldHasBeenSet; }
    inline void SetCertificateField(const CertificateField& value) { m_certificateFieldHasBeenSet = true; m_certificateField = value; }
    inline void SetCertificateField(CertificateField&& value) { m_certificateFieldHasBeenSet = true; m_certificateField = std::move(value); }
    inline DeleteAttributeMappingRequest& WithCertificateField(const CertificateField& value) { SetCertificateField(value); return *this;}
    inline DeleteAttributeMappingRequest& WithCertificateField(CertificateField&& value) { SetCertificateField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline DeleteAttributeMappingRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline DeleteAttributeMappingRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline DeleteAttributeMappingRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of specifiers of a certificate field; for example, CN, OU, UID from a
     * Subject.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpecifiers() const{ return m_specifiers; }
    inline bool SpecifiersHasBeenSet() const { return m_specifiersHasBeenSet; }
    inline void SetSpecifiers(const Aws::Vector<Aws::String>& value) { m_specifiersHasBeenSet = true; m_specifiers = value; }
    inline void SetSpecifiers(Aws::Vector<Aws::String>&& value) { m_specifiersHasBeenSet = true; m_specifiers = std::move(value); }
    inline DeleteAttributeMappingRequest& WithSpecifiers(const Aws::Vector<Aws::String>& value) { SetSpecifiers(value); return *this;}
    inline DeleteAttributeMappingRequest& WithSpecifiers(Aws::Vector<Aws::String>&& value) { SetSpecifiers(std::move(value)); return *this;}
    inline DeleteAttributeMappingRequest& AddSpecifiers(const Aws::String& value) { m_specifiersHasBeenSet = true; m_specifiers.push_back(value); return *this; }
    inline DeleteAttributeMappingRequest& AddSpecifiers(Aws::String&& value) { m_specifiersHasBeenSet = true; m_specifiers.push_back(std::move(value)); return *this; }
    inline DeleteAttributeMappingRequest& AddSpecifiers(const char* value) { m_specifiersHasBeenSet = true; m_specifiers.push_back(value); return *this; }
    ///@}
  private:

    CertificateField m_certificateField;
    bool m_certificateFieldHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_specifiers;
    bool m_specifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
