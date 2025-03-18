/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListOutpostsRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListOutpostsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOutposts"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOutpostsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListOutpostsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by the lifecycle status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifeCycleStatusFilter() const { return m_lifeCycleStatusFilter; }
    inline bool LifeCycleStatusFilterHasBeenSet() const { return m_lifeCycleStatusFilterHasBeenSet; }
    template<typename LifeCycleStatusFilterT = Aws::Vector<Aws::String>>
    void SetLifeCycleStatusFilter(LifeCycleStatusFilterT&& value) { m_lifeCycleStatusFilterHasBeenSet = true; m_lifeCycleStatusFilter = std::forward<LifeCycleStatusFilterT>(value); }
    template<typename LifeCycleStatusFilterT = Aws::Vector<Aws::String>>
    ListOutpostsRequest& WithLifeCycleStatusFilter(LifeCycleStatusFilterT&& value) { SetLifeCycleStatusFilter(std::forward<LifeCycleStatusFilterT>(value)); return *this;}
    template<typename LifeCycleStatusFilterT = Aws::String>
    ListOutpostsRequest& AddLifeCycleStatusFilter(LifeCycleStatusFilterT&& value) { m_lifeCycleStatusFilterHasBeenSet = true; m_lifeCycleStatusFilter.emplace_back(std::forward<LifeCycleStatusFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by Availability Zone (for example,
     * <code>us-east-1a</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneFilter() const { return m_availabilityZoneFilter; }
    inline bool AvailabilityZoneFilterHasBeenSet() const { return m_availabilityZoneFilterHasBeenSet; }
    template<typename AvailabilityZoneFilterT = Aws::Vector<Aws::String>>
    void SetAvailabilityZoneFilter(AvailabilityZoneFilterT&& value) { m_availabilityZoneFilterHasBeenSet = true; m_availabilityZoneFilter = std::forward<AvailabilityZoneFilterT>(value); }
    template<typename AvailabilityZoneFilterT = Aws::Vector<Aws::String>>
    ListOutpostsRequest& WithAvailabilityZoneFilter(AvailabilityZoneFilterT&& value) { SetAvailabilityZoneFilter(std::forward<AvailabilityZoneFilterT>(value)); return *this;}
    template<typename AvailabilityZoneFilterT = Aws::String>
    ListOutpostsRequest& AddAvailabilityZoneFilter(AvailabilityZoneFilterT&& value) { m_availabilityZoneFilterHasBeenSet = true; m_availabilityZoneFilter.emplace_back(std::forward<AvailabilityZoneFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by AZ ID (for example, <code>use1-az1</code>).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIdFilter() const { return m_availabilityZoneIdFilter; }
    inline bool AvailabilityZoneIdFilterHasBeenSet() const { return m_availabilityZoneIdFilterHasBeenSet; }
    template<typename AvailabilityZoneIdFilterT = Aws::Vector<Aws::String>>
    void SetAvailabilityZoneIdFilter(AvailabilityZoneIdFilterT&& value) { m_availabilityZoneIdFilterHasBeenSet = true; m_availabilityZoneIdFilter = std::forward<AvailabilityZoneIdFilterT>(value); }
    template<typename AvailabilityZoneIdFilterT = Aws::Vector<Aws::String>>
    ListOutpostsRequest& WithAvailabilityZoneIdFilter(AvailabilityZoneIdFilterT&& value) { SetAvailabilityZoneIdFilter(std::forward<AvailabilityZoneIdFilterT>(value)); return *this;}
    template<typename AvailabilityZoneIdFilterT = Aws::String>
    ListOutpostsRequest& AddAvailabilityZoneIdFilter(AvailabilityZoneIdFilterT&& value) { m_availabilityZoneIdFilterHasBeenSet = true; m_availabilityZoneIdFilter.emplace_back(std::forward<AvailabilityZoneIdFilterT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifeCycleStatusFilter;
    bool m_lifeCycleStatusFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneFilter;
    bool m_availabilityZoneFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneIdFilter;
    bool m_availabilityZoneIdFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
