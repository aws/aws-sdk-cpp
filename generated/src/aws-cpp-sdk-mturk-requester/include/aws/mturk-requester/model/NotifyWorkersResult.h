/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_MTURK_API NotifyWorkersResult();
    AWS_MTURK_API NotifyWorkersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API NotifyWorkersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> When MTurk sends notifications to the list of Workers, it returns back any
     * failures it encounters in this list of NotifyWorkersFailureStatus objects. </p>
     */
    inline const Aws::Vector<NotifyWorkersFailureStatus>& GetNotifyWorkersFailureStatuses() const{ return m_notifyWorkersFailureStatuses; }

    /**
     * <p> When MTurk sends notifications to the list of Workers, it returns back any
     * failures it encounters in this list of NotifyWorkersFailureStatus objects. </p>
     */
    inline void SetNotifyWorkersFailureStatuses(const Aws::Vector<NotifyWorkersFailureStatus>& value) { m_notifyWorkersFailureStatuses = value; }

    /**
     * <p> When MTurk sends notifications to the list of Workers, it returns back any
     * failures it encounters in this list of NotifyWorkersFailureStatus objects. </p>
     */
    inline void SetNotifyWorkersFailureStatuses(Aws::Vector<NotifyWorkersFailureStatus>&& value) { m_notifyWorkersFailureStatuses = std::move(value); }

    /**
     * <p> When MTurk sends notifications to the list of Workers, it returns back any
     * failures it encounters in this list of NotifyWorkersFailureStatus objects. </p>
     */
    inline NotifyWorkersResult& WithNotifyWorkersFailureStatuses(const Aws::Vector<NotifyWorkersFailureStatus>& value) { SetNotifyWorkersFailureStatuses(value); return *this;}

    /**
     * <p> When MTurk sends notifications to the list of Workers, it returns back any
     * failures it encounters in this list of NotifyWorkersFailureStatus objects. </p>
     */
    inline NotifyWorkersResult& WithNotifyWorkersFailureStatuses(Aws::Vector<NotifyWorkersFailureStatus>&& value) { SetNotifyWorkersFailureStatuses(std::move(value)); return *this;}

    /**
     * <p> When MTurk sends notifications to the list of Workers, it returns back any
     * failures it encounters in this list of NotifyWorkersFailureStatus objects. </p>
     */
    inline NotifyWorkersResult& AddNotifyWorkersFailureStatuses(const NotifyWorkersFailureStatus& value) { m_notifyWorkersFailureStatuses.push_back(value); return *this; }

    /**
     * <p> When MTurk sends notifications to the list of Workers, it returns back any
     * failures it encounters in this list of NotifyWorkersFailureStatus objects. </p>
     */
    inline NotifyWorkersResult& AddNotifyWorkersFailureStatuses(NotifyWorkersFailureStatus&& value) { m_notifyWorkersFailureStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<NotifyWorkersFailureStatus> m_notifyWorkersFailureStatuses;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
