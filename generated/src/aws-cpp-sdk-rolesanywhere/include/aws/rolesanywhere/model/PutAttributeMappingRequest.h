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
    AWS_ROLESANYWHERE_API PutAttributeMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAttributeMapping"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;


    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline const CertificateField& GetCertificateField() const{ return m_certificateField; }

    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline bool CertificateFieldHasBeenSet() const { return m_certificateFieldHasBeenSet; }

    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline void SetCertificateField(const CertificateField& value) { m_certificateFieldHasBeenSet = true; m_certificateField = value; }

    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline void SetCertificateField(CertificateField&& value) { m_certificateFieldHasBeenSet = true; m_certificateField = std::move(value); }

    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline PutAttributeMappingRequest& WithCertificateField(const CertificateField& value) { SetCertificateField(value); return *this;}

    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline PutAttributeMappingRequest& WithCertificateField(CertificateField&& value) { SetCertificateField(std::move(value)); return *this;}


    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline const Aws::Vector<MappingRule>& GetMappingRules() const{ return m_mappingRules; }

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline bool MappingRulesHasBeenSet() const { return m_mappingRulesHasBeenSet; }

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline void SetMappingRules(const Aws::Vector<MappingRule>& value) { m_mappingRulesHasBeenSet = true; m_mappingRules = value; }

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline void SetMappingRules(Aws::Vector<MappingRule>&& value) { m_mappingRulesHasBeenSet = true; m_mappingRules = std::move(value); }

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline PutAttributeMappingRequest& WithMappingRules(const Aws::Vector<MappingRule>& value) { SetMappingRules(value); return *this;}

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline PutAttributeMappingRequest& WithMappingRules(Aws::Vector<MappingRule>&& value) { SetMappingRules(std::move(value)); return *this;}

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline PutAttributeMappingRequest& AddMappingRules(const MappingRule& value) { m_mappingRulesHasBeenSet = true; m_mappingRules.push_back(value); return *this; }

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline PutAttributeMappingRequest& AddMappingRules(MappingRule&& value) { m_mappingRulesHasBeenSet = true; m_mappingRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline PutAttributeMappingRequest& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline PutAttributeMappingRequest& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the profile.</p>
     */
    inline PutAttributeMappingRequest& WithProfileId(const char* value) { SetProfileId(value); return *this;}

  private:

    CertificateField m_certificateField;
    bool m_certificateFieldHasBeenSet = false;

    Aws::Vector<MappingRule> m_mappingRules;
    bool m_mappingRulesHasBeenSet = false;

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
