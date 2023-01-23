/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateDomainValidationOption.h>
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
   * <p>Contains information about the Certificate Manager managed renewal for an
   * <code>AMAZON_ISSUED</code> certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCertificateManagerCertificateRenewalSummary">AWS
   * API Reference</a></p>
   */
  class AwsCertificateManagerCertificateRenewalSummary
  {
  public:
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateRenewalSummary();
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateRenewalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateRenewalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the validation of each domain name in the certificate, as
     * it pertains to Certificate Manager managed renewal. Provided only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline const Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }

    /**
     * <p>Information about the validation of each domain name in the certificate, as
     * it pertains to Certificate Manager managed renewal. Provided only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }

    /**
     * <p>Information about the validation of each domain name in the certificate, as
     * it pertains to Certificate Manager managed renewal. Provided only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetDomainValidationOptions(const Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>Information about the validation of each domain name in the certificate, as
     * it pertains to Certificate Manager managed renewal. Provided only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetDomainValidationOptions(Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::move(value); }

    /**
     * <p>Information about the validation of each domain name in the certificate, as
     * it pertains to Certificate Manager managed renewal. Provided only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& WithDomainValidationOptions(const Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>Information about the validation of each domain name in the certificate, as
     * it pertains to Certificate Manager managed renewal. Provided only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& WithDomainValidationOptions(Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>&& value) { SetDomainValidationOptions(std::move(value)); return *this;}

    /**
     * <p>Information about the validation of each domain name in the certificate, as
     * it pertains to Certificate Manager managed renewal. Provided only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& AddDomainValidationOptions(const AwsCertificateManagerCertificateDomainValidationOption& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p>Information about the validation of each domain name in the certificate, as
     * it pertains to Certificate Manager managed renewal. Provided only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& AddDomainValidationOptions(AwsCertificateManagerCertificateDomainValidationOption&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the Certificate Manager managed renewal of the certificate.</p>
     * <p>Valid values: <code>PENDING_AUTO_RENEWAL</code> |
     * <code>PENDING_VALIDATION</code> | <code>SUCCESS</code> | <code>FAILED</code>
     * </p>
     */
    inline const Aws::String& GetRenewalStatus() const{ return m_renewalStatus; }

    /**
     * <p>The status of the Certificate Manager managed renewal of the certificate.</p>
     * <p>Valid values: <code>PENDING_AUTO_RENEWAL</code> |
     * <code>PENDING_VALIDATION</code> | <code>SUCCESS</code> | <code>FAILED</code>
     * </p>
     */
    inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }

    /**
     * <p>The status of the Certificate Manager managed renewal of the certificate.</p>
     * <p>Valid values: <code>PENDING_AUTO_RENEWAL</code> |
     * <code>PENDING_VALIDATION</code> | <code>SUCCESS</code> | <code>FAILED</code>
     * </p>
     */
    inline void SetRenewalStatus(const Aws::String& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = value; }

    /**
     * <p>The status of the Certificate Manager managed renewal of the certificate.</p>
     * <p>Valid values: <code>PENDING_AUTO_RENEWAL</code> |
     * <code>PENDING_VALIDATION</code> | <code>SUCCESS</code> | <code>FAILED</code>
     * </p>
     */
    inline void SetRenewalStatus(Aws::String&& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = std::move(value); }

    /**
     * <p>The status of the Certificate Manager managed renewal of the certificate.</p>
     * <p>Valid values: <code>PENDING_AUTO_RENEWAL</code> |
     * <code>PENDING_VALIDATION</code> | <code>SUCCESS</code> | <code>FAILED</code>
     * </p>
     */
    inline void SetRenewalStatus(const char* value) { m_renewalStatusHasBeenSet = true; m_renewalStatus.assign(value); }

    /**
     * <p>The status of the Certificate Manager managed renewal of the certificate.</p>
     * <p>Valid values: <code>PENDING_AUTO_RENEWAL</code> |
     * <code>PENDING_VALIDATION</code> | <code>SUCCESS</code> | <code>FAILED</code>
     * </p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& WithRenewalStatus(const Aws::String& value) { SetRenewalStatus(value); return *this;}

    /**
     * <p>The status of the Certificate Manager managed renewal of the certificate.</p>
     * <p>Valid values: <code>PENDING_AUTO_RENEWAL</code> |
     * <code>PENDING_VALIDATION</code> | <code>SUCCESS</code> | <code>FAILED</code>
     * </p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& WithRenewalStatus(Aws::String&& value) { SetRenewalStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Certificate Manager managed renewal of the certificate.</p>
     * <p>Valid values: <code>PENDING_AUTO_RENEWAL</code> |
     * <code>PENDING_VALIDATION</code> | <code>SUCCESS</code> | <code>FAILED</code>
     * </p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& WithRenewalStatus(const char* value) { SetRenewalStatus(value); return *this;}


    /**
     * <p>The reason that a renewal request was unsuccessful. This attribute is used
     * only when <code>RenewalStatus</code> is <code>FAILED</code>.</p> <p>Valid
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
    inline const Aws::String& GetRenewalStatusReason() const{ return m_renewalStatusReason; }

    /**
     * <p>The reason that a renewal request was unsuccessful. This attribute is used
     * only when <code>RenewalStatus</code> is <code>FAILED</code>.</p> <p>Valid
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
    inline bool RenewalStatusReasonHasBeenSet() const { return m_renewalStatusReasonHasBeenSet; }

    /**
     * <p>The reason that a renewal request was unsuccessful. This attribute is used
     * only when <code>RenewalStatus</code> is <code>FAILED</code>.</p> <p>Valid
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
    inline void SetRenewalStatusReason(const Aws::String& value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason = value; }

    /**
     * <p>The reason that a renewal request was unsuccessful. This attribute is used
     * only when <code>RenewalStatus</code> is <code>FAILED</code>.</p> <p>Valid
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
    inline void SetRenewalStatusReason(Aws::String&& value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason = std::move(value); }

    /**
     * <p>The reason that a renewal request was unsuccessful. This attribute is used
     * only when <code>RenewalStatus</code> is <code>FAILED</code>.</p> <p>Valid
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
    inline void SetRenewalStatusReason(const char* value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason.assign(value); }

    /**
     * <p>The reason that a renewal request was unsuccessful. This attribute is used
     * only when <code>RenewalStatus</code> is <code>FAILED</code>.</p> <p>Valid
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
    inline AwsCertificateManagerCertificateRenewalSummary& WithRenewalStatusReason(const Aws::String& value) { SetRenewalStatusReason(value); return *this;}

    /**
     * <p>The reason that a renewal request was unsuccessful. This attribute is used
     * only when <code>RenewalStatus</code> is <code>FAILED</code>.</p> <p>Valid
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
    inline AwsCertificateManagerCertificateRenewalSummary& WithRenewalStatusReason(Aws::String&& value) { SetRenewalStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason that a renewal request was unsuccessful. This attribute is used
     * only when <code>RenewalStatus</code> is <code>FAILED</code>.</p> <p>Valid
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
    inline AwsCertificateManagerCertificateRenewalSummary& WithRenewalStatusReason(const char* value) { SetRenewalStatusReason(value); return *this;}


    /**
     * <p>Indicates when the renewal summary was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>Indicates when the renewal summary was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>Indicates when the renewal summary was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>Indicates when the renewal summary was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>Indicates when the renewal summary was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdatedAt(const char* value) { m_updatedAtHasBeenSet = true; m_updatedAt.assign(value); }

    /**
     * <p>Indicates when the renewal summary was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>Indicates when the renewal summary was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the renewal summary was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateRenewalSummary& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}

  private:

    Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet = false;

    Aws::String m_renewalStatus;
    bool m_renewalStatusHasBeenSet = false;

    Aws::String m_renewalStatusReason;
    bool m_renewalStatusReasonHasBeenSet = false;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
