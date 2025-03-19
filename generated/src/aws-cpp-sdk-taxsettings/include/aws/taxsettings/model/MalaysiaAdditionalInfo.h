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
    AWS_TAXSETTINGS_API MalaysiaAdditionalInfo() = default;
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
    inline const Aws::String& GetBusinessRegistrationNumber() const { return m_businessRegistrationNumber; }
    inline bool BusinessRegistrationNumberHasBeenSet() const { return m_businessRegistrationNumberHasBeenSet; }
    template<typename BusinessRegistrationNumberT = Aws::String>
    void SetBusinessRegistrationNumber(BusinessRegistrationNumberT&& value) { m_businessRegistrationNumberHasBeenSet = true; m_businessRegistrationNumber = std::forward<BusinessRegistrationNumberT>(value); }
    template<typename BusinessRegistrationNumberT = Aws::String>
    MalaysiaAdditionalInfo& WithBusinessRegistrationNumber(BusinessRegistrationNumberT&& value) { SetBusinessRegistrationNumber(std::forward<BusinessRegistrationNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of service tax codes for your TRN in Malaysia.</p>
     */
    inline const Aws::Vector<MalaysiaServiceTaxCode>& GetServiceTaxCodes() const { return m_serviceTaxCodes; }
    inline bool ServiceTaxCodesHasBeenSet() const { return m_serviceTaxCodesHasBeenSet; }
    template<typename ServiceTaxCodesT = Aws::Vector<MalaysiaServiceTaxCode>>
    void SetServiceTaxCodes(ServiceTaxCodesT&& value) { m_serviceTaxCodesHasBeenSet = true; m_serviceTaxCodes = std::forward<ServiceTaxCodesT>(value); }
    template<typename ServiceTaxCodesT = Aws::Vector<MalaysiaServiceTaxCode>>
    MalaysiaAdditionalInfo& WithServiceTaxCodes(ServiceTaxCodesT&& value) { SetServiceTaxCodes(std::forward<ServiceTaxCodesT>(value)); return *this;}
    inline MalaysiaAdditionalInfo& AddServiceTaxCodes(MalaysiaServiceTaxCode value) { m_serviceTaxCodesHasBeenSet = true; m_serviceTaxCodes.push_back(value); return *this; }
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
    inline const Aws::String& GetTaxInformationNumber() const { return m_taxInformationNumber; }
    inline bool TaxInformationNumberHasBeenSet() const { return m_taxInformationNumberHasBeenSet; }
    template<typename TaxInformationNumberT = Aws::String>
    void SetTaxInformationNumber(TaxInformationNumberT&& value) { m_taxInformationNumberHasBeenSet = true; m_taxInformationNumber = std::forward<TaxInformationNumberT>(value); }
    template<typename TaxInformationNumberT = Aws::String>
    MalaysiaAdditionalInfo& WithTaxInformationNumber(TaxInformationNumberT&& value) { SetTaxInformationNumber(std::forward<TaxInformationNumberT>(value)); return *this;}
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
