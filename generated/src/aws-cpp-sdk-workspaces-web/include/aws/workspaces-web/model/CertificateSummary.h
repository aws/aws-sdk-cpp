/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The summary of the certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CertificateSummary">AWS
   * API Reference</a></p>
   */
  class CertificateSummary
  {
  public:
    AWS_WORKSPACESWEB_API CertificateSummary() = default;
    AWS_WORKSPACESWEB_API CertificateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API CertificateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A hexadecimal identifier for the certificate.</p>
     */
    inline const Aws::String& GetThumbprint() const { return m_thumbprint; }
    inline bool ThumbprintHasBeenSet() const { return m_thumbprintHasBeenSet; }
    template<typename ThumbprintT = Aws::String>
    void SetThumbprint(ThumbprintT&& value) { m_thumbprintHasBeenSet = true; m_thumbprint = std::forward<ThumbprintT>(value); }
    template<typename ThumbprintT = Aws::String>
    CertificateSummary& WithThumbprint(ThumbprintT&& value) { SetThumbprint(std::forward<ThumbprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity the certificate belongs to.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    CertificateSummary& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that issued the certificate.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    CertificateSummary& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate is not valid before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetNotValidBefore() const { return m_notValidBefore; }
    inline bool NotValidBeforeHasBeenSet() const { return m_notValidBeforeHasBeenSet; }
    template<typename NotValidBeforeT = Aws::Utils::DateTime>
    void SetNotValidBefore(NotValidBeforeT&& value) { m_notValidBeforeHasBeenSet = true; m_notValidBefore = std::forward<NotValidBeforeT>(value); }
    template<typename NotValidBeforeT = Aws::Utils::DateTime>
    CertificateSummary& WithNotValidBefore(NotValidBeforeT&& value) { SetNotValidBefore(std::forward<NotValidBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate is not valid after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetNotValidAfter() const { return m_notValidAfter; }
    inline bool NotValidAfterHasBeenSet() const { return m_notValidAfterHasBeenSet; }
    template<typename NotValidAfterT = Aws::Utils::DateTime>
    void SetNotValidAfter(NotValidAfterT&& value) { m_notValidAfterHasBeenSet = true; m_notValidAfter = std::forward<NotValidAfterT>(value); }
    template<typename NotValidAfterT = Aws::Utils::DateTime>
    CertificateSummary& WithNotValidAfter(NotValidAfterT&& value) { SetNotValidAfter(std::forward<NotValidAfterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thumbprint;
    bool m_thumbprintHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::Utils::DateTime m_notValidBefore{};
    bool m_notValidBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notValidAfter{};
    bool m_notValidAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
