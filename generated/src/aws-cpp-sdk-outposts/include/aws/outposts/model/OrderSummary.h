/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/OrderType.h>
#include <aws/outposts/model/OrderStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/outposts/model/LineItemStatus.h>
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
   * <p> A summary of line items in your order. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/OrderSummary">AWS
   * API Reference</a></p>
   */
  class OrderSummary
  {
  public:
    AWS_OUTPOSTS_API OrderSummary() = default;
    AWS_OUTPOSTS_API OrderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API OrderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    OrderSummary& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the order. </p>
     */
    inline const Aws::String& GetOrderId() const { return m_orderId; }
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }
    template<typename OrderIdT = Aws::String>
    void SetOrderId(OrderIdT&& value) { m_orderIdHasBeenSet = true; m_orderId = std::forward<OrderIdT>(value); }
    template<typename OrderIdT = Aws::String>
    OrderSummary& WithOrderId(OrderIdT&& value) { SetOrderId(std::forward<OrderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of order.</p>
     */
    inline OrderType GetOrderType() const { return m_orderType; }
    inline bool OrderTypeHasBeenSet() const { return m_orderTypeHasBeenSet; }
    inline void SetOrderType(OrderType value) { m_orderTypeHasBeenSet = true; m_orderType = value; }
    inline OrderSummary& WithOrderType(OrderType value) { SetOrderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the order.</p> <ul> <li> <p> <code>PREPARING</code> - Order is
     * received and is being prepared.</p> </li> <li> <p> <code>IN_PROGRESS</code> -
     * Order is either being built, shipped, or installed. For more information, see
     * the <code>LineItem</code> status.</p> </li> <li> <p> <code>COMPLETED</code> -
     * Order is complete.</p> </li> <li> <p> <code>CANCELLED</code> - Order is
     * cancelled.</p> </li> <li> <p> <code>ERROR</code> - Customer should contact
     * support.</p> </li> </ul>  <p>The following statuses are deprecated:
     * <code>RECEIVED</code>, <code>PENDING</code>, <code>PROCESSING</code>,
     * <code>INSTALLING</code>, and <code>FULFILLED</code>. </p> 
     */
    inline OrderStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OrderStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OrderSummary& WithStatus(OrderStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of all line items in the order. </p>
     */
    inline const Aws::Map<LineItemStatus, int>& GetLineItemCountsByStatus() const { return m_lineItemCountsByStatus; }
    inline bool LineItemCountsByStatusHasBeenSet() const { return m_lineItemCountsByStatusHasBeenSet; }
    template<typename LineItemCountsByStatusT = Aws::Map<LineItemStatus, int>>
    void SetLineItemCountsByStatus(LineItemCountsByStatusT&& value) { m_lineItemCountsByStatusHasBeenSet = true; m_lineItemCountsByStatus = std::forward<LineItemCountsByStatusT>(value); }
    template<typename LineItemCountsByStatusT = Aws::Map<LineItemStatus, int>>
    OrderSummary& WithLineItemCountsByStatus(LineItemCountsByStatusT&& value) { SetLineItemCountsByStatus(std::forward<LineItemCountsByStatusT>(value)); return *this;}
    inline OrderSummary& AddLineItemCountsByStatus(LineItemStatus key, int value) {
      m_lineItemCountsByStatusHasBeenSet = true; m_lineItemCountsByStatus.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The submission date for the order. </p>
     */
    inline const Aws::Utils::DateTime& GetOrderSubmissionDate() const { return m_orderSubmissionDate; }
    inline bool OrderSubmissionDateHasBeenSet() const { return m_orderSubmissionDateHasBeenSet; }
    template<typename OrderSubmissionDateT = Aws::Utils::DateTime>
    void SetOrderSubmissionDate(OrderSubmissionDateT&& value) { m_orderSubmissionDateHasBeenSet = true; m_orderSubmissionDate = std::forward<OrderSubmissionDateT>(value); }
    template<typename OrderSubmissionDateT = Aws::Utils::DateTime>
    OrderSummary& WithOrderSubmissionDate(OrderSubmissionDateT&& value) { SetOrderSubmissionDate(std::forward<OrderSubmissionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The fulfilment date for the order. </p>
     */
    inline const Aws::Utils::DateTime& GetOrderFulfilledDate() const { return m_orderFulfilledDate; }
    inline bool OrderFulfilledDateHasBeenSet() const { return m_orderFulfilledDateHasBeenSet; }
    template<typename OrderFulfilledDateT = Aws::Utils::DateTime>
    void SetOrderFulfilledDate(OrderFulfilledDateT&& value) { m_orderFulfilledDateHasBeenSet = true; m_orderFulfilledDate = std::forward<OrderFulfilledDateT>(value); }
    template<typename OrderFulfilledDateT = Aws::Utils::DateTime>
    OrderSummary& WithOrderFulfilledDate(OrderFulfilledDateT&& value) { SetOrderFulfilledDate(std::forward<OrderFulfilledDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;

    OrderType m_orderType{OrderType::NOT_SET};
    bool m_orderTypeHasBeenSet = false;

    OrderStatus m_status{OrderStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<LineItemStatus, int> m_lineItemCountsByStatus;
    bool m_lineItemCountsByStatusHasBeenSet = false;

    Aws::Utils::DateTime m_orderSubmissionDate{};
    bool m_orderSubmissionDateHasBeenSet = false;

    Aws::Utils::DateTime m_orderFulfilledDate{};
    bool m_orderFulfilledDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
