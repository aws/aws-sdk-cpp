/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/PaymentOption.h>
#include <aws/outposts/model/PaymentTerm.h>
#include <aws/outposts/model/LineItemRequest.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class CreateOrderRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API CreateOrderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOrder"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostIdentifier() const { return m_outpostIdentifier; }
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
    template<typename OutpostIdentifierT = Aws::String>
    void SetOutpostIdentifier(OutpostIdentifierT&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::forward<OutpostIdentifierT>(value); }
    template<typename OutpostIdentifierT = Aws::String>
    CreateOrderRequest& WithOutpostIdentifier(OutpostIdentifierT&& value) { SetOutpostIdentifier(std::forward<OutpostIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line items that make up the order.</p>
     */
    inline const Aws::Vector<LineItemRequest>& GetLineItems() const { return m_lineItems; }
    inline bool LineItemsHasBeenSet() const { return m_lineItemsHasBeenSet; }
    template<typename LineItemsT = Aws::Vector<LineItemRequest>>
    void SetLineItems(LineItemsT&& value) { m_lineItemsHasBeenSet = true; m_lineItems = std::forward<LineItemsT>(value); }
    template<typename LineItemsT = Aws::Vector<LineItemRequest>>
    CreateOrderRequest& WithLineItems(LineItemsT&& value) { SetLineItems(std::forward<LineItemsT>(value)); return *this;}
    template<typename LineItemsT = LineItemRequest>
    CreateOrderRequest& AddLineItems(LineItemsT&& value) { m_lineItemsHasBeenSet = true; m_lineItems.emplace_back(std::forward<LineItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payment option.</p>
     */
    inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(PaymentOption value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline CreateOrderRequest& WithPaymentOption(PaymentOption value) { SetPaymentOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment terms.</p>
     */
    inline PaymentTerm GetPaymentTerm() const { return m_paymentTerm; }
    inline bool PaymentTermHasBeenSet() const { return m_paymentTermHasBeenSet; }
    inline void SetPaymentTerm(PaymentTerm value) { m_paymentTermHasBeenSet = true; m_paymentTerm = value; }
    inline CreateOrderRequest& WithPaymentTerm(PaymentTerm value) { SetPaymentTerm(value); return *this;}
    ///@}
  private:

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;

    Aws::Vector<LineItemRequest> m_lineItems;
    bool m_lineItemsHasBeenSet = false;

    PaymentOption m_paymentOption{PaymentOption::NOT_SET};
    bool m_paymentOptionHasBeenSet = false;

    PaymentTerm m_paymentTerm{PaymentTerm::NOT_SET};
    bool m_paymentTermHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
