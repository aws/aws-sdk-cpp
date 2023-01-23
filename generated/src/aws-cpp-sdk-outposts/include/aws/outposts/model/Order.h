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


    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline Order& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline Order& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline Order& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    /**
     * <p>The ID of the order.</p>
     */
    inline const Aws::String& GetOrderId() const{ return m_orderId; }

    /**
     * <p>The ID of the order.</p>
     */
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }

    /**
     * <p>The ID of the order.</p>
     */
    inline void SetOrderId(const Aws::String& value) { m_orderIdHasBeenSet = true; m_orderId = value; }

    /**
     * <p>The ID of the order.</p>
     */
    inline void SetOrderId(Aws::String&& value) { m_orderIdHasBeenSet = true; m_orderId = std::move(value); }

    /**
     * <p>The ID of the order.</p>
     */
    inline void SetOrderId(const char* value) { m_orderIdHasBeenSet = true; m_orderId.assign(value); }

    /**
     * <p>The ID of the order.</p>
     */
    inline Order& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}

    /**
     * <p>The ID of the order.</p>
     */
    inline Order& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the order.</p>
     */
    inline Order& WithOrderId(const char* value) { SetOrderId(value); return *this;}


    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Order
     * is either being built, shipped, or installed. To get more details, see the line
     * item status.</p> </li> <li> <p> <code>COMPLETED</code> - Order is complete.</p>
     * </li> <li> <p> <code>CANCELLED</code> - Order is cancelled.</p> </li> <li> <p>
     * <code>ERROR</code> - Customer should contact support.</p> </li> </ul> 
     * <p>The following status are deprecated: <code>RECEIVED</code>,
     * <code>PENDING</code>, <code>PROCESSING</code>, <code>INSTALLING</code>, and
     * <code>FULFILLED</code>. </p> 
     */
    inline const OrderStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Order
     * is either being built, shipped, or installed. To get more details, see the line
     * item status.</p> </li> <li> <p> <code>COMPLETED</code> - Order is complete.</p>
     * </li> <li> <p> <code>CANCELLED</code> - Order is cancelled.</p> </li> <li> <p>
     * <code>ERROR</code> - Customer should contact support.</p> </li> </ul> 
     * <p>The following status are deprecated: <code>RECEIVED</code>,
     * <code>PENDING</code>, <code>PROCESSING</code>, <code>INSTALLING</code>, and
     * <code>FULFILLED</code>. </p> 
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Order
     * is either being built, shipped, or installed. To get more details, see the line
     * item status.</p> </li> <li> <p> <code>COMPLETED</code> - Order is complete.</p>
     * </li> <li> <p> <code>CANCELLED</code> - Order is cancelled.</p> </li> <li> <p>
     * <code>ERROR</code> - Customer should contact support.</p> </li> </ul> 
     * <p>The following status are deprecated: <code>RECEIVED</code>,
     * <code>PENDING</code>, <code>PROCESSING</code>, <code>INSTALLING</code>, and
     * <code>FULFILLED</code>. </p> 
     */
    inline void SetStatus(const OrderStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Order
     * is either being built, shipped, or installed. To get more details, see the line
     * item status.</p> </li> <li> <p> <code>COMPLETED</code> - Order is complete.</p>
     * </li> <li> <p> <code>CANCELLED</code> - Order is cancelled.</p> </li> <li> <p>
     * <code>ERROR</code> - Customer should contact support.</p> </li> </ul> 
     * <p>The following status are deprecated: <code>RECEIVED</code>,
     * <code>PENDING</code>, <code>PROCESSING</code>, <code>INSTALLING</code>, and
     * <code>FULFILLED</code>. </p> 
     */
    inline void SetStatus(OrderStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Order
     * is either being built, shipped, or installed. To get more details, see the line
     * item status.</p> </li> <li> <p> <code>COMPLETED</code> - Order is complete.</p>
     * </li> <li> <p> <code>CANCELLED</code> - Order is cancelled.</p> </li> <li> <p>
     * <code>ERROR</code> - Customer should contact support.</p> </li> </ul> 
     * <p>The following status are deprecated: <code>RECEIVED</code>,
     * <code>PENDING</code>, <code>PROCESSING</code>, <code>INSTALLING</code>, and
     * <code>FULFILLED</code>. </p> 
     */
    inline Order& WithStatus(const OrderStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Order
     * is either being built, shipped, or installed. To get more details, see the line
     * item status.</p> </li> <li> <p> <code>COMPLETED</code> - Order is complete.</p>
     * </li> <li> <p> <code>CANCELLED</code> - Order is cancelled.</p> </li> <li> <p>
     * <code>ERROR</code> - Customer should contact support.</p> </li> </ul> 
     * <p>The following status are deprecated: <code>RECEIVED</code>,
     * <code>PENDING</code>, <code>PROCESSING</code>, <code>INSTALLING</code>, and
     * <code>FULFILLED</code>. </p> 
     */
    inline Order& WithStatus(OrderStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The line items for the order</p>
     */
    inline const Aws::Vector<LineItem>& GetLineItems() const{ return m_lineItems; }

    /**
     * <p>The line items for the order</p>
     */
    inline bool LineItemsHasBeenSet() const { return m_lineItemsHasBeenSet; }

    /**
     * <p>The line items for the order</p>
     */
    inline void SetLineItems(const Aws::Vector<LineItem>& value) { m_lineItemsHasBeenSet = true; m_lineItems = value; }

    /**
     * <p>The line items for the order</p>
     */
    inline void SetLineItems(Aws::Vector<LineItem>&& value) { m_lineItemsHasBeenSet = true; m_lineItems = std::move(value); }

    /**
     * <p>The line items for the order</p>
     */
    inline Order& WithLineItems(const Aws::Vector<LineItem>& value) { SetLineItems(value); return *this;}

    /**
     * <p>The line items for the order</p>
     */
    inline Order& WithLineItems(Aws::Vector<LineItem>&& value) { SetLineItems(std::move(value)); return *this;}

    /**
     * <p>The line items for the order</p>
     */
    inline Order& AddLineItems(const LineItem& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(value); return *this; }

    /**
     * <p>The line items for the order</p>
     */
    inline Order& AddLineItems(LineItem&& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The payment option for the order.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option for the order.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option for the order.</p>
     */
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option for the order.</p>
     */
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option for the order.</p>
     */
    inline Order& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option for the order.</p>
     */
    inline Order& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The submission date for the order.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderSubmissionDate() const{ return m_orderSubmissionDate; }

    /**
     * <p>The submission date for the order.</p>
     */
    inline bool OrderSubmissionDateHasBeenSet() const { return m_orderSubmissionDateHasBeenSet; }

    /**
     * <p>The submission date for the order.</p>
     */
    inline void SetOrderSubmissionDate(const Aws::Utils::DateTime& value) { m_orderSubmissionDateHasBeenSet = true; m_orderSubmissionDate = value; }

    /**
     * <p>The submission date for the order.</p>
     */
    inline void SetOrderSubmissionDate(Aws::Utils::DateTime&& value) { m_orderSubmissionDateHasBeenSet = true; m_orderSubmissionDate = std::move(value); }

    /**
     * <p>The submission date for the order.</p>
     */
    inline Order& WithOrderSubmissionDate(const Aws::Utils::DateTime& value) { SetOrderSubmissionDate(value); return *this;}

    /**
     * <p>The submission date for the order.</p>
     */
    inline Order& WithOrderSubmissionDate(Aws::Utils::DateTime&& value) { SetOrderSubmissionDate(std::move(value)); return *this;}


    /**
     * <p>The fulfillment date of the order.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderFulfilledDate() const{ return m_orderFulfilledDate; }

    /**
     * <p>The fulfillment date of the order.</p>
     */
    inline bool OrderFulfilledDateHasBeenSet() const { return m_orderFulfilledDateHasBeenSet; }

    /**
     * <p>The fulfillment date of the order.</p>
     */
    inline void SetOrderFulfilledDate(const Aws::Utils::DateTime& value) { m_orderFulfilledDateHasBeenSet = true; m_orderFulfilledDate = value; }

    /**
     * <p>The fulfillment date of the order.</p>
     */
    inline void SetOrderFulfilledDate(Aws::Utils::DateTime&& value) { m_orderFulfilledDateHasBeenSet = true; m_orderFulfilledDate = std::move(value); }

    /**
     * <p>The fulfillment date of the order.</p>
     */
    inline Order& WithOrderFulfilledDate(const Aws::Utils::DateTime& value) { SetOrderFulfilledDate(value); return *this;}

    /**
     * <p>The fulfillment date of the order.</p>
     */
    inline Order& WithOrderFulfilledDate(Aws::Utils::DateTime&& value) { SetOrderFulfilledDate(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
