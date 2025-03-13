/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/TemplateV2.h>
#include <aws/pca-connector-ad/model/TemplateV3.h>
#include <aws/pca-connector-ad/model/TemplateV4.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Template configuration to define the information included in certificates.
   * Define certificate validity and renewal periods, certificate request handling
   * and enrollment options, key usage extensions, application policies, and
   * cryptography settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/TemplateDefinition">AWS
   * API Reference</a></p>
   */
  class TemplateDefinition
  {
  public:
    AWS_PCACONNECTORAD_API TemplateDefinition() = default;
    AWS_PCACONNECTORAD_API TemplateDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API TemplateDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline const TemplateV2& GetTemplateV2() const { return m_templateV2; }
    inline bool TemplateV2HasBeenSet() const { return m_templateV2HasBeenSet; }
    template<typename TemplateV2T = TemplateV2>
    void SetTemplateV2(TemplateV2T&& value) { m_templateV2HasBeenSet = true; m_templateV2 = std::forward<TemplateV2T>(value); }
    template<typename TemplateV2T = TemplateV2>
    TemplateDefinition& WithTemplateV2(TemplateV2T&& value) { SetTemplateV2(std::forward<TemplateV2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline const TemplateV3& GetTemplateV3() const { return m_templateV3; }
    inline bool TemplateV3HasBeenSet() const { return m_templateV3HasBeenSet; }
    template<typename TemplateV3T = TemplateV3>
    void SetTemplateV3(TemplateV3T&& value) { m_templateV3HasBeenSet = true; m_templateV3 = std::forward<TemplateV3T>(value); }
    template<typename TemplateV3T = TemplateV3>
    TemplateDefinition& WithTemplateV3(TemplateV3T&& value) { SetTemplateV3(std::forward<TemplateV3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline const TemplateV4& GetTemplateV4() const { return m_templateV4; }
    inline bool TemplateV4HasBeenSet() const { return m_templateV4HasBeenSet; }
    template<typename TemplateV4T = TemplateV4>
    void SetTemplateV4(TemplateV4T&& value) { m_templateV4HasBeenSet = true; m_templateV4 = std::forward<TemplateV4T>(value); }
    template<typename TemplateV4T = TemplateV4>
    TemplateDefinition& WithTemplateV4(TemplateV4T&& value) { SetTemplateV4(std::forward<TemplateV4T>(value)); return *this;}
    ///@}
  private:

    TemplateV2 m_templateV2;
    bool m_templateV2HasBeenSet = false;

    TemplateV3 m_templateV3;
    bool m_templateV3HasBeenSet = false;

    TemplateV4 m_templateV4;
    bool m_templateV4HasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
