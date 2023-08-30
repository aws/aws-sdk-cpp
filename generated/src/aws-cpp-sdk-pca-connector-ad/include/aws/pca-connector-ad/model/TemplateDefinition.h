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
    AWS_PCACONNECTORAD_API TemplateDefinition();
    AWS_PCACONNECTORAD_API TemplateDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API TemplateDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline const TemplateV2& GetTemplateV2() const{ return m_templateV2; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline bool TemplateV2HasBeenSet() const { return m_templateV2HasBeenSet; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline void SetTemplateV2(const TemplateV2& value) { m_templateV2HasBeenSet = true; m_templateV2 = value; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline void SetTemplateV2(TemplateV2&& value) { m_templateV2HasBeenSet = true; m_templateV2 = std::move(value); }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline TemplateDefinition& WithTemplateV2(const TemplateV2& value) { SetTemplateV2(value); return *this;}

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline TemplateDefinition& WithTemplateV2(TemplateV2&& value) { SetTemplateV2(std::move(value)); return *this;}


    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline const TemplateV3& GetTemplateV3() const{ return m_templateV3; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline bool TemplateV3HasBeenSet() const { return m_templateV3HasBeenSet; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline void SetTemplateV3(const TemplateV3& value) { m_templateV3HasBeenSet = true; m_templateV3 = value; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline void SetTemplateV3(TemplateV3&& value) { m_templateV3HasBeenSet = true; m_templateV3 = std::move(value); }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline TemplateDefinition& WithTemplateV3(const TemplateV3& value) { SetTemplateV3(value); return *this;}

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline TemplateDefinition& WithTemplateV3(TemplateV3&& value) { SetTemplateV3(std::move(value)); return *this;}


    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline const TemplateV4& GetTemplateV4() const{ return m_templateV4; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline bool TemplateV4HasBeenSet() const { return m_templateV4HasBeenSet; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline void SetTemplateV4(const TemplateV4& value) { m_templateV4HasBeenSet = true; m_templateV4 = value; }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline void SetTemplateV4(TemplateV4&& value) { m_templateV4HasBeenSet = true; m_templateV4 = std::move(value); }

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline TemplateDefinition& WithTemplateV4(const TemplateV4& value) { SetTemplateV4(value); return *this;}

    /**
     * <p>Template configuration to define the information included in certificates.
     * Define certificate validity and renewal periods, certificate request handling
     * and enrollment options, key usage extensions, application policies, and
     * cryptography settings.</p>
     */
    inline TemplateDefinition& WithTemplateV4(TemplateV4&& value) { SetTemplateV4(std::move(value)); return *this;}

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
