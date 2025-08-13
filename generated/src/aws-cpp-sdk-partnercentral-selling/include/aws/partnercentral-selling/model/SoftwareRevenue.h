/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/RevenueModel.h>
#include <aws/partnercentral-selling/model/MonetaryValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Specifies a customer's procurement terms details. Required only for partners
   * in eligible programs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SoftwareRevenue">AWS
   * API Reference</a></p>
   */
  class SoftwareRevenue
  {
  public:
    AWS_PARTNERCENTRALSELLING_API SoftwareRevenue() = default;
    AWS_PARTNERCENTRALSELLING_API SoftwareRevenue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API SoftwareRevenue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the customer's intended payment type agreement or procurement
     * method to acquire the solution or service outlined in the
     * <code>Opportunity</code>.</p>
     */
    inline RevenueModel GetDeliveryModel() const { return m_deliveryModel; }
    inline bool DeliveryModelHasBeenSet() const { return m_deliveryModelHasBeenSet; }
    inline void SetDeliveryModel(RevenueModel value) { m_deliveryModelHasBeenSet = true; m_deliveryModel = value; }
    inline SoftwareRevenue& WithDeliveryModel(RevenueModel value) { SetDeliveryModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the payment value (amount and currency).</p>
     */
    inline const MonetaryValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = MonetaryValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = MonetaryValue>
    SoftwareRevenue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code>'s customer engagement start date for
     * the contract's effectiveness.</p>
     */
    inline const Aws::String& GetEffectiveDate() const { return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    template<typename EffectiveDateT = Aws::String>
    void SetEffectiveDate(EffectiveDateT&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::forward<EffectiveDateT>(value); }
    template<typename EffectiveDateT = Aws::String>
    SoftwareRevenue& WithEffectiveDate(EffectiveDateT&& value) { SetEffectiveDate(std::forward<EffectiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the expiration date for the contract between the customer and
     * Amazon Web Services partner. It signifies the termination date of the
     * agreed-upon engagement period between both parties.</p>
     */
    inline const Aws::String& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::String>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::String>
    SoftwareRevenue& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}
  private:

    RevenueModel m_deliveryModel{RevenueModel::NOT_SET};
    bool m_deliveryModelHasBeenSet = false;

    MonetaryValue m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_effectiveDate;
    bool m_effectiveDateHasBeenSet = false;

    Aws::String m_expirationDate;
    bool m_expirationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
