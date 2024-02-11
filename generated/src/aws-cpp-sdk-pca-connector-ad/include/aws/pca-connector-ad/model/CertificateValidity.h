/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ValidityPeriod.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Information describing the end of the validity period of the certificate.
   * This parameter sets the “Not After” date for the certificate. Certificate
   * validity is the period of time during which a certificate is valid. Validity can
   * be expressed as an explicit date and time when the certificate expires, or as a
   * span of time after issuance, stated in days, months, or years. For more
   * information, see Validity in RFC 5280. This value is unaffected when
   * ValidityNotBefore is also specified. For example, if Validity is set to 20 days
   * in the future, the certificate will expire 20 days from issuance time regardless
   * of the ValidityNotBefore value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/CertificateValidity">AWS
   * API Reference</a></p>
   */
  class CertificateValidity
  {
  public:
    AWS_PCACONNECTORAD_API CertificateValidity();
    AWS_PCACONNECTORAD_API CertificateValidity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API CertificateValidity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Renewal period is the period of time before certificate expiration when a new
     * certificate will be requested.</p>
     */
    inline const ValidityPeriod& GetRenewalPeriod() const{ return m_renewalPeriod; }

    /**
     * <p>Renewal period is the period of time before certificate expiration when a new
     * certificate will be requested.</p>
     */
    inline bool RenewalPeriodHasBeenSet() const { return m_renewalPeriodHasBeenSet; }

    /**
     * <p>Renewal period is the period of time before certificate expiration when a new
     * certificate will be requested.</p>
     */
    inline void SetRenewalPeriod(const ValidityPeriod& value) { m_renewalPeriodHasBeenSet = true; m_renewalPeriod = value; }

    /**
     * <p>Renewal period is the period of time before certificate expiration when a new
     * certificate will be requested.</p>
     */
    inline void SetRenewalPeriod(ValidityPeriod&& value) { m_renewalPeriodHasBeenSet = true; m_renewalPeriod = std::move(value); }

    /**
     * <p>Renewal period is the period of time before certificate expiration when a new
     * certificate will be requested.</p>
     */
    inline CertificateValidity& WithRenewalPeriod(const ValidityPeriod& value) { SetRenewalPeriod(value); return *this;}

    /**
     * <p>Renewal period is the period of time before certificate expiration when a new
     * certificate will be requested.</p>
     */
    inline CertificateValidity& WithRenewalPeriod(ValidityPeriod&& value) { SetRenewalPeriod(std::move(value)); return *this;}


    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate. Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see Validity in RFC 5280. This value is unaffected when
     * ValidityNotBefore is also specified. For example, if Validity is set to 20 days
     * in the future, the certificate will expire 20 days from issuance time regardless
     * of the ValidityNotBefore value.</p>
     */
    inline const ValidityPeriod& GetValidityPeriod() const{ return m_validityPeriod; }

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate. Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see Validity in RFC 5280. This value is unaffected when
     * ValidityNotBefore is also specified. For example, if Validity is set to 20 days
     * in the future, the certificate will expire 20 days from issuance time regardless
     * of the ValidityNotBefore value.</p>
     */
    inline bool ValidityPeriodHasBeenSet() const { return m_validityPeriodHasBeenSet; }

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate. Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see Validity in RFC 5280. This value is unaffected when
     * ValidityNotBefore is also specified. For example, if Validity is set to 20 days
     * in the future, the certificate will expire 20 days from issuance time regardless
     * of the ValidityNotBefore value.</p>
     */
    inline void SetValidityPeriod(const ValidityPeriod& value) { m_validityPeriodHasBeenSet = true; m_validityPeriod = value; }

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate. Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see Validity in RFC 5280. This value is unaffected when
     * ValidityNotBefore is also specified. For example, if Validity is set to 20 days
     * in the future, the certificate will expire 20 days from issuance time regardless
     * of the ValidityNotBefore value.</p>
     */
    inline void SetValidityPeriod(ValidityPeriod&& value) { m_validityPeriodHasBeenSet = true; m_validityPeriod = std::move(value); }

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate. Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see Validity in RFC 5280. This value is unaffected when
     * ValidityNotBefore is also specified. For example, if Validity is set to 20 days
     * in the future, the certificate will expire 20 days from issuance time regardless
     * of the ValidityNotBefore value.</p>
     */
    inline CertificateValidity& WithValidityPeriod(const ValidityPeriod& value) { SetValidityPeriod(value); return *this;}

    /**
     * <p>Information describing the end of the validity period of the certificate.
     * This parameter sets the “Not After” date for the certificate. Certificate
     * validity is the period of time during which a certificate is valid. Validity can
     * be expressed as an explicit date and time when the certificate expires, or as a
     * span of time after issuance, stated in days, months, or years. For more
     * information, see Validity in RFC 5280. This value is unaffected when
     * ValidityNotBefore is also specified. For example, if Validity is set to 20 days
     * in the future, the certificate will expire 20 days from issuance time regardless
     * of the ValidityNotBefore value.</p>
     */
    inline CertificateValidity& WithValidityPeriod(ValidityPeriod&& value) { SetValidityPeriod(std::move(value)); return *this;}

  private:

    ValidityPeriod m_renewalPeriod;
    bool m_renewalPeriodHasBeenSet = false;

    ValidityPeriod m_validityPeriod;
    bool m_validityPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
