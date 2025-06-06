﻿/**
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
  class GetJourneyRunExecutionActivityMetricsRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API GetJourneyRunExecutionActivityMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJourneyRunExecutionActivityMetrics"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;

    AWS_PINPOINT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetJourneyRunExecutionActivityMetricsRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey activity.</p>
     */
    inline const Aws::String& GetJourneyActivityId() const { return m_journeyActivityId; }
    inline bool JourneyActivityIdHasBeenSet() const { return m_journeyActivityIdHasBeenSet; }
    template<typename JourneyActivityIdT = Aws::String>
    void SetJourneyActivityId(JourneyActivityIdT&& value) { m_journeyActivityIdHasBeenSet = true; m_journeyActivityId = std::forward<JourneyActivityIdT>(value); }
    template<typename JourneyActivityIdT = Aws::String>
    GetJourneyRunExecutionActivityMetricsRequest& WithJourneyActivityId(JourneyActivityIdT&& value) { SetJourneyActivityId(std::forward<JourneyActivityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey.</p>
     */
    inline const Aws::String& GetJourneyId() const { return m_journeyId; }
    inline bool JourneyIdHasBeenSet() const { return m_journeyIdHasBeenSet; }
    template<typename JourneyIdT = Aws::String>
    void SetJourneyId(JourneyIdT&& value) { m_journeyIdHasBeenSet = true; m_journeyId = std::forward<JourneyIdT>(value); }
    template<typename JourneyIdT = Aws::String>
    GetJourneyRunExecutionActivityMetricsRequest& WithJourneyId(JourneyIdT&& value) { SetJourneyId(std::forward<JourneyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code/> string that specifies which page of results to return in a
     * paginated response. This parameter is not supported for application, campaign,
     * and journey metrics.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetJourneyRunExecutionActivityMetricsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    template<typename PageSizeT = Aws::String>
    void SetPageSize(PageSizeT&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::forward<PageSizeT>(value); }
    template<typename PageSizeT = Aws::String>
    GetJourneyRunExecutionActivityMetricsRequest& WithPageSize(PageSizeT&& value) { SetPageSize(std::forward<PageSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the journey run.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    GetJourneyRunExecutionActivityMetricsRequest& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
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

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
