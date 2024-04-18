/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/model/CertificateField.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/model/MappingRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>A mapping applied to the authenticating end-entity certificate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/AttributeMapping">AWS
   * API Reference</a></p>
   */
  class AttributeMapping
  {
  public:
    AWS_ROLESANYWHERE_API AttributeMapping();
    AWS_ROLESANYWHERE_API AttributeMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API AttributeMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AttributeMapping& WithCertificateField(const CertificateField& value) { SetCertificateField(value); return *this;}

    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline AttributeMapping& WithCertificateField(CertificateField&& value) { SetCertificateField(std::move(value)); return *this;}


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
    inline AttributeMapping& WithMappingRules(const Aws::Vector<MappingRule>& value) { SetMappingRules(value); return *this;}

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline AttributeMapping& WithMappingRules(Aws::Vector<MappingRule>&& value) { SetMappingRules(std::move(value)); return *this;}

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline AttributeMapping& AddMappingRules(const MappingRule& value) { m_mappingRulesHasBeenSet = true; m_mappingRules.push_back(value); return *this; }

    /**
     * <p>A list of mapping entries for every supported specifier or sub-field.</p>
     */
    inline AttributeMapping& AddMappingRules(MappingRule&& value) { m_mappingRulesHasBeenSet = true; m_mappingRules.push_back(std::move(value)); return *this; }

  private:

    CertificateField m_certificateField;
    bool m_certificateFieldHasBeenSet = false;

    Aws::Vector<MappingRule> m_mappingRules;
    bool m_mappingRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
