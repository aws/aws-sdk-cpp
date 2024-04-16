/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class GetOutpostSupportedInstanceTypesRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API GetOutpostSupportedInstanceTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOutpostSupportedInstanceTypes"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID or ARN of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostIdentifier() const{ return m_outpostIdentifier; }

    /**
     * <p>The ID or ARN of the Outpost.</p>
     */
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }

    /**
     * <p>The ID or ARN of the Outpost.</p>
     */
    inline void SetOutpostIdentifier(const Aws::String& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = value; }

    /**
     * <p>The ID or ARN of the Outpost.</p>
     */
    inline void SetOutpostIdentifier(Aws::String&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::move(value); }

    /**
     * <p>The ID or ARN of the Outpost.</p>
     */
    inline void SetOutpostIdentifier(const char* value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier.assign(value); }

    /**
     * <p>The ID or ARN of the Outpost.</p>
     */
    inline GetOutpostSupportedInstanceTypesRequest& WithOutpostIdentifier(const Aws::String& value) { SetOutpostIdentifier(value); return *this;}

    /**
     * <p>The ID or ARN of the Outpost.</p>
     */
    inline GetOutpostSupportedInstanceTypesRequest& WithOutpostIdentifier(Aws::String&& value) { SetOutpostIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or ARN of the Outpost.</p>
     */
    inline GetOutpostSupportedInstanceTypesRequest& WithOutpostIdentifier(const char* value) { SetOutpostIdentifier(value); return *this;}


    /**
     * <p>The ID for the Amazon Web Services Outposts order.</p>
     */
    inline const Aws::String& GetOrderId() const{ return m_orderId; }

    /**
     * <p>The ID for the Amazon Web Services Outposts order.</p>
     */
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services Outposts order.</p>
     */
    inline void SetOrderId(const Aws::String& value) { m_orderIdHasBeenSet = true; m_orderId = value; }

    /**
     * <p>The ID for the Amazon Web Services Outposts order.</p>
     */
    inline void SetOrderId(Aws::String&& value) { m_orderIdHasBeenSet = true; m_orderId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services Outposts order.</p>
     */
    inline void SetOrderId(const char* value) { m_orderIdHasBeenSet = true; m_orderId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services Outposts order.</p>
     */
    inline GetOutpostSupportedInstanceTypesRequest& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services Outposts order.</p>
     */
    inline GetOutpostSupportedInstanceTypesRequest& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services Outposts order.</p>
     */
    inline GetOutpostSupportedInstanceTypesRequest& WithOrderId(const char* value) { SetOrderId(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline GetOutpostSupportedInstanceTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline GetOutpostSupportedInstanceTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetOutpostSupportedInstanceTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetOutpostSupportedInstanceTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
