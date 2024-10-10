/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/OrderStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/PaymentOption.h>
#include <aws/core/utils/DateTime.h>
#include <aws/outposts/model/PaymentTerm.h>
#include <aws/outposts/model/OrderType.h>
#include <aws/outposts/model/LineItem.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>Information about an order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/Order">AWS API
   * Reference</a></p>
   */
  class Order
  {
  public:
    AWS_OUTPOSTS_API Order();
    AWS_OUTPOSTS_API Order(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Order& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }
    inline Order& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}
    inline Order& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}
    inline Order& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the order.</p>
     */
    inline const Aws::String& GetOrderId() const{ return m_orderId; }
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }
    inline void SetOrderId(const Aws::String& value) { m_orderIdHasBeenSet = true; m_orderId = value; }
    inline void SetOrderId(Aws::String&& value) { m_orderIdHasBeenSet = true; m_orderId = std::move(value); }
    inline void SetOrderId(const char* value) { m_orderIdHasBeenSet = true; m_orderId.assign(value); }
    inline Order& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}
    inline Order& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}
    inline Order& WithOrderId(const char* value) { SetOrderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Order
     * is either being built or shipped. To get more details, see the line item
     * status.</p> </li> <li> <p> <code>DELIVERED</code> - Order was delivered to the
     * Outpost site.</p> </li> <li> <p> <code>COMPLETED</code> - Order is complete.</p>
     * </li> <li> <p> <code>CANCELLED</code> - Order is cancelled.</p> </li> <li> <p>
     * <code>ERROR</code> - Customer should contact support.</p> </li> </ul> 
     * <p>The following status are deprecated: <code>RECEIVED</code>,
     * <code>PENDING</code>, <code>PROCESSING</code>, <code>INSTALLING</code>, and
     * <code>FULFILLED</code>. </p> 
     */
    inline const OrderStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const OrderStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(OrderStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Order& WithStatus(const OrderStatus& value) { SetStatus(value); return *this;}
    inline Order& WithStatus(OrderStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line items for the order</p>
     */
    inline const Aws::Vector<LineItem>& GetLineItems() const{ return m_lineItems; }
    inline bool LineItemsHasBeenSet() const { return m_lineItemsHasBeenSet; }
    inline void SetLineItems(const Aws::Vector<LineItem>& value) { m_lineItemsHasBeenSet = true; m_lineItems = value; }
    inline void SetLineItems(Aws::Vector<LineItem>&& value) { m_lineItemsHasBeenSet = true; m_lineItems = std::move(value); }
    inline Order& WithLineItems(const Aws::Vector<LineItem>& value) { SetLineItems(value); return *this;}
    inline Order& WithLineItems(Aws::Vector<LineItem>&& value) { SetLineItems(std::move(value)); return *this;}
    inline Order& AddLineItems(const LineItem& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(value); return *this; }
    inline Order& AddLineItems(LineItem&& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payment option for the order.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline Order& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}
    inline Order& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The submission date for the order.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderSubmissionDate() const{ return m_orderSubmissionDate; }
    inline bool OrderSubmissionDateHasBeenSet() const { return m_orderSubmissionDateHasBeenSet; }
    inline void SetOrderSubmissionDate(const Aws::Utils::DateTime& value) { m_orderSubmissionDateHasBeenSet = true; m_orderSubmissionDate = value; }
    inline void SetOrderSubmissionDate(Aws::Utils::DateTime&& value) { m_orderSubmissionDateHasBeenSet = true; m_orderSubmissionDate = std::move(value); }
    inline Order& WithOrderSubmissionDate(const Aws::Utils::DateTime& value) { SetOrderSubmissionDate(value); return *this;}
    inline Order& WithOrderSubmissionDate(Aws::Utils::DateTime&& value) { SetOrderSubmissionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fulfillment date of the order.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderFulfilledDate() const{ return m_orderFulfilledDate; }
    inline bool OrderFulfilledDateHasBeenSet() const { return m_orderFulfilledDateHasBeenSet; }
    inline void SetOrderFulfilledDate(const Aws::Utils::DateTime& value) { m_orderFulfilledDateHasBeenSet = true; m_orderFulfilledDate = value; }
    inline void SetOrderFulfilledDate(Aws::Utils::DateTime&& value) { m_orderFulfilledDateHasBeenSet = true; m_orderFulfilledDate = std::move(value); }
    inline Order& WithOrderFulfilledDate(const Aws::Utils::DateTime& value) { SetOrderFulfilledDate(value); return *this;}
    inline Order& WithOrderFulfilledDate(Aws::Utils::DateTime&& value) { SetOrderFulfilledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment term.</p>
     */
    inline const PaymentTerm& GetPaymentTerm() const{ return m_paymentTerm; }
    inline bool PaymentTermHasBeenSet() const { return m_paymentTermHasBeenSet; }
    inline void SetPaymentTerm(const PaymentTerm& value) { m_paymentTermHasBeenSet = true; m_paymentTerm = value; }
    inline void SetPaymentTerm(PaymentTerm&& value) { m_paymentTermHasBeenSet = true; m_paymentTerm = std::move(value); }
    inline Order& WithPaymentTerm(const PaymentTerm& value) { SetPaymentTerm(value); return *this;}
    inline Order& WithPaymentTerm(PaymentTerm&& value) { SetPaymentTerm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of order.</p>
     */
    inline const OrderType& GetOrderType() const{ return m_orderType; }
    inline bool OrderTypeHasBeenSet() const { return m_orderTypeHasBeenSet; }
    inline void SetOrderType(const OrderType& value) { m_orderTypeHasBeenSet = true; m_orderType = value; }
    inline void SetOrderType(OrderType&& value) { m_orderTypeHasBeenSet = true; m_orderType = std::move(value); }
    inline Order& WithOrderType(const OrderType& value) { SetOrderType(value); return *this;}
    inline Order& WithOrderType(OrderType&& value) { SetOrderType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;

    OrderStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<LineItem> m_lineItems;
    bool m_lineItemsHasBeenSet = false;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    Aws::Utils::DateTime m_orderSubmissionDate;
    bool m_orderSubmissionDateHasBeenSet = false;

    Aws::Utils::DateTime m_orderFulfilledDate;
    bool m_orderFulfilledDateHasBeenSet = false;

    PaymentTerm m_paymentTerm;
    bool m_paymentTermHasBeenSet = false;

    OrderType m_orderType;
    bool m_orderTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
