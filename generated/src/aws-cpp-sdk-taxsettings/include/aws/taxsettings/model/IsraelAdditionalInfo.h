/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/IsraelCustomerType.h>
#include <aws/taxsettings/model/IsraelDealerType.h>
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
   * <p> Additional tax information associated with your TRN in Israel.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/IsraelAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class IsraelAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API IsraelAdditionalInfo() = default;
    AWS_TAXSETTINGS_API IsraelAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API IsraelAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Customer type for your TRN in Israel. The value can be <code>Business</code>
     * or <code>Individual</code>. Use <code>Business</code>for entities such as
     * not-for-profit and financial institutions.</p>
     */
    inline IsraelCustomerType GetCustomerType() const { return m_customerType; }
    inline bool CustomerTypeHasBeenSet() const { return m_customerTypeHasBeenSet; }
    inline void SetCustomerType(IsraelCustomerType value) { m_customerTypeHasBeenSet = true; m_customerType = value; }
    inline IsraelAdditionalInfo& WithCustomerType(IsraelCustomerType value) { SetCustomerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Dealer type for your TRN in Israel. If you're not a local authorized dealer
     * with an Israeli VAT ID, specify your tax identification number so that Amazon
     * Web Services can send you a compliant tax invoice.</p>
     */
    inline IsraelDealerType GetDealerType() const { return m_dealerType; }
    inline bool DealerTypeHasBeenSet() const { return m_dealerTypeHasBeenSet; }
    inline void SetDealerType(IsraelDealerType value) { m_dealerTypeHasBeenSet = true; m_dealerType = value; }
    inline IsraelAdditionalInfo& WithDealerType(IsraelDealerType value) { SetDealerType(value); return *this;}
    ///@}
  private:

    IsraelCustomerType m_customerType{IsraelCustomerType::NOT_SET};
    bool m_customerTypeHasBeenSet = false;

    IsraelDealerType m_dealerType{IsraelDealerType::NOT_SET};
    bool m_dealerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
