/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/Activity.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkDocs
{
namespace Model
{
  class DescribeActivitiesResult
  {
  public:
    AWS_WORKDOCS_API DescribeActivitiesResult() = default;
    AWS_WORKDOCS_API DescribeActivitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeActivitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline const Aws::Vector<Activity>& GetUserActivities() const { return m_userActivities; }
    template<typename UserActivitiesT = Aws::Vector<Activity>>
    void SetUserActivities(UserActivitiesT&& value) { m_userActivitiesHasBeenSet = true; m_userActivities = std::forward<UserActivitiesT>(value); }
    template<typename UserActivitiesT = Aws::Vector<Activity>>
    DescribeActivitiesResult& WithUserActivities(UserActivitiesT&& value) { SetUserActivities(std::forward<UserActivitiesT>(value)); return *this;}
    template<typename UserActivitiesT = Activity>
    DescribeActivitiesResult& AddUserActivities(UserActivitiesT&& value) { m_userActivitiesHasBeenSet = true; m_userActivities.emplace_back(std::forward<UserActivitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeActivitiesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeActivitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Activity> m_userActivities;
    bool m_userActivitiesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
