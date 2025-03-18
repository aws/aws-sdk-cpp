/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateOptions.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateRenewalSummary.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateDomainValidationOption.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateExtendedKeyUsage.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateKeyUsage.h>
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
   * <p>Provides details about an Certificate Manager certificate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCertificateManagerCertificateDetails">AWS
   * API Reference</a></p>
   */
  class AwsCertificateManagerCertificateDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDetails() = default;
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the private certificate authority (CA) that will be used to issue
     * the certificate.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the certificate was requested.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN), such as www.example.com, that is
     * secured by the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <code>RequestCertificate</code> request.</p> <p>Only
     * provided if the certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline const Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>& GetDomainValidationOptions() const { return m_domainValidationOptions; }
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }
    template<typename DomainValidationOptionsT = Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>>
    void SetDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::forward<DomainValidationOptionsT>(value); }
    template<typename DomainValidationOptionsT = Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>>
    AwsCertificateManagerCertificateDetails& WithDomainValidationOptions(DomainValidationOptionsT&& value) { SetDomainValidationOptions(std::forward<DomainValidationOptionsT>(value)); return *this;}
    template<typename DomainValidationOptionsT = AwsCertificateManagerCertificateDomainValidationOption>
    AwsCertificateManagerCertificateDetails& AddDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.emplace_back(std::forward<DomainValidationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID).</p>
     */
    inline const Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage>& GetExtendedKeyUsages() const { return m_extendedKeyUsages; }
    inline bool ExtendedKeyUsagesHasBeenSet() const { return m_extendedKeyUsagesHasBeenSet; }
    template<typename ExtendedKeyUsagesT = Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage>>
    void SetExtendedKeyUsages(ExtendedKeyUsagesT&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages = std::forward<ExtendedKeyUsagesT>(value); }
    template<typename ExtendedKeyUsagesT = Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage>>
    AwsCertificateManagerCertificateDetails& WithExtendedKeyUsages(ExtendedKeyUsagesT&& value) { SetExtendedKeyUsages(std::forward<ExtendedKeyUsagesT>(value)); return *this;}
    template<typename ExtendedKeyUsagesT = AwsCertificateManagerCertificateExtendedKeyUsage>
    AwsCertificateManagerCertificateDetails& AddExtendedKeyUsages(ExtendedKeyUsagesT&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages.emplace_back(std::forward<ExtendedKeyUsagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a failed certificate request, the reason for the failure.</p> <p>Valid
     * values: <code>NO_AVAILABLE_CONTACTS</code> |
     * <code>ADDITIONAL_VERIFICATION_REQUIRED</code> | <code>DOMAIN_NOT_ALLOWED</code>
     * | <code>INVALID_PUBLIC_DOMAIN</code> | <code>DOMAIN_VALIDATION_DENIED</code> |
     * <code>CAA_ERROR</code> | <code>PCA_LIMIT_EXCEEDED</code> |
     * <code>PCA_INVALID_ARN</code> | <code>PCA_INVALID_STATE</code> |
     * <code>PCA_REQUEST_FAILED</code> | <code>PCA_NAME_CONSTRAINTS_VALIDATION</code> |
     * <code>PCA_RESOURCE_NOT_FOUND</code> | <code>PCA_INVALID_ARGS</code> |
     * <code>PCA_INVALID_DURATION</code> | <code>PCA_ACCESS_DENIED</code> |
     * <code>SLR_NOT_FOUND</code> | <code>OTHER</code> </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the certificate was imported. Provided if the certificate type
     * is <code>IMPORTED</code>.</p> <p>For more information about the validation and
     * formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetImportedAt() const { return m_importedAt; }
    inline bool ImportedAtHasBeenSet() const { return m_importedAtHasBeenSet; }
    template<typename ImportedAtT = Aws::String>
    void SetImportedAt(ImportedAtT&& value) { m_importedAtHasBeenSet = true; m_importedAt = std::forward<ImportedAtT>(value); }
    template<typename ImportedAtT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithImportedAt(ImportedAtT&& value) { SetImportedAt(std::forward<ImportedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInUseBy() const { return m_inUseBy; }
    inline bool InUseByHasBeenSet() const { return m_inUseByHasBeenSet; }
    template<typename InUseByT = Aws::Vector<Aws::String>>
    void SetInUseBy(InUseByT&& value) { m_inUseByHasBeenSet = true; m_inUseBy = std::forward<InUseByT>(value); }
    template<typename InUseByT = Aws::Vector<Aws::String>>
    AwsCertificateManagerCertificateDetails& WithInUseBy(InUseByT&& value) { SetInUseBy(std::forward<InUseByT>(value)); return *this;}
    template<typename InUseByT = Aws::String>
    AwsCertificateManagerCertificateDetails& AddInUseBy(InUseByT&& value) { m_inUseByHasBeenSet = true; m_inUseBy.emplace_back(std::forward<InUseByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates when the certificate was issued. Provided if the certificate type
     * is <code>AMAZON_ISSUED</code>.</p> <p>For more information about the validation
     * and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetIssuedAt() const { return m_issuedAt; }
    inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
    template<typename IssuedAtT = Aws::String>
    void SetIssuedAt(IssuedAtT&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = std::forward<IssuedAtT>(value); }
    template<typename IssuedAtT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithIssuedAt(IssuedAtT&& value) { SetIssuedAt(std::forward<IssuedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     * <p>Valid values: <code>RSA_2048</code> | <code>RSA_1024</code> |<code>
     * RSA_4096</code> | <code>EC_prime256v1</code> | <code>EC_secp384r1</code> |
     * <code>EC_secp521r1</code> </p>
     */
    inline const Aws::String& GetKeyAlgorithm() const { return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    template<typename KeyAlgorithmT = Aws::String>
    void SetKeyAlgorithm(KeyAlgorithmT&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::forward<KeyAlgorithmT>(value); }
    template<typename KeyAlgorithmT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithKeyAlgorithm(KeyAlgorithmT&& value) { SetKeyAlgorithm(std::forward<KeyAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key usage X.509 v3 extension objects.</p>
     */
    inline const Aws::Vector<AwsCertificateManagerCertificateKeyUsage>& GetKeyUsages() const { return m_keyUsages; }
    inline bool KeyUsagesHasBeenSet() const { return m_keyUsagesHasBeenSet; }
    template<typename KeyUsagesT = Aws::Vector<AwsCertificateManagerCertificateKeyUsage>>
    void SetKeyUsages(KeyUsagesT&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages = std::forward<KeyUsagesT>(value); }
    template<typename KeyUsagesT = Aws::Vector<AwsCertificateManagerCertificateKeyUsage>>
    AwsCertificateManagerCertificateDetails& WithKeyUsages(KeyUsagesT&& value) { SetKeyUsages(std::forward<KeyUsagesT>(value)); return *this;}
    template<typename KeyUsagesT = AwsCertificateManagerCertificateKeyUsage>
    AwsCertificateManagerCertificateDetails& AddKeyUsages(KeyUsagesT&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages.emplace_back(std::forward<KeyUsagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time after which the certificate becomes invalid.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetNotAfter() const { return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    template<typename NotAfterT = Aws::String>
    void SetNotAfter(NotAfterT&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::forward<NotAfterT>(value); }
    template<typename NotAfterT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithNotAfter(NotAfterT&& value) { SetNotAfter(std::forward<NotAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time before which the certificate is not valid.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetNotBefore() const { return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    template<typename NotBeforeT = Aws::String>
    void SetNotBefore(NotBeforeT&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::forward<NotBeforeT>(value); }
    template<typename NotBeforeT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithNotBefore(NotBeforeT&& value) { SetNotBefore(std::forward<NotBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a value that specifies whether to add the certificate to a
     * transparency log.</p>
     */
    inline const AwsCertificateManagerCertificateOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = AwsCertificateManagerCertificateOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = AwsCertificateManagerCertificateOptions>
    AwsCertificateManagerCertificateDetails& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the certificate is eligible for renewal.</p> <p>Valid values:
     * <code>ELIGIBLE</code> | <code>INELIGIBLE</code> </p>
     */
    inline const Aws::String& GetRenewalEligibility() const { return m_renewalEligibility; }
    inline bool RenewalEligibilityHasBeenSet() const { return m_renewalEligibilityHasBeenSet; }
    template<typename RenewalEligibilityT = Aws::String>
    void SetRenewalEligibility(RenewalEligibilityT&& value) { m_renewalEligibilityHasBeenSet = true; m_renewalEligibility = std::forward<RenewalEligibilityT>(value); }
    template<typename RenewalEligibilityT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithRenewalEligibility(RenewalEligibilityT&& value) { SetRenewalEligibility(std::forward<RenewalEligibilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of the Certificate Manager managed renewal for
     * the certificate. Provided only when the certificate type is
     * <code>AMAZON_ISSUED</code>.</p>
     */
    inline const AwsCertificateManagerCertificateRenewalSummary& GetRenewalSummary() const { return m_renewalSummary; }
    inline bool RenewalSummaryHasBeenSet() const { return m_renewalSummaryHasBeenSet; }
    template<typename RenewalSummaryT = AwsCertificateManagerCertificateRenewalSummary>
    void SetRenewalSummary(RenewalSummaryT&& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = std::forward<RenewalSummaryT>(value); }
    template<typename RenewalSummaryT = AwsCertificateManagerCertificateRenewalSummary>
    AwsCertificateManagerCertificateDetails& WithRenewalSummary(RenewalSummaryT&& value) { SetRenewalSummary(std::forward<RenewalSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the certificate.</p>
     */
    inline const Aws::String& GetSerial() const { return m_serial; }
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }
    template<typename SerialT = Aws::String>
    void SetSerial(SerialT&& value) { m_serialHasBeenSet = true; m_serial = std::forward<SerialT>(value); }
    template<typename SerialT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithSerial(SerialT&& value) { SetSerial(std::forward<SerialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const { return m_signatureAlgorithm; }
    inline bool SignatureAlgorithmHasBeenSet() const { return m_signatureAlgorithmHasBeenSet; }
    template<typename SignatureAlgorithmT = Aws::String>
    void SetSignatureAlgorithm(SignatureAlgorithmT&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = std::forward<SignatureAlgorithmT>(value); }
    template<typename SignatureAlgorithmT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithSignatureAlgorithm(SignatureAlgorithmT&& value) { SetSignatureAlgorithm(std::forward<SignatureAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the certificate.</p> <p>Valid values:
     * <code>PENDING_VALIDATION</code> | <code>ISSUED</code> | <code>INACTIVE</code> |
     * <code>EXPIRED</code> | <code>VALIDATION_TIMED_OUT</code> | <code>REVOKED</code>
     * | <code>FAILED</code> </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const { return m_subjectAlternativeNames; }
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    void SetSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::forward<SubjectAlternativeNamesT>(value); }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    AwsCertificateManagerCertificateDetails& WithSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { SetSubjectAlternativeNames(std::forward<SubjectAlternativeNamesT>(value)); return *this;}
    template<typename SubjectAlternativeNamesT = Aws::String>
    AwsCertificateManagerCertificateDetails& AddSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.emplace_back(std::forward<SubjectAlternativeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source of the certificate. For certificates that Certificate Manager
     * provides, <code>Type</code> is <code>AMAZON_ISSUED</code>. For certificates that
     * are imported with <code>ImportCertificate</code>, <code>Type</code> is
     * <code>IMPORTED</code>.</p> <p>Valid values: <code>IMPORTED</code> |
     * <code>AMAZON_ISSUED</code> | <code>PRIVATE</code> </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsCertificateManagerCertificateDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet = false;

    Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage> m_extendedKeyUsages;
    bool m_extendedKeyUsagesHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_importedAt;
    bool m_importedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_inUseBy;
    bool m_inUseByHasBeenSet = false;

    Aws::String m_issuedAt;
    bool m_issuedAtHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;

    Aws::Vector<AwsCertificateManagerCertificateKeyUsage> m_keyUsages;
    bool m_keyUsagesHasBeenSet = false;

    Aws::String m_notAfter;
    bool m_notAfterHasBeenSet = false;

    Aws::String m_notBefore;
    bool m_notBeforeHasBeenSet = false;

    AwsCertificateManagerCertificateOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::String m_renewalEligibility;
    bool m_renewalEligibilityHasBeenSet = false;

    AwsCertificateManagerCertificateRenewalSummary m_renewalSummary;
    bool m_renewalSummaryHasBeenSet = false;

    Aws::String m_serial;
    bool m_serialHasBeenSet = false;

    Aws::String m_signatureAlgorithm;
    bool m_signatureAlgorithmHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
