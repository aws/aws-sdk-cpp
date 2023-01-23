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
    AWS_MEDIALIVE_API DescribeScheduleResult();
    AWS_MEDIALIVE_API DescribeScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The next token; for use in pagination.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The next token; for use in pagination.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The next token; for use in pagination.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The next token; for use in pagination.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The next token; for use in pagination.
     */
    inline DescribeScheduleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The next token; for use in pagination.
     */
    inline DescribeScheduleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The next token; for use in pagination.
     */
    inline DescribeScheduleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * The list of actions in the schedule.
     */
    inline const Aws::Vector<ScheduleAction>& GetScheduleActions() const{ return m_scheduleActions; }

    /**
     * The list of actions in the schedule.
     */
    inline void SetScheduleActions(const Aws::Vector<ScheduleAction>& value) { m_scheduleActions = value; }

    /**
     * The list of actions in the schedule.
     */
    inline void SetScheduleActions(Aws::Vector<ScheduleAction>&& value) { m_scheduleActions = std::move(value); }

    /**
     * The list of actions in the schedule.
     */
    inline DescribeScheduleResult& WithScheduleActions(const Aws::Vector<ScheduleAction>& value) { SetScheduleActions(value); return *this;}

    /**
     * The list of actions in the schedule.
     */
    inline DescribeScheduleResult& WithScheduleActions(Aws::Vector<ScheduleAction>&& value) { SetScheduleActions(std::move(value)); return *this;}

    /**
     * The list of actions in the schedule.
     */
    inline DescribeScheduleResult& AddScheduleActions(const ScheduleAction& value) { m_scheduleActions.push_back(value); return *this; }

    /**
     * The list of actions in the schedule.
     */
    inline DescribeScheduleResult& AddScheduleActions(ScheduleAction&& value) { m_scheduleActions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ScheduleAction> m_scheduleActions;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
