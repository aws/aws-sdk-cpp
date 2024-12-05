/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/RevenueModel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/MonetaryValue.h>
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
    AWS_PARTNERCENTRALSELLING_API SoftwareRevenue();
    AWS_PARTNERCENTRALSELLING_API SoftwareRevenue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API SoftwareRevenue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the customer's intended payment type agreement or procurement
     * method to acquire the solution or service outlined in the
     * <code>Opportunity</code>.</p>
     */
    inline const RevenueModel& GetDeliveryModel() const{ return m_deliveryModel; }
    inline bool DeliveryModelHasBeenSet() const { return m_deliveryModelHasBeenSet; }
    inline void SetDeliveryModel(const RevenueModel& value) { m_deliveryModelHasBeenSet = true; m_deliveryModel = value; }
    inline void SetDeliveryModel(RevenueModel&& value) { m_deliveryModelHasBeenSet = true; m_deliveryModel = std::move(value); }
    inline SoftwareRevenue& WithDeliveryModel(const RevenueModel& value) { SetDeliveryModel(value); return *this;}
    inline SoftwareRevenue& WithDeliveryModel(RevenueModel&& value) { SetDeliveryModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>Opportunity</code>'s customer engagement start date for
     * the contract's effectiveness.</p>
     */
    inline const Aws::String& GetEffectiveDate() const{ return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    inline void SetEffectiveDate(const Aws::String& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = value; }
    inline void SetEffectiveDate(Aws::String&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::move(value); }
    inline void SetEffectiveDate(const char* value) { m_effectiveDateHasBeenSet = true; m_effectiveDate.assign(value); }
    inline SoftwareRevenue& WithEffectiveDate(const Aws::String& value) { SetEffectiveDate(value); return *this;}
    inline SoftwareRevenue& WithEffectiveDate(Aws::String&& value) { SetEffectiveDate(std::move(value)); return *this;}
    inline SoftwareRevenue& WithEffectiveDate(const char* value) { SetEffectiveDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the expiration date for the contract between the customer and
     * Amazon Web Services partner. It signifies the termination date of the
     * agreed-upon engagement period between both parties.</p>
     */
    inline const Aws::String& GetExpirationDate() const{ return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    inline void SetExpirationDate(const Aws::String& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }
    inline void SetExpirationDate(Aws::String&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }
    inline void SetExpirationDate(const char* value) { m_expirationDateHasBeenSet = true; m_expirationDate.assign(value); }
    inline SoftwareRevenue& WithExpirationDate(const Aws::String& value) { SetExpirationDate(value); return *this;}
    inline SoftwareRevenue& WithExpirationDate(Aws::String&& value) { SetExpirationDate(std::move(value)); return *this;}
    inline SoftwareRevenue& WithExpirationDate(const char* value) { SetExpirationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the payment value (amount and currency).</p>
     */
    inline const MonetaryValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const MonetaryValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(MonetaryValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline SoftwareRevenue& WithValue(const MonetaryValue& value) { SetValue(value); return *this;}
    inline SoftwareRevenue& WithValue(MonetaryValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    RevenueModel m_deliveryModel;
    bool m_deliveryModelHasBeenSet = false;

    Aws::String m_effectiveDate;
    bool m_effectiveDateHasBeenSet = false;

    Aws::String m_expirationDate;
    bool m_expirationDateHasBeenSet = false;

    MonetaryValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
