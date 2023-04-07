/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/RefreshSchedule.h>
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
namespace QuickSight
{
namespace Model
{
  class ListRefreshSchedulesResult
  {
  public:
    AWS_QUICKSIGHT_API ListRefreshSchedulesResult();
    AWS_QUICKSIGHT_API ListRefreshSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListRefreshSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of refresh schedules for the dataset.</p>
     */
    inline const Aws::Vector<RefreshSchedule>& GetRefreshSchedules() const{ return m_refreshSchedules; }

    /**
     * <p>The list of refresh schedules for the dataset.</p>
     */
    inline void SetRefreshSchedules(const Aws::Vector<RefreshSchedule>& value) { m_refreshSchedules = value; }

    /**
     * <p>The list of refresh schedules for the dataset.</p>
     */
    inline void SetRefreshSchedules(Aws::Vector<RefreshSchedule>&& value) { m_refreshSchedules = std::move(value); }

    /**
     * <p>The list of refresh schedules for the dataset.</p>
     */
    inline ListRefreshSchedulesResult& WithRefreshSchedules(const Aws::Vector<RefreshSchedule>& value) { SetRefreshSchedules(value); return *this;}

    /**
     * <p>The list of refresh schedules for the dataset.</p>
     */
    inline ListRefreshSchedulesResult& WithRefreshSchedules(Aws::Vector<RefreshSchedule>&& value) { SetRefreshSchedules(std::move(value)); return *this;}

    /**
     * <p>The list of refresh schedules for the dataset.</p>
     */
    inline ListRefreshSchedulesResult& AddRefreshSchedules(const RefreshSchedule& value) { m_refreshSchedules.push_back(value); return *this; }

    /**
     * <p>The list of refresh schedules for the dataset.</p>
     */
    inline ListRefreshSchedulesResult& AddRefreshSchedules(RefreshSchedule&& value) { m_refreshSchedules.push_back(std::move(value)); return *this; }


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListRefreshSchedulesResult& WithStatus(int value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRefreshSchedulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRefreshSchedulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRefreshSchedulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RefreshSchedule> m_refreshSchedules;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
