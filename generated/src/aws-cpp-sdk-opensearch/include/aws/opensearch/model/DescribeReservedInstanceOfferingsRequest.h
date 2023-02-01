/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the request parameters to a
   * <code>DescribeReservedInstanceOfferings</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstanceOfferingsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstanceOfferingsRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstanceOfferingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedInstanceOfferings"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Reserved Instance identifier filter value. Use this parameter to show
     * only the available instance types that match the specified reservation
     * identifier.</p>
     */
    inline const Aws::String& GetReservedInstanceOfferingId() const{ return m_reservedInstanceOfferingId; }

    /**
     * <p>The Reserved Instance identifier filter value. Use this parameter to show
     * only the available instance types that match the specified reservation
     * identifier.</p>
     */
    inline bool ReservedInstanceOfferingIdHasBeenSet() const { return m_reservedInstanceOfferingIdHasBeenSet; }

    /**
     * <p>The Reserved Instance identifier filter value. Use this parameter to show
     * only the available instance types that match the specified reservation
     * identifier.</p>
     */
    inline void SetReservedInstanceOfferingId(const Aws::String& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = value; }

    /**
     * <p>The Reserved Instance identifier filter value. Use this parameter to show
     * only the available instance types that match the specified reservation
     * identifier.</p>
     */
    inline void SetReservedInstanceOfferingId(Aws::String&& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = std::move(value); }

    /**
     * <p>The Reserved Instance identifier filter value. Use this parameter to show
     * only the available instance types that match the specified reservation
     * identifier.</p>
     */
    inline void SetReservedInstanceOfferingId(const char* value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId.assign(value); }

    /**
     * <p>The Reserved Instance identifier filter value. Use this parameter to show
     * only the available instance types that match the specified reservation
     * identifier.</p>
     */
    inline DescribeReservedInstanceOfferingsRequest& WithReservedInstanceOfferingId(const Aws::String& value) { SetReservedInstanceOfferingId(value); return *this;}

    /**
     * <p>The Reserved Instance identifier filter value. Use this parameter to show
     * only the available instance types that match the specified reservation
     * identifier.</p>
     */
    inline DescribeReservedInstanceOfferingsRequest& WithReservedInstanceOfferingId(Aws::String&& value) { SetReservedInstanceOfferingId(std::move(value)); return *this;}

    /**
     * <p>The Reserved Instance identifier filter value. Use this parameter to show
     * only the available instance types that match the specified reservation
     * identifier.</p>
     */
    inline DescribeReservedInstanceOfferingsRequest& WithReservedInstanceOfferingId(const char* value) { SetReservedInstanceOfferingId(value); return *this;}


    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results.</p>
     */
    inline DescribeReservedInstanceOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If your initial <code>DescribeReservedInstanceOfferings</code> operation
     * returns a <code>nextToken</code>, you can include the returned
     * <code>nextToken</code> in subsequent
     * <code>DescribeReservedInstanceOfferings</code> operations, which returns results
     * in the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>DescribeReservedInstanceOfferings</code> operation
     * returns a <code>nextToken</code>, you can include the returned
     * <code>nextToken</code> in subsequent
     * <code>DescribeReservedInstanceOfferings</code> operations, which returns results
     * in the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial <code>DescribeReservedInstanceOfferings</code> operation
     * returns a <code>nextToken</code>, you can include the returned
     * <code>nextToken</code> in subsequent
     * <code>DescribeReservedInstanceOfferings</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial <code>DescribeReservedInstanceOfferings</code> operation
     * returns a <code>nextToken</code>, you can include the returned
     * <code>nextToken</code> in subsequent
     * <code>DescribeReservedInstanceOfferings</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>DescribeReservedInstanceOfferings</code> operation
     * returns a <code>nextToken</code>, you can include the returned
     * <code>nextToken</code> in subsequent
     * <code>DescribeReservedInstanceOfferings</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>DescribeReservedInstanceOfferings</code> operation
     * returns a <code>nextToken</code>, you can include the returned
     * <code>nextToken</code> in subsequent
     * <code>DescribeReservedInstanceOfferings</code> operations, which returns results
     * in the next page.</p>
     */
    inline DescribeReservedInstanceOfferingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>DescribeReservedInstanceOfferings</code> operation
     * returns a <code>nextToken</code>, you can include the returned
     * <code>nextToken</code> in subsequent
     * <code>DescribeReservedInstanceOfferings</code> operations, which returns results
     * in the next page.</p>
     */
    inline DescribeReservedInstanceOfferingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>DescribeReservedInstanceOfferings</code> operation
     * returns a <code>nextToken</code>, you can include the returned
     * <code>nextToken</code> in subsequent
     * <code>DescribeReservedInstanceOfferings</code> operations, which returns results
     * in the next page.</p>
     */
    inline DescribeReservedInstanceOfferingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_reservedInstanceOfferingId;
    bool m_reservedInstanceOfferingIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
