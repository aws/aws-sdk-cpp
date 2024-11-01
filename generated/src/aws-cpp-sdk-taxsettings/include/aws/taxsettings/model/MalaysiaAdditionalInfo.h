/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/taxsettings/model/MalaysiaServiceTaxCode.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p> Additional tax information associated with your TRN in
   * Malaysia.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/MalaysiaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class MalaysiaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API MalaysiaAdditionalInfo();
    AWS_TAXSETTINGS_API MalaysiaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API MalaysiaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tax registration number (TRN) in Malaysia. </p> <p>For individual, you
     * can specify the <code>taxInformationNumber</code> in
     * <code>MalaysiaAdditionalInfo</code> with NRIC type, and a valid MyKad or NRIC
     * number. For business, you must specify a <code>businessRegistrationNumber</code>
     * in <code>MalaysiaAdditionalInfo</code> with a TIN type and tax identification
     * number. For business resellers, you must specify a
     * <code>businessRegistrationNumber</code> and <code>taxInformationNumber</code> in
     * <code>MalaysiaAdditionalInfo</code> with a sales and service tax (SST) type and
     * a valid SST number. </p> <p>For business resellers with service codes, you must
     * specify <code>businessRegistrationNumber</code>,
     * <code>taxInformationNumber</code>, and distinct <code>serviceTaxCodes</code> in
     * <code>MalaysiaAdditionalInfo</code> with a SST type and valid sales and service
     * tax (SST) number. By using this API operation, Amazon Web Services registers
     * your self-declaration that you’re an authorized business reseller registered
     * with the Royal Malaysia Customs Department (RMCD), and have a valid SST
     * number.</p>
     */
    inline const Aws::String& GetBusinessRegistrationNumber() const{ return m_businessRegistrationNumber; }
    inline bool BusinessRegistrationNumberHasBeenSet() const { return m_businessRegistrationNumberHasBeenSet; }
    inline void SetBusinessRegistrationNumber(const Aws::String& value) { m_businessRegistrationNumberHasBeenSet = true; m_businessRegistrationNumber = value; }
    inline void SetBusinessRegistrationNumber(Aws::String&& value) { m_businessRegistrationNumberHasBeenSet = true; m_businessRegistrationNumber = std::move(value); }
    inline void SetBusinessRegistrationNumber(const char* value) { m_businessRegistrationNumberHasBeenSet = true; m_businessRegistrationNumber.assign(value); }
    inline MalaysiaAdditionalInfo& WithBusinessRegistrationNumber(const Aws::String& value) { SetBusinessRegistrationNumber(value); return *this;}
    inline MalaysiaAdditionalInfo& WithBusinessRegistrationNumber(Aws::String&& value) { SetBusinessRegistrationNumber(std::move(value)); return *this;}
    inline MalaysiaAdditionalInfo& WithBusinessRegistrationNumber(const char* value) { SetBusinessRegistrationNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of service tax codes for your TRN in Malaysia.</p>
     */
    inline const Aws::Vector<MalaysiaServiceTaxCode>& GetServiceTaxCodes() const{ return m_serviceTaxCodes; }
    inline bool ServiceTaxCodesHasBeenSet() const { return m_serviceTaxCodesHasBeenSet; }
    inline void SetServiceTaxCodes(const Aws::Vector<MalaysiaServiceTaxCode>& value) { m_serviceTaxCodesHasBeenSet = true; m_serviceTaxCodes = value; }
    inline void SetServiceTaxCodes(Aws::Vector<MalaysiaServiceTaxCode>&& value) { m_serviceTaxCodesHasBeenSet = true; m_serviceTaxCodes = std::move(value); }
    inline MalaysiaAdditionalInfo& WithServiceTaxCodes(const Aws::Vector<MalaysiaServiceTaxCode>& value) { SetServiceTaxCodes(value); return *this;}
    inline MalaysiaAdditionalInfo& WithServiceTaxCodes(Aws::Vector<MalaysiaServiceTaxCode>&& value) { SetServiceTaxCodes(std::move(value)); return *this;}
    inline MalaysiaAdditionalInfo& AddServiceTaxCodes(const MalaysiaServiceTaxCode& value) { m_serviceTaxCodesHasBeenSet = true; m_serviceTaxCodes.push_back(value); return *this; }
    inline MalaysiaAdditionalInfo& AddServiceTaxCodes(MalaysiaServiceTaxCode&& value) { m_serviceTaxCodesHasBeenSet = true; m_serviceTaxCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tax information number in Malaysia. </p> <p>For individual, you can
     * specify the <code>taxInformationNumber</code> in
     * <code>MalaysiaAdditionalInfo</code> with NRIC type, and a valid MyKad or NRIC
     * number. For business resellers, you must specify a
     * <code>businessRegistrationNumber</code> and <code>taxInformationNumber</code> in
     * <code>MalaysiaAdditionalInfo</code> with a sales and service tax (SST) type and
     * a valid SST number. </p> <p>For business resellers with service codes, you must
     * specify <code>businessRegistrationNumber</code>,
     * <code>taxInformationNumber</code>, and distinct <code>serviceTaxCodes</code> in
     * <code>MalaysiaAdditionalInfo</code> with a SST type and valid sales and service
     * tax (SST) number. By using this API operation, Amazon Web Services registers
     * your self-declaration that you’re an authorized business reseller registered
     * with the Royal Malaysia Customs Department (RMCD), and have a valid SST
     * number.</p>
     */
    inline const Aws::String& GetTaxInformationNumber() const{ return m_taxInformationNumber; }
    inline bool TaxInformationNumberHasBeenSet() const { return m_taxInformationNumberHasBeenSet; }
    inline void SetTaxInformationNumber(const Aws::String& value) { m_taxInformationNumberHasBeenSet = true; m_taxInformationNumber = value; }
    inline void SetTaxInformationNumber(Aws::String&& value) { m_taxInformationNumberHasBeenSet = true; m_taxInformationNumber = std::move(value); }
    inline void SetTaxInformationNumber(const char* value) { m_taxInformationNumberHasBeenSet = true; m_taxInformationNumber.assign(value); }
    inline MalaysiaAdditionalInfo& WithTaxInformationNumber(const Aws::String& value) { SetTaxInformationNumber(value); return *this;}
    inline MalaysiaAdditionalInfo& WithTaxInformationNumber(Aws::String&& value) { SetTaxInformationNumber(std::move(value)); return *this;}
    inline MalaysiaAdditionalInfo& WithTaxInformationNumber(const char* value) { SetTaxInformationNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_businessRegistrationNumber;
    bool m_businessRegistrationNumberHasBeenSet = false;

    Aws::Vector<MalaysiaServiceTaxCode> m_serviceTaxCodes;
    bool m_serviceTaxCodesHasBeenSet = false;

    Aws::String m_taxInformationNumber;
    bool m_taxInformationNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
