/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ScheduleAction.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeScheduleResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeScheduleResponse">AWS
   * API Reference</a></p>
   */
  class DescribeScheduleResult
  {
  public:
    AWS_MEDIALIVE_API DescribeScheduleResult() = default;
    AWS_MEDIALIVE_API DescribeScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The next token; for use in pagination.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeScheduleResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The list of actions in the schedule.
     */
    inline const Aws::Vector<ScheduleAction>& GetScheduleActions() const { return m_scheduleActions; }
    template<typename ScheduleActionsT = Aws::Vector<ScheduleAction>>
    void SetScheduleActions(ScheduleActionsT&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = std::forward<ScheduleActionsT>(value); }
    template<typename ScheduleActionsT = Aws::Vector<ScheduleAction>>
    DescribeScheduleResult& WithScheduleActions(ScheduleActionsT&& value) { SetScheduleActions(std::forward<ScheduleActionsT>(value)); return *this;}
    template<typename ScheduleActionsT = ScheduleAction>
    DescribeScheduleResult& AddScheduleActions(ScheduleActionsT&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.emplace_back(std::forward<ScheduleActionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ScheduleAction> m_scheduleActions;
    bool m_scheduleActionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
