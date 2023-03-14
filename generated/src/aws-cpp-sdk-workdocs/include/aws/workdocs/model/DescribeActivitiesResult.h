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
    AWS_WORKDOCS_API DescribeActivitiesResult();
    AWS_WORKDOCS_API DescribeActivitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API DescribeActivitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline const Aws::Vector<Activity>& GetUserActivities() const{ return m_userActivities; }

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline void SetUserActivities(const Aws::Vector<Activity>& value) { m_userActivities = value; }

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline void SetUserActivities(Aws::Vector<Activity>&& value) { m_userActivities = std::move(value); }

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline DescribeActivitiesResult& WithUserActivities(const Aws::Vector<Activity>& value) { SetUserActivities(value); return *this;}

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline DescribeActivitiesResult& WithUserActivities(Aws::Vector<Activity>&& value) { SetUserActivities(std::move(value)); return *this;}

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline DescribeActivitiesResult& AddUserActivities(const Activity& value) { m_userActivities.push_back(value); return *this; }

    /**
     * <p>The list of activities for the specified user and time period.</p>
     */
    inline DescribeActivitiesResult& AddUserActivities(Activity&& value) { m_userActivities.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline DescribeActivitiesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline DescribeActivitiesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline DescribeActivitiesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeActivitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeActivitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeActivitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Activity> m_userActivities;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
