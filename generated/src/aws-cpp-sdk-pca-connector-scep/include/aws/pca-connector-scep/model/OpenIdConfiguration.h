/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PcaConnectorScep
{
namespace Model
{

  /**
   * <p>Contains OpenID Connect (OIDC) parameters for use with Microsoft Intune. For
   * more information about using Connector for SCEP for Microsoft Intune, see <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlconnector-for-scep-intune.html">Using
   * Connector for SCEP for Microsoft Intune</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/OpenIdConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenIdConfiguration
  {
  public:
    AWS_PCACONNECTORSCEP_API OpenIdConfiguration();
    AWS_PCACONNECTORSCEP_API OpenIdConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API OpenIdConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The issuer value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The issuer value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>The issuer value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The issuer value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The issuer value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The issuer value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline OpenIdConfiguration& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The issuer value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline OpenIdConfiguration& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The issuer value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline OpenIdConfiguration& WithIssuer(const char* value) { SetIssuer(value); return *this;}


    /**
     * <p>The subject value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline OpenIdConfiguration& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline OpenIdConfiguration& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline OpenIdConfiguration& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>The audience value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline const Aws::String& GetAudience() const{ return m_audience; }

    /**
     * <p>The audience value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }

    /**
     * <p>The audience value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline void SetAudience(const Aws::String& value) { m_audienceHasBeenSet = true; m_audience = value; }

    /**
     * <p>The audience value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline void SetAudience(Aws::String&& value) { m_audienceHasBeenSet = true; m_audience = std::move(value); }

    /**
     * <p>The audience value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline void SetAudience(const char* value) { m_audienceHasBeenSet = true; m_audience.assign(value); }

    /**
     * <p>The audience value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline OpenIdConfiguration& WithAudience(const Aws::String& value) { SetAudience(value); return *this;}

    /**
     * <p>The audience value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline OpenIdConfiguration& WithAudience(Aws::String&& value) { SetAudience(std::move(value)); return *this;}

    /**
     * <p>The audience value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline OpenIdConfiguration& WithAudience(const char* value) { SetAudience(value); return *this;}

  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_audience;
    bool m_audienceHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
