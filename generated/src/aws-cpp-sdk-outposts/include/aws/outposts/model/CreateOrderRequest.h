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


    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostIdentifier() const{ return m_outpostIdentifier; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostIdentifier(const Aws::String& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = value; }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostIdentifier(Aws::String&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::move(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline void SetOutpostIdentifier(const char* value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier.assign(value); }

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline CreateOrderRequest& WithOutpostIdentifier(const Aws::String& value) { SetOutpostIdentifier(value); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline CreateOrderRequest& WithOutpostIdentifier(Aws::String&& value) { SetOutpostIdentifier(std::move(value)); return *this;}

    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline CreateOrderRequest& WithOutpostIdentifier(const char* value) { SetOutpostIdentifier(value); return *this;}


    /**
     * <p>The line items that make up the order.</p>
     */
    inline const Aws::Vector<LineItemRequest>& GetLineItems() const{ return m_lineItems; }

    /**
     * <p>The line items that make up the order.</p>
     */
    inline bool LineItemsHasBeenSet() const { return m_lineItemsHasBeenSet; }

    /**
     * <p>The line items that make up the order.</p>
     */
    inline void SetLineItems(const Aws::Vector<LineItemRequest>& value) { m_lineItemsHasBeenSet = true; m_lineItems = value; }

    /**
     * <p>The line items that make up the order.</p>
     */
    inline void SetLineItems(Aws::Vector<LineItemRequest>&& value) { m_lineItemsHasBeenSet = true; m_lineItems = std::move(value); }

    /**
     * <p>The line items that make up the order.</p>
     */
    inline CreateOrderRequest& WithLineItems(const Aws::Vector<LineItemRequest>& value) { SetLineItems(value); return *this;}

    /**
     * <p>The line items that make up the order.</p>
     */
    inline CreateOrderRequest& WithLineItems(Aws::Vector<LineItemRequest>&& value) { SetLineItems(std::move(value)); return *this;}

    /**
     * <p>The line items that make up the order.</p>
     */
    inline CreateOrderRequest& AddLineItems(const LineItemRequest& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(value); return *this; }

    /**
     * <p>The line items that make up the order.</p>
     */
    inline CreateOrderRequest& AddLineItems(LineItemRequest&& value) { m_lineItemsHasBeenSet = true; m_lineItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The payment option.</p>
     */
    inline const PaymentOption& GetPaymentOption() const{ return m_paymentOption; }

    /**
     * <p>The payment option.</p>
     */
    inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }

    /**
     * <p>The payment option.</p>
     */
    inline void SetPaymentOption(const PaymentOption& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = value; }

    /**
     * <p>The payment option.</p>
     */
    inline void SetPaymentOption(PaymentOption&& value) { m_paymentOptionHasBeenSet = true; m_paymentOption = std::move(value); }

    /**
     * <p>The payment option.</p>
     */
    inline CreateOrderRequest& WithPaymentOption(const PaymentOption& value) { SetPaymentOption(value); return *this;}

    /**
     * <p>The payment option.</p>
     */
    inline CreateOrderRequest& WithPaymentOption(PaymentOption&& value) { SetPaymentOption(std::move(value)); return *this;}


    /**
     * <p>The payment terms.</p>
     */
    inline const PaymentTerm& GetPaymentTerm() const{ return m_paymentTerm; }

    /**
     * <p>The payment terms.</p>
     */
    inline bool PaymentTermHasBeenSet() const { return m_paymentTermHasBeenSet; }

    /**
     * <p>The payment terms.</p>
     */
    inline void SetPaymentTerm(const PaymentTerm& value) { m_paymentTermHasBeenSet = true; m_paymentTerm = value; }

    /**
     * <p>The payment terms.</p>
     */
    inline void SetPaymentTerm(PaymentTerm&& value) { m_paymentTermHasBeenSet = true; m_paymentTerm = std::move(value); }

    /**
     * <p>The payment terms.</p>
     */
    inline CreateOrderRequest& WithPaymentTerm(const PaymentTerm& value) { SetPaymentTerm(value); return *this;}

    /**
     * <p>The payment terms.</p>
     */
    inline CreateOrderRequest& WithPaymentTerm(PaymentTerm&& value) { SetPaymentTerm(std::move(value)); return *this;}

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
