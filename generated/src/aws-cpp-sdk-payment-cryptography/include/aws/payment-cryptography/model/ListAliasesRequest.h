/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   */
  class ListAliasesRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ListAliasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAliases"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, Amazon Web Services Payment Cryptography does not return
     * more than the specified number of items, but it might return fewer.</p> <p>This
     * value is optional. If you include a value, it must be between 1 and 100,
     * inclusive. If you do not include a value, it defaults to 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, Amazon Web Services Payment Cryptography does not return
     * more than the specified number of items, but it might return fewer.</p> <p>This
     * value is optional. If you include a value, it must be between 1 and 100,
     * inclusive. If you do not include a value, it defaults to 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, Amazon Web Services Payment Cryptography does not return
     * more than the specified number of items, but it might return fewer.</p> <p>This
     * value is optional. If you include a value, it must be between 1 and 100,
     * inclusive. If you do not include a value, it defaults to 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, Amazon Web Services Payment Cryptography does not return
     * more than the specified number of items, but it might return fewer.</p> <p>This
     * value is optional. If you include a value, it must be between 1 and 100,
     * inclusive. If you do not include a value, it defaults to 50.</p>
     */
    inline ListAliasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextToken</code> from the
     * truncated response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextToken</code> from the
     * truncated response you just received.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextToken</code> from the
     * truncated response you just received.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextToken</code> from the
     * truncated response you just received.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextToken</code> from the
     * truncated response you just received.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextToken</code> from the
     * truncated response you just received.</p>
     */
    inline ListAliasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextToken</code> from the
     * truncated response you just received.</p>
     */
    inline ListAliasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextToken</code> from the
     * truncated response you just received.</p>
     */
    inline ListAliasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
