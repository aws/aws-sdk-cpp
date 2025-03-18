/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class ListDashboardsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API ListDashboardsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDashboards"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>If you specify this parameter, only the dashboards with names starting with
     * the specified string are listed. The maximum length is 255, and valid characters
     * are A-Z, a-z, 0-9, ".", "-", and "_". </p>
     */
    inline const Aws::String& GetDashboardNamePrefix() const { return m_dashboardNamePrefix; }
    inline bool DashboardNamePrefixHasBeenSet() const { return m_dashboardNamePrefixHasBeenSet; }
    template<typename DashboardNamePrefixT = Aws::String>
    void SetDashboardNamePrefix(DashboardNamePrefixT&& value) { m_dashboardNamePrefixHasBeenSet = true; m_dashboardNamePrefix = std::forward<DashboardNamePrefixT>(value); }
    template<typename DashboardNamePrefixT = Aws::String>
    ListDashboardsRequest& WithDashboardNamePrefix(DashboardNamePrefixT&& value) { SetDashboardNamePrefix(std::forward<DashboardNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDashboardsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardNamePrefix;
    bool m_dashboardNamePrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
