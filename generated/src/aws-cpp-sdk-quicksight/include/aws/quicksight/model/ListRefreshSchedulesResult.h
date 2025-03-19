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
    AWS_QUICKSIGHT_API ListRefreshSchedulesResult() = default;
    AWS_QUICKSIGHT_API ListRefreshSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListRefreshSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of refresh schedules for the dataset.</p>
     */
    inline const Aws::Vector<RefreshSchedule>& GetRefreshSchedules() const { return m_refreshSchedules; }
    template<typename RefreshSchedulesT = Aws::Vector<RefreshSchedule>>
    void SetRefreshSchedules(RefreshSchedulesT&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules = std::forward<RefreshSchedulesT>(value); }
    template<typename RefreshSchedulesT = Aws::Vector<RefreshSchedule>>
    ListRefreshSchedulesResult& WithRefreshSchedules(RefreshSchedulesT&& value) { SetRefreshSchedules(std::forward<RefreshSchedulesT>(value)); return *this;}
    template<typename RefreshSchedulesT = RefreshSchedule>
    ListRefreshSchedulesResult& AddRefreshSchedules(RefreshSchedulesT&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules.emplace_back(std::forward<RefreshSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListRefreshSchedulesResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRefreshSchedulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RefreshSchedule> m_refreshSchedules;
    bool m_refreshSchedulesHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
