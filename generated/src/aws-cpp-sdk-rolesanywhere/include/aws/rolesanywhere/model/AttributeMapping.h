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
    AWS_ROLESANYWHERE_API AttributeMapping() = default;
    AWS_ROLESANYWHERE_API AttributeMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API AttributeMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Fields (x509Subject, x509Issuer and x509SAN) within X.509 certificates.</p>
     */
    inline CertificateField GetCertificateField() const { return m_certificateField; }
    inline bool CertificateFieldHasBeenSet() const { return m_certificateFieldHasBeenSet; }
    inline void SetCertificateField(CertificateField value) { m_certificateFieldHasBeenSet = true; m_certificateField = value; }
    inline AttributeMapping& WithCertificateField(CertificateField value) { SetCertificateField(value); return *this;}
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
    AttributeMapping& WithMappingRules(MappingRulesT&& value) { SetMappingRules(std::forward<MappingRulesT>(value)); return *this;}
    template<typename MappingRulesT = MappingRule>
    AttributeMapping& AddMappingRules(MappingRulesT&& value) { m_mappingRulesHasBeenSet = true; m_mappingRules.emplace_back(std::forward<MappingRulesT>(value)); return *this; }
    ///@}
  private:

    CertificateField m_certificateField{CertificateField::NOT_SET};
    bool m_certificateFieldHasBeenSet = false;

    Aws::Vector<MappingRule> m_mappingRules;
    bool m_mappingRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
