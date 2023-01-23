/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/PoolOriginationIdentitiesFilter.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class ListPoolOriginationIdentitiesRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ListPoolOriginationIdentitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPoolOriginationIdentities"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the pool. This value can be either the PoolId or
     * PoolArn.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The unique identifier for the pool. This value can be either the PoolId or
     * PoolArn.</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The unique identifier for the pool. This value can be either the PoolId or
     * PoolArn.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The unique identifier for the pool. This value can be either the PoolId or
     * PoolArn.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The unique identifier for the pool. This value can be either the PoolId or
     * PoolArn.</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The unique identifier for the pool. This value can be either the PoolId or
     * PoolArn.</p>
     */
    inline ListPoolOriginationIdentitiesRequest& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The unique identifier for the pool. This value can be either the PoolId or
     * PoolArn.</p>
     */
    inline ListPoolOriginationIdentitiesRequest& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the pool. This value can be either the PoolId or
     * PoolArn.</p>
     */
    inline ListPoolOriginationIdentitiesRequest& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>An array of PoolOriginationIdentitiesFilter objects to filter the
     * results..</p>
     */
    inline const Aws::Vector<PoolOriginationIdentitiesFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of PoolOriginationIdentitiesFilter objects to filter the
     * results..</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of PoolOriginationIdentitiesFilter objects to filter the
     * results..</p>
     */
    inline void SetFilters(const Aws::Vector<PoolOriginationIdentitiesFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of PoolOriginationIdentitiesFilter objects to filter the
     * results..</p>
     */
    inline void SetFilters(Aws::Vector<PoolOriginationIdentitiesFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of PoolOriginationIdentitiesFilter objects to filter the
     * results..</p>
     */
    inline ListPoolOriginationIdentitiesRequest& WithFilters(const Aws::Vector<PoolOriginationIdentitiesFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of PoolOriginationIdentitiesFilter objects to filter the
     * results..</p>
     */
    inline ListPoolOriginationIdentitiesRequest& WithFilters(Aws::Vector<PoolOriginationIdentitiesFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of PoolOriginationIdentitiesFilter objects to filter the
     * results..</p>
     */
    inline ListPoolOriginationIdentitiesRequest& AddFilters(const PoolOriginationIdentitiesFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of PoolOriginationIdentitiesFilter objects to filter the
     * results..</p>
     */
    inline ListPoolOriginationIdentitiesRequest& AddFilters(PoolOriginationIdentitiesFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline ListPoolOriginationIdentitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline ListPoolOriginationIdentitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline ListPoolOriginationIdentitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per each request.</p>
     */
    inline ListPoolOriginationIdentitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::Vector<PoolOriginationIdentitiesFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
