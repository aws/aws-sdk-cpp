﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/CloudWatchRUMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudWatchRUM
{
namespace Model
{

  /**
   */
  class ListRumMetricsDestinationsRequest : public CloudWatchRUMRequest
  {
  public:
    AWS_CLOUDWATCHRUM_API ListRumMetricsDestinationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRumMetricsDestinations"; }

    AWS_CLOUDWATCHRUM_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHRUM_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the app monitor associated with the destinations that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetAppMonitorName() const { return m_appMonitorName; }
    inline bool AppMonitorNameHasBeenSet() const { return m_appMonitorNameHasBeenSet; }
    template<typename AppMonitorNameT = Aws::String>
    void SetAppMonitorName(AppMonitorNameT&& value) { m_appMonitorNameHasBeenSet = true; m_appMonitorName = std::forward<AppMonitorNameT>(value); }
    template<typename AppMonitorNameT = Aws::String>
    ListRumMetricsDestinationsRequest& WithAppMonitorName(AppMonitorNameT&& value) { SetAppMonitorName(std::forward<AppMonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in one operation. The default is 50.
     * The maximum that you can specify is 100.</p> <p>To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRumMetricsDestinationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRumMetricsDestinationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appMonitorName;
    bool m_appMonitorNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
