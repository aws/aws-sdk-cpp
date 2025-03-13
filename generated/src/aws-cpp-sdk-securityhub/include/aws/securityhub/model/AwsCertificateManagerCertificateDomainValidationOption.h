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
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDomainValidationOption() = default;
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDomainValidationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDomainValidationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A fully qualified domain name (FQDN) in the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AwsCertificateManagerCertificateDomainValidationOption& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CNAME record that is added to the DNS database for domain validation.</p>
     */
    inline const AwsCertificateManagerCertificateResourceRecord& GetResourceRecord() const { return m_resourceRecord; }
    inline bool ResourceRecordHasBeenSet() const { return m_resourceRecordHasBeenSet; }
    template<typename ResourceRecordT = AwsCertificateManagerCertificateResourceRecord>
    void SetResourceRecord(ResourceRecordT&& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = std::forward<ResourceRecordT>(value); }
    template<typename ResourceRecordT = AwsCertificateManagerCertificateResourceRecord>
    AwsCertificateManagerCertificateDomainValidationOption& WithResourceRecord(ResourceRecordT&& value) { SetResourceRecord(std::forward<ResourceRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that Certificate Manager uses to send domain validation
     * emails.</p>
     */
    inline const Aws::String& GetValidationDomain() const { return m_validationDomain; }
    inline bool ValidationDomainHasBeenSet() const { return m_validationDomainHasBeenSet; }
    template<typename ValidationDomainT = Aws::String>
    void SetValidationDomain(ValidationDomainT&& value) { m_validationDomainHasBeenSet = true; m_validationDomain = std::forward<ValidationDomainT>(value); }
    template<typename ValidationDomainT = Aws::String>
    AwsCertificateManagerCertificateDomainValidationOption& WithValidationDomain(ValidationDomainT&& value) { SetValidationDomain(std::forward<ValidationDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of email addresses that Certificate Manager uses to send domain
     * validation emails.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationEmails() const { return m_validationEmails; }
    inline bool ValidationEmailsHasBeenSet() const { return m_validationEmailsHasBeenSet; }
    template<typename ValidationEmailsT = Aws::Vector<Aws::String>>
    void SetValidationEmails(ValidationEmailsT&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails = std::forward<ValidationEmailsT>(value); }
    template<typename ValidationEmailsT = Aws::Vector<Aws::String>>
    AwsCertificateManagerCertificateDomainValidationOption& WithValidationEmails(ValidationEmailsT&& value) { SetValidationEmails(std::forward<ValidationEmailsT>(value)); return *this;}
    template<typename ValidationEmailsT = Aws::String>
    AwsCertificateManagerCertificateDomainValidationOption& AddValidationEmails(ValidationEmailsT&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails.emplace_back(std::forward<ValidationEmailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The method used to validate the domain name.</p>
     */
    inline const Aws::String& GetValidationMethod() const { return m_validationMethod; }
    inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }
    template<typename ValidationMethodT = Aws::String>
    void SetValidationMethod(ValidationMethodT&& value) { m_validationMethodHasBeenSet = true; m_validationMethod = std::forward<ValidationMethodT>(value); }
    template<typename ValidationMethodT = Aws::String>
    AwsCertificateManagerCertificateDomainValidationOption& WithValidationMethod(ValidationMethodT&& value) { SetValidationMethod(std::forward<ValidationMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status of the domain name.</p>
     */
    inline const Aws::String& GetValidationStatus() const { return m_validationStatus; }
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
    template<typename ValidationStatusT = Aws::String>
    void SetValidationStatus(ValidationStatusT&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::forward<ValidationStatusT>(value); }
    template<typename ValidationStatusT = Aws::String>
    AwsCertificateManagerCertificateDomainValidationOption& WithValidationStatus(ValidationStatusT&& value) { SetValidationStatus(std::forward<ValidationStatusT>(value)); return *this;}
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
