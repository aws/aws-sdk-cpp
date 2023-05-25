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
    AWS_WORKSPACESWEB_API CertificateSummary();
    AWS_WORKSPACESWEB_API CertificateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API CertificateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The entity that issued the certificate.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The entity that issued the certificate.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>The entity that issued the certificate.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The entity that issued the certificate.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The entity that issued the certificate.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The entity that issued the certificate.</p>
     */
    inline CertificateSummary& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The entity that issued the certificate.</p>
     */
    inline CertificateSummary& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The entity that issued the certificate.</p>
     */
    inline CertificateSummary& WithIssuer(const char* value) { SetIssuer(value); return *this;}


    /**
     * <p>The certificate is not valid after this date.</p>
     */
    inline const Aws::Utils::DateTime& GetNotValidAfter() const{ return m_notValidAfter; }

    /**
     * <p>The certificate is not valid after this date.</p>
     */
    inline bool NotValidAfterHasBeenSet() const { return m_notValidAfterHasBeenSet; }

    /**
     * <p>The certificate is not valid after this date.</p>
     */
    inline void SetNotValidAfter(const Aws::Utils::DateTime& value) { m_notValidAfterHasBeenSet = true; m_notValidAfter = value; }

    /**
     * <p>The certificate is not valid after this date.</p>
     */
    inline void SetNotValidAfter(Aws::Utils::DateTime&& value) { m_notValidAfterHasBeenSet = true; m_notValidAfter = std::move(value); }

    /**
     * <p>The certificate is not valid after this date.</p>
     */
    inline CertificateSummary& WithNotValidAfter(const Aws::Utils::DateTime& value) { SetNotValidAfter(value); return *this;}

    /**
     * <p>The certificate is not valid after this date.</p>
     */
    inline CertificateSummary& WithNotValidAfter(Aws::Utils::DateTime&& value) { SetNotValidAfter(std::move(value)); return *this;}


    /**
     * <p>The certificate is not valid before this date.</p>
     */
    inline const Aws::Utils::DateTime& GetNotValidBefore() const{ return m_notValidBefore; }

    /**
     * <p>The certificate is not valid before this date.</p>
     */
    inline bool NotValidBeforeHasBeenSet() const { return m_notValidBeforeHasBeenSet; }

    /**
     * <p>The certificate is not valid before this date.</p>
     */
    inline void SetNotValidBefore(const Aws::Utils::DateTime& value) { m_notValidBeforeHasBeenSet = true; m_notValidBefore = value; }

    /**
     * <p>The certificate is not valid before this date.</p>
     */
    inline void SetNotValidBefore(Aws::Utils::DateTime&& value) { m_notValidBeforeHasBeenSet = true; m_notValidBefore = std::move(value); }

    /**
     * <p>The certificate is not valid before this date.</p>
     */
    inline CertificateSummary& WithNotValidBefore(const Aws::Utils::DateTime& value) { SetNotValidBefore(value); return *this;}

    /**
     * <p>The certificate is not valid before this date.</p>
     */
    inline CertificateSummary& WithNotValidBefore(Aws::Utils::DateTime&& value) { SetNotValidBefore(std::move(value)); return *this;}


    /**
     * <p>The entity the certificate belongs to.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The entity the certificate belongs to.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The entity the certificate belongs to.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The entity the certificate belongs to.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The entity the certificate belongs to.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The entity the certificate belongs to.</p>
     */
    inline CertificateSummary& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The entity the certificate belongs to.</p>
     */
    inline CertificateSummary& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The entity the certificate belongs to.</p>
     */
    inline CertificateSummary& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>A hexadecimal identifier for the certificate.</p>
     */
    inline const Aws::String& GetThumbprint() const{ return m_thumbprint; }

    /**
     * <p>A hexadecimal identifier for the certificate.</p>
     */
    inline bool ThumbprintHasBeenSet() const { return m_thumbprintHasBeenSet; }

    /**
     * <p>A hexadecimal identifier for the certificate.</p>
     */
    inline void SetThumbprint(const Aws::String& value) { m_thumbprintHasBeenSet = true; m_thumbprint = value; }

    /**
     * <p>A hexadecimal identifier for the certificate.</p>
     */
    inline void SetThumbprint(Aws::String&& value) { m_thumbprintHasBeenSet = true; m_thumbprint = std::move(value); }

    /**
     * <p>A hexadecimal identifier for the certificate.</p>
     */
    inline void SetThumbprint(const char* value) { m_thumbprintHasBeenSet = true; m_thumbprint.assign(value); }

    /**
     * <p>A hexadecimal identifier for the certificate.</p>
     */
    inline CertificateSummary& WithThumbprint(const Aws::String& value) { SetThumbprint(value); return *this;}

    /**
     * <p>A hexadecimal identifier for the certificate.</p>
     */
    inline CertificateSummary& WithThumbprint(Aws::String&& value) { SetThumbprint(std::move(value)); return *this;}

    /**
     * <p>A hexadecimal identifier for the certificate.</p>
     */
    inline CertificateSummary& WithThumbprint(const char* value) { SetThumbprint(value); return *this;}

  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::Utils::DateTime m_notValidAfter;
    bool m_notValidAfterHasBeenSet = false;

    Aws::Utils::DateTime m_notValidBefore;
    bool m_notValidBeforeHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_thumbprint;
    bool m_thumbprintHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
