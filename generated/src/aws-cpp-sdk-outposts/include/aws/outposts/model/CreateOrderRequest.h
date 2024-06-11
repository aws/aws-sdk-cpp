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
    AWS_OUTPOSTS_API CreateOrderRequest();

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
    inline const Aws::String& GetOutpostIdentifier() const{ return m_outpostIdentifier; }
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
    inline void SetOutpostIdentifier(const Aws::String& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = value; }
    inline void SetOutpostIdentifier(Aws::String&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::move(value); }
    inline void SetOutpostIdentifier(const char* value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier.assign(value); }
    inline CreateOrderRequest& WithOutpostIdentifier(const Aws::String& value) { SetOutpostIdentifier(value); return *this;}
    inline CreateOrderRequest& WithOutpostIdentifier(Aws::String&& value) { SetOutpostIdentifier(std::move(value)); return *this;}
    inline CreateOrderRequest& WithOutpostIdentifier(const char* value) { SetOutpostIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The line items that make up the order.</p>
     */
    inline const Aws::Vector<LineItemRequest>& GetLineItems() const{ return m_lineItems; }
    inline bool LineItemsHasBeenSet() const { return m_lineItemsHasBeenSet; }
    inline void SetLineItems(const Aws::Vector<LineItemRequest>& value) { m_lineItemsHasBeenSet = true; m_lineItems = value; }
    inline void SetLineItems(Aws::Vector<LineItemRequest>&& value) { m_lineItemsHasBeenSet = true; m_lineItems = std::move(value); }
    inline CreateOrderRequest& WithLineItems(const Aws::Vector<LineItemRequest>& value) { SetLineItems(value); return *this;}
    inline CreateOrderRequest& WithLineItems(Aws::Vector<LineItemRequest>&& value) { SetLineItems(std::move(value)); return *this;}
    inline CreateOrderRequest& AddLineItems(const LineItemRequest& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(value); return *this; }
    inline CreateOrderRequest& AddLineItems(LineItemRequest&& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The payment option.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }
    inline CreateOrderRequest& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}
    inline CreateOrderRequest& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payment terms.</p>
     */
    inline const PaymentTerm& GetPaymentTerm() const{ return m_paymentTerm; }
    inline bool PaymentTermHasBeenSet() const { return m_paymentTermHasBeenSet; }
    inline void SetPaymentTerm(const PaymentTerm& value) { m_paymentTermHasBeenSet = true; m_paymentTerm = value; }
    inline void SetPaymentTerm(PaymentTerm&& value) { m_paymentTermHasBeenSet = true; m_paymentTerm = std::move(value); }
    inline CreateOrderRequest& WithPaymentTerm(const PaymentTerm& value) { SetPaymentTerm(value); return *this;}
    inline CreateOrderRequest& WithPaymentTerm(PaymentTerm&& value) { SetPaymentTerm(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;

    Aws::Vector<LineItemRequest> m_lineItems;
    bool m_lineItemsHasBeenSet = false;

    PaymentOption m_paymentOption;
    bool m_paymentOptionHasBeenSet = false;

    PaymentTerm m_paymentTerm;
    bool m_paymentTermHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
