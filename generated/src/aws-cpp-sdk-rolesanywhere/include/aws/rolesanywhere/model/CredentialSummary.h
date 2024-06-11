/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>A record of a presented X509 credential from a temporary credential request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/CredentialSummary">AWS
   * API Reference</a></p>
   */
  class CredentialSummary
  {
  public:
    AWS_ROLESANYWHERE_API CredentialSummary();
    AWS_ROLESANYWHERE_API CredentialSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API CredentialSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the credential is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CredentialSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the temporary credential request was successful. </p>
     */
    inline bool GetFailed() const{ return m_failed; }
    inline bool FailedHasBeenSet() const { return m_failedHasBeenSet; }
    inline void SetFailed(bool value) { m_failedHasBeenSet = true; m_failed = value; }
    inline CredentialSummary& WithFailed(bool value) { SetFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name of the issuing certificate for the presented
     * end-entity certificate.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline CredentialSummary& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline CredentialSummary& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline CredentialSummary& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO-8601 time stamp of when the certificate was last used in a temporary
     * credential request.</p>
     */
    inline const Aws::Utils::DateTime& GetSeenAt() const{ return m_seenAt; }
    inline bool SeenAtHasBeenSet() const { return m_seenAtHasBeenSet; }
    inline void SetSeenAt(const Aws::Utils::DateTime& value) { m_seenAtHasBeenSet = true; m_seenAt = value; }
    inline void SetSeenAt(Aws::Utils::DateTime&& value) { m_seenAtHasBeenSet = true; m_seenAt = std::move(value); }
    inline CredentialSummary& WithSeenAt(const Aws::Utils::DateTime& value) { SetSeenAt(value); return *this;}
    inline CredentialSummary& WithSeenAt(Aws::Utils::DateTime&& value) { SetSeenAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the certificate.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }
    inline CredentialSummary& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline CredentialSummary& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline CredentialSummary& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PEM-encoded data of the certificate.</p>
     */
    inline const Aws::String& GetX509CertificateData() const{ return m_x509CertificateData; }
    inline bool X509CertificateDataHasBeenSet() const { return m_x509CertificateDataHasBeenSet; }
    inline void SetX509CertificateData(const Aws::String& value) { m_x509CertificateDataHasBeenSet = true; m_x509CertificateData = value; }
    inline void SetX509CertificateData(Aws::String&& value) { m_x509CertificateDataHasBeenSet = true; m_x509CertificateData = std::move(value); }
    inline void SetX509CertificateData(const char* value) { m_x509CertificateDataHasBeenSet = true; m_x509CertificateData.assign(value); }
    inline CredentialSummary& WithX509CertificateData(const Aws::String& value) { SetX509CertificateData(value); return *this;}
    inline CredentialSummary& WithX509CertificateData(Aws::String&& value) { SetX509CertificateData(std::move(value)); return *this;}
    inline CredentialSummary& WithX509CertificateData(const char* value) { SetX509CertificateData(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_failed;
    bool m_failedHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::Utils::DateTime m_seenAt;
    bool m_seenAtHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::String m_x509CertificateData;
    bool m_x509CertificateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
