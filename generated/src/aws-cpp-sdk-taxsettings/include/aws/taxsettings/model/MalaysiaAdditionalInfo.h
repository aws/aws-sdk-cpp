/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
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
  private:

    Aws::Vector<MalaysiaServiceTaxCode> m_serviceTaxCodes;
    bool m_serviceTaxCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
