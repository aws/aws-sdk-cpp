/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/rolesanywhere/model/CertificateField.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/MappingRule.h>
#include <utility>

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class PutAttributeMappingRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API PutAttributeMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAttributeMapping"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline CertificateField GetCertificateField() const { return m_certificateField; }
    inline bool CertificateFieldHasBeenSet() const { return m_certificateFieldHasBeenSet; }
    inline void SetCertificateField(CertificateField value) { m_certificateFieldHasBeenSet = true; m_certificateField = value; }
    inline PutAttributeMappingRequest& WithCertificateField(CertificateField value) { SetCertificateField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline const Aws::Vector<MappingRule>& GetMappingRules() const { return m_mappingRules; }
    inline bool MappingRulesHasBeenSet() const { return m_mappingRulesHasBeenSet; }
    template<typename MappingRulesT = Aws::Vector<MappingRule>>
    void SetMappingRules(MappingRulesT&& value) { m_mappingRulesHasBeenSet = true; m_mappingRules = std::forward<MappingRulesT>(value); }
    template<typename MappingRulesT = Aws::Vector<MappingRule>>
    PutAttributeMappingRequest& WithMappingRules(MappingRulesT&& value) { SetMappingRules(std::forward<MappingRulesT>(value)); return *this;}
    template<typename MappingRulesT = MappingRule>
    PutAttributeMappingRequest& AddMappingRules(MappingRulesT&& value) { m_mappingRulesHasBeenSet = true; m_mappingRules.emplace_back(std::forward<MappingRulesT>(value)); return *this; }
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
    PutAttributeMappingRequest& WithProfileId(ProfileIdT&& value) { SetProfileId(std::forward<ProfileIdT>(value)); return *this;}
    ///@}
  private:

    CertificateField m_certificateField{CertificateField::NOT_SET};
    bool m_certificateFieldHasBeenSet = false;

    Aws::Vector<MappingRule> m_mappingRules;
    bool m_mappingRulesHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
