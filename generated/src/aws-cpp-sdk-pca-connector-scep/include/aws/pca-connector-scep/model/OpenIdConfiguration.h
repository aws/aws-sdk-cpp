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
    AWS_PCACONNECTORSCEP_API OpenIdConfiguration() = default;
    AWS_PCACONNECTORSCEP_API OpenIdConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API OpenIdConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The issuer value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    OpenIdConfiguration& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    OpenIdConfiguration& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audience value to copy into your Microsoft Entra app registration's
     * OIDC.</p>
     */
    inline const Aws::String& GetAudience() const { return m_audience; }
    inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }
    template<typename AudienceT = Aws::String>
    void SetAudience(AudienceT&& value) { m_audienceHasBeenSet = true; m_audience = std::forward<AudienceT>(value); }
    template<typename AudienceT = Aws::String>
    OpenIdConfiguration& WithAudience(AudienceT&& value) { SetAudience(std::forward<AudienceT>(value)); return *this;}
    ///@}
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
