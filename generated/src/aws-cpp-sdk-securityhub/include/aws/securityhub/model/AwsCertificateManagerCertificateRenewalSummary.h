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
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateRenewalSummary() = default;
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateRenewalSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateRenewalSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the validation of each domain name in the certificate, as
     * it pertains to Certificate Manager managed renewal. Provided only when the
     * certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline const Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>& GetDomainValidationOptions() const { return m_domainValidationOptions; }
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }
    template<typename DomainValidationOptionsT = Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>>
    void SetDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::forward<DomainValidationOptionsT>(value); }
    template<typename DomainValidationOptionsT = Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>>
    AwsCertificateManagerCertificateRenewalSummary& WithDomainValidationOptions(DomainValidationOptionsT&& value) { SetDomainValidationOptions(std::forward<DomainValidationOptionsT>(value)); return *this;}
    template<typename DomainValidationOptionsT = AwsCertificateManagerCertificateDomainValidationOption>
    AwsCertificateManagerCertificateRenewalSummary& AddDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.emplace_back(std::forward<DomainValidationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the Certificate Manager managed renewal of the certificate.</p>
     * <p>Valid values: <code>PENDING_AUTO_RENEWAL</code> |
     * <code>PENDING_VALIDATION</code> | <code>SUCCESS</code> | <code>FAILED</code>
     * </p>
     */
    inline const Aws::String& GetRenewalStatus() const { return m_renewalStatus; }
    inline bool RenewalStatusHasBeenSet() const { return m_renewalStatusHasBeenSet; }
    template<typename RenewalStatusT = Aws::String>
    void SetRenewalStatus(RenewalStatusT&& value) { m_renewalStatusHasBeenSet = true; m_renewalStatus = std::forward<RenewalStatusT>(value); }
    template<typename RenewalStatusT = Aws::String>
    AwsCertificateManagerCertificateRenewalSummary& WithRenewalStatus(RenewalStatusT&& value) { SetRenewalStatus(std::forward<RenewalStatusT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetRenewalStatusReason() const { return m_renewalStatusReason; }
    inline bool RenewalStatusReasonHasBeenSet() const { return m_renewalStatusReasonHasBeenSet; }
    template<typename RenewalStatusReasonT = Aws::String>
    void SetRenewalStatusReason(RenewalStatusReasonT&& value) { m_renewalStatusReasonHasBeenSet = true; m_renewalStatusReason = std::forward<RenewalStatusReasonT>(value); }
    template<typename RenewalStatusReasonT = Aws::String>
    AwsCertificateManagerCertificateRenewalSummary& WithRenewalStatusReason(RenewalStatusReasonT&& value) { SetRenewalStatusReason(std::forward<RenewalStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the renewal summary was last updated.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::String>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::String>
    AwsCertificateManagerCertificateRenewalSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
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
