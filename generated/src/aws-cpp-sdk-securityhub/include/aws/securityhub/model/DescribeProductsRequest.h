﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class DescribeProductsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API DescribeProductsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProducts"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

    AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>DescribeProducts</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeProductsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeProductsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the integration to return.</p>
     */
    inline const Aws::String& GetProductArn() const { return m_productArn; }
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }
    template<typename ProductArnT = Aws::String>
    void SetProductArn(ProductArnT&& value) { m_productArnHasBeenSet = true; m_productArn = std::forward<ProductArnT>(value); }
    template<typename ProductArnT = Aws::String>
    DescribeProductsRequest& WithProductArn(ProductArnT&& value) { SetProductArn(std::forward<ProductArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_productArn;
    bool m_productArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
