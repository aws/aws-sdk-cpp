/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateResourceRecord.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about one of the following:</p> <ul> <li> <p>The initial
   * validation of each domain name that occurs as a result of the
   * <code>RequestCertificate</code> request</p> </li> <li> <p>The validation of each
   * domain name in the certificate, as it pertains to Certificate Manager managed
   * renewal</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCertificateManagerCertificateDomainValidationOption">AWS
   * API Reference</a></p>
   */
  class AwsCertificateManagerCertificateDomainValidationOption
  {
  public:
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDomainValidationOption();
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDomainValidationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDomainValidationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A fully qualified domain name (FQDN) in the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline AwsCertificateManagerCertificateDomainValidationOption& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CNAME record that is added to the DNS database for domain validation.</p>
     */
    inline const AwsCertificateManagerCertificateResourceRecord& GetResourceRecord() const{ return m_resourceRecord; }
    inline bool ResourceRecordHasBeenSet() const { return m_resourceRecordHasBeenSet; }
    inline void SetResourceRecord(const AwsCertificateManagerCertificateResourceRecord& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = value; }
    inline void SetResourceRecord(AwsCertificateManagerCertificateResourceRecord&& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = std::move(value); }
    inline AwsCertificateManagerCertificateDomainValidationOption& WithResourceRecord(const AwsCertificateManagerCertificateResourceRecord& value) { SetResourceRecord(value); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithResourceRecord(AwsCertificateManagerCertificateResourceRecord&& value) { SetResourceRecord(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that Certificate Manager uses to send domain validation
     * emails.</p>
     */
    inline const Aws::String& GetValidationDomain() const{ return m_validationDomain; }
    inline bool ValidationDomainHasBeenSet() const { return m_validationDomainHasBeenSet; }
    inline void SetValidationDomain(const Aws::String& value) { m_validationDomainHasBeenSet = true; m_validationDomain = value; }
    inline void SetValidationDomain(Aws::String&& value) { m_validationDomainHasBeenSet = true; m_validationDomain = std::move(value); }
    inline void SetValidationDomain(const char* value) { m_validationDomainHasBeenSet = true; m_validationDomain.assign(value); }
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationDomain(const Aws::String& value) { SetValidationDomain(value); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationDomain(Aws::String&& value) { SetValidationDomain(std::move(value)); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationDomain(const char* value) { SetValidationDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of email addresses that Certificate Manager uses to send domain
     * validation emails.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationEmails() const{ return m_validationEmails; }
    inline bool ValidationEmailsHasBeenSet() const { return m_validationEmailsHasBeenSet; }
    inline void SetValidationEmails(const Aws::Vector<Aws::String>& value) { m_validationEmailsHasBeenSet = true; m_validationEmails = value; }
    inline void SetValidationEmails(Aws::Vector<Aws::String>&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails = std::move(value); }
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationEmails(const Aws::Vector<Aws::String>& value) { SetValidationEmails(value); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationEmails(Aws::Vector<Aws::String>&& value) { SetValidationEmails(std::move(value)); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& AddValidationEmails(const Aws::String& value) { m_validationEmailsHasBeenSet = true; m_validationEmails.push_back(value); return *this; }
    inline AwsCertificateManagerCertificateDomainValidationOption& AddValidationEmails(Aws::String&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails.push_back(std::move(value)); return *this; }
    inline AwsCertificateManagerCertificateDomainValidationOption& AddValidationEmails(const char* value) { m_validationEmailsHasBeenSet = true; m_validationEmails.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The method used to validate the domain name.</p>
     */
    inline const Aws::String& GetValidationMethod() const{ return m_validationMethod; }
    inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }
    inline void SetValidationMethod(const Aws::String& value) { m_validationMethodHasBeenSet = true; m_validationMethod = value; }
    inline void SetValidationMethod(Aws::String&& value) { m_validationMethodHasBeenSet = true; m_validationMethod = std::move(value); }
    inline void SetValidationMethod(const char* value) { m_validationMethodHasBeenSet = true; m_validationMethod.assign(value); }
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationMethod(const Aws::String& value) { SetValidationMethod(value); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationMethod(Aws::String&& value) { SetValidationMethod(std::move(value)); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationMethod(const char* value) { SetValidationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status of the domain name.</p>
     */
    inline const Aws::String& GetValidationStatus() const{ return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    inline void SetValidationStatus(const Aws::String& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }
    inline void SetValidationStatus(Aws::String&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }
    inline void SetValidationStatus(const char* value) { m_validationStatusHasBeenSet = true; m_validationStatus.assign(value); }
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationStatus(const Aws::String& value) { SetValidationStatus(value); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationStatus(Aws::String&& value) { SetValidationStatus(std::move(value)); return *this;}
    inline AwsCertificateManagerCertificateDomainValidationOption& WithValidationStatus(const char* value) { SetValidationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    AwsCertificateManagerCertificateResourceRecord m_resourceRecord;
    bool m_resourceRecordHasBeenSet = false;

    Aws::String m_validationDomain;
    bool m_validationDomainHasBeenSet = false;

    Aws::Vector<Aws::String> m_validationEmails;
    bool m_validationEmailsHasBeenSet = false;

    Aws::String m_validationMethod;
    bool m_validationMethodHasBeenSet = false;

    Aws::String m_validationStatus;
    bool m_validationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
