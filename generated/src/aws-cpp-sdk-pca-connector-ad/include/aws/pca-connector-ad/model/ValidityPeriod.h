/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ValidityPeriodType.h>
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
   * span of time after issuance, stated in hours, days, months, or years. For more
   * information, see Validity in RFC 5280. This value is unaffected when
   * ValidityNotBefore is also specified. For example, if Validity is set to 20 days
   * in the future, the certificate will expire 20 days from issuance time regardless
   * of the ValidityNotBefore value. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ValidityPeriod">AWS
   * API Reference</a></p>
   */
  class ValidityPeriod
  {
  public:
    AWS_PCACONNECTORAD_API ValidityPeriod();
    AWS_PCACONNECTORAD_API ValidityPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API ValidityPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The numeric value for the validity period.</p>
     */
    inline long long GetPeriod() const{ return m_period; }

    /**
     * <p>The numeric value for the validity period.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The numeric value for the validity period.</p>
     */
    inline void SetPeriod(long long value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The numeric value for the validity period.</p>
     */
    inline ValidityPeriod& WithPeriod(long long value) { SetPeriod(value); return *this;}


    /**
     * <p>The unit of time. You can select hours, days, weeks, months, and years.</p>
     */
    inline const ValidityPeriodType& GetPeriodType() const{ return m_periodType; }

    /**
     * <p>The unit of time. You can select hours, days, weeks, months, and years.</p>
     */
    inline bool PeriodTypeHasBeenSet() const { return m_periodTypeHasBeenSet; }

    /**
     * <p>The unit of time. You can select hours, days, weeks, months, and years.</p>
     */
    inline void SetPeriodType(const ValidityPeriodType& value) { m_periodTypeHasBeenSet = true; m_periodType = value; }

    /**
     * <p>The unit of time. You can select hours, days, weeks, months, and years.</p>
     */
    inline void SetPeriodType(ValidityPeriodType&& value) { m_periodTypeHasBeenSet = true; m_periodType = std::move(value); }

    /**
     * <p>The unit of time. You can select hours, days, weeks, months, and years.</p>
     */
    inline ValidityPeriod& WithPeriodType(const ValidityPeriodType& value) { SetPeriodType(value); return *this;}

    /**
     * <p>The unit of time. You can select hours, days, weeks, months, and years.</p>
     */
    inline ValidityPeriod& WithPeriodType(ValidityPeriodType&& value) { SetPeriodType(std::move(value)); return *this;}

  private:

    long long m_period;
    bool m_periodHasBeenSet = false;

    ValidityPeriodType m_periodType;
    bool m_periodTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
