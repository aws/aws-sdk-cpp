/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/GroupStatusDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QBusiness
{
namespace Model
{
  class GetGroupResult
  {
  public:
    AWS_QBUSINESS_API GetGroupResult() = default;
    AWS_QBUSINESS_API GetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the group.</p>
     */
    inline const GroupStatusDetail& GetStatus() const { return m_status; }
    template<typename StatusT = GroupStatusDetail>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = GroupStatusDetail>
    GetGroupResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status history of the group.</p>
     */
    inline const Aws::Vector<GroupStatusDetail>& GetStatusHistory() const { return m_statusHistory; }
    template<typename StatusHistoryT = Aws::Vector<GroupStatusDetail>>
    void SetStatusHistory(StatusHistoryT&& value) { m_statusHistoryHasBeenSet = true; m_statusHistory = std::forward<StatusHistoryT>(value); }
    template<typename StatusHistoryT = Aws::Vector<GroupStatusDetail>>
    GetGroupResult& WithStatusHistory(StatusHistoryT&& value) { SetStatusHistory(std::forward<StatusHistoryT>(value)); return *this;}
    template<typename StatusHistoryT = GroupStatusDetail>
    GetGroupResult& AddStatusHistory(StatusHistoryT&& value) { m_statusHistoryHasBeenSet = true; m_statusHistory.emplace_back(std::forward<StatusHistoryT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GroupStatusDetail m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<GroupStatusDetail> m_statusHistory;
    bool m_statusHistoryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
