/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class GetInsightEventsRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API GetInsightEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsightEvents"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline GetInsightEventsRequest& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline GetInsightEventsRequest& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline GetInsightEventsRequest& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    /**
     * <p>Used to retrieve at most the specified value of events.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Used to retrieve at most the specified value of events.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Used to retrieve at most the specified value of events.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Used to retrieve at most the specified value of events.</p>
     */
    inline GetInsightEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of events. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of events. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of events. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of events. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of events. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of events. </p>
     */
    inline GetInsightEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of events. </p>
     */
    inline GetInsightEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of events. </p>
     */
    inline GetInsightEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
