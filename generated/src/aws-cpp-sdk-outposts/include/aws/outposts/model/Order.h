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
    AWS_OUTPOSTS_API Order() = default;
    AWS_OUTPOSTS_API Order(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Order& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Outpost in the order. </p>
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    Order& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the order.</p>
     */
    inline const Aws::String& GetOrderId() const { return m_orderId; }
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }
    template<typename OrderIdT = Aws::String>
    void SetOrderId(OrderIdT&& value) { m_orderIdHasBeenSet = true; m_orderId = std::forward<OrderIdT>(value); }
    template<typename OrderIdT = Aws::String>
    Order& WithOrderId(OrderIdT&& value) { SetOrderId(std::forward<OrderIdT>(value)); return *this;}
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
    inline OrderStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OrderStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Order& WithStatus(OrderStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line items for the order</p>
     */
    inline const Aws::Vector<LineItem>& GetLineItems() const { return m_lineItems; }
    inline bool LineItemsHasBeenSet() const { return m_lineItemsHasBeenSet; }
    template<typename LineItemsT = Aws::Vector<LineItem>>
    void SetLineItems(LineItemsT&& value) { m_lineItemsHasBeenSet = true; m_lineItems = std::forward<LineItemsT>(value); }
    template<typename LineItemsT = Aws::Vector<LineItem>>
    Order& WithLineItems(LineItemsT&& value) { SetLineItems(std::forward<LineItemsT>(value)); return *this;}
    template<typename LineItemsT = LineItem>
    Order& AddLineItems(LineItemsT&& value) { m_lineItemsHasBeenSet = true; m_lineItems.emplace_back(std::forward<LineItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payment option for the order.</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline Order& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The submission date for the order.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderSubmissionDate() const { return m_orderSubmissionDate; }
    inline bool OrderSubmissionDateHasBeenSet() const { return m_orderSubmissionDateHasBeenSet; }
    template<typename OrderSubmissionDateT = Aws::Utils::DateTime>
    void SetOrderSubmissionDate(OrderSubmissionDateT&& value) { m_orderSubmissionDateHasBeenSet = true; m_orderSubmissionDate = std::forward<OrderSubmissionDateT>(value); }
    template<typename OrderSubmissionDateT = Aws::Utils::DateTime>
    Order& WithOrderSubmissionDate(OrderSubmissionDateT&& value) { SetOrderSubmissionDate(std::forward<OrderSubmissionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fulfillment date of the order.</p>
     */
    inline const Aws::Utils::DateTime& GetOrderFulfilledDate() const { return m_orderFulfilledDate; }
    inline bool OrderFulfilledDateHasBeenSet() const { return m_orderFulfilledDateHasBeenSet; }
    template<typename OrderFulfilledDateT = Aws::Utils::DateTime>
    void SetOrderFulfilledDate(OrderFulfilledDateT&& value) { m_orderFulfilledDateHasBeenSet = true; m_orderFulfilledDate = std::forward<OrderFulfilledDateT>(value); }
    template<typename OrderFulfilledDateT = Aws::Utils::DateTime>
    Order& WithOrderFulfilledDate(OrderFulfilledDateT&& value) { SetOrderFulfilledDate(std::forward<OrderFulfilledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment term.</p>
     */
    inline PaymentTerm GetPaymentTerm() const { return m_paymentTerm; }
    inline bool PaymentTermHasBeenSet() const { return m_paymentTermHasBeenSet; }
    inline void SetPaymentTerm(PaymentTerm value) { m_paymentTermHasBeenSet = true; m_paymentTerm = value; }
    inline Order& WithPaymentTerm(PaymentTerm value) { SetPaymentTerm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of order.</p>
     */
    inline OrderType GetOrderType() const { return m_orderType; }
    inline bool OrderTypeHasBeenSet() const { return m_orderTypeHasBeenSet; }
    inline void SetOrderType(OrderType value) { m_orderTypeHasBeenSet = true; m_orderType = value; }
    inline Order& WithOrderType(OrderType value) { SetOrderType(value); return *this;}
    ///@}
  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;

    OrderStatus m_status{OrderStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<LineItem> m_lineItems;
    bool m_lineItemsHasBeenSet = false;

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    Aws::Utils::DateTime m_orderSubmissionDate{};
    bool m_orderSubmissionDateHasBeenSet = false;

    Aws::Utils::DateTime m_orderFulfilledDate{};
    bool m_orderFulfilledDateHasBeenSet = false;

    PaymentTerm m_paymentTerm{PaymentTerm::NOT_SET};
    bool m_paymentTermHasBeenSet = false;

    OrderType m_orderType{OrderType::NOT_SET};
    bool m_orderTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
