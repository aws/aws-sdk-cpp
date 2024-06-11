/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class GetJourneyExecutionActivityMetricsRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API GetJourneyExecutionActivityMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJourneyExecutionActivityMetrics"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;

    AWS_PINPOINT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline GetJourneyExecutionActivityMetricsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey activity.</p>
     */
    inline const Aws::String& GetJourneyActivityId() const{ return m_journeyActivityId; }
    inline bool JourneyActivityIdHasBeenSet() const { return m_journeyActivityIdHasBeenSet; }
    inline void SetJourneyActivityId(const Aws::String& value) { m_journeyActivityIdHasBeenSet = true; m_journeyActivityId = value; }
    inline void SetJourneyActivityId(Aws::String&& value) { m_journeyActivityIdHasBeenSet = true; m_journeyActivityId = std::move(value); }
    inline void SetJourneyActivityId(const char* value) { m_journeyActivityIdHasBeenSet = true; m_journeyActivityId.assign(value); }
    inline GetJourneyExecutionActivityMetricsRequest& WithJourneyActivityId(const Aws::String& value) { SetJourneyActivityId(value); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithJourneyActivityId(Aws::String&& value) { SetJourneyActivityId(std::move(value)); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithJourneyActivityId(const char* value) { SetJourneyActivityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline const Aws::String& GetJourneyId() const{ return m_journeyId; }
    inline bool JourneyIdHasBeenSet() const { return m_journeyIdHasBeenSet; }
    inline void SetJourneyId(const Aws::String& value) { m_journeyIdHasBeenSet = true; m_journeyId = value; }
    inline void SetJourneyId(Aws::String&& value) { m_journeyIdHasBeenSet = true; m_journeyId = std::move(value); }
    inline void SetJourneyId(const char* value) { m_journeyIdHasBeenSet = true; m_journeyId.assign(value); }
    inline GetJourneyExecutionActivityMetricsRequest& WithJourneyId(const Aws::String& value) { SetJourneyId(value); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithJourneyId(Aws::String&& value) { SetJourneyId(std::move(value)); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithJourneyId(const char* value) { SetJourneyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code/> string that specifies which page of results to return in a
     * paginated response. This parameter is not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetJourneyExecutionActivityMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(const Aws::String& value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline void SetPageSize(Aws::String&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::move(value); }
    inline void SetPageSize(const char* value) { m_pageSizeHasBeenSet = true; m_pageSize.assign(value); }
    inline GetJourneyExecutionActivityMetricsRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}
    inline GetJourneyExecutionActivityMetricsRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_journeyActivityId;
    bool m_journeyActivityIdHasBeenSet = false;

    Aws::String m_journeyId;
    bool m_journeyIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
