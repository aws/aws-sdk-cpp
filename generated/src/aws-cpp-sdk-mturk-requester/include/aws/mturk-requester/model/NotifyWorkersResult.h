/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/NotifyWorkersFailureStatus.h>
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
namespace MTurk
{
namespace Model
{
  class NotifyWorkersResult
  {
  public:
    AWS_MTURK_API NotifyWorkersResult() = default;
    AWS_MTURK_API NotifyWorkersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API NotifyWorkersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> When MTurk sends notifications to the list of Workers, it returns back any
     * failures it encounters in this list of NotifyWorkersFailureStatus objects. </p>
     */
    inline const Aws::Vector<NotifyWorkersFailureStatus>& GetNotifyWorkersFailureStatuses() const { return m_notifyWorkersFailureStatuses; }
    template<typename NotifyWorkersFailureStatusesT = Aws::Vector<NotifyWorkersFailureStatus>>
    void SetNotifyWorkersFailureStatuses(NotifyWorkersFailureStatusesT&& value) { m_notifyWorkersFailureStatusesHasBeenSet = true; m_notifyWorkersFailureStatuses = std::forward<NotifyWorkersFailureStatusesT>(value); }
    template<typename NotifyWorkersFailureStatusesT = Aws::Vector<NotifyWorkersFailureStatus>>
    NotifyWorkersResult& WithNotifyWorkersFailureStatuses(NotifyWorkersFailureStatusesT&& value) { SetNotifyWorkersFailureStatuses(std::forward<NotifyWorkersFailureStatusesT>(value)); return *this;}
    template<typename NotifyWorkersFailureStatusesT = NotifyWorkersFailureStatus>
    NotifyWorkersResult& AddNotifyWorkersFailureStatuses(NotifyWorkersFailureStatusesT&& value) { m_notifyWorkersFailureStatusesHasBeenSet = true; m_notifyWorkersFailureStatuses.emplace_back(std::forward<NotifyWorkersFailureStatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    NotifyWorkersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NotifyWorkersFailureStatus> m_notifyWorkersFailureStatuses;
    bool m_notifyWorkersFailureStatusesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
