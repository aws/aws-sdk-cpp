/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/InsightState.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class GetInsightSummariesRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API GetInsightSummariesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsightSummaries"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of insight states. </p>
     */
    inline const Aws::Vector<InsightState>& GetStates() const{ return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    inline void SetStates(const Aws::Vector<InsightState>& value) { m_statesHasBeenSet = true; m_states = value; }
    inline void SetStates(Aws::Vector<InsightState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }
    inline GetInsightSummariesRequest& WithStates(const Aws::Vector<InsightState>& value) { SetStates(value); return *this;}
    inline GetInsightSummariesRequest& WithStates(Aws::Vector<InsightState>&& value) { SetStates(std::move(value)); return *this;}
    inline GetInsightSummariesRequest& AddStates(const InsightState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    inline GetInsightSummariesRequest& AddStates(InsightState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the group. Required if the GroupName isn't
     * provided.</p>
     */
    inline const Aws::String& GetGroupARN() const{ return m_groupARN; }
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }
    inline void SetGroupARN(const Aws::String& value) { m_groupARNHasBeenSet = true; m_groupARN = value; }
    inline void SetGroupARN(Aws::String&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::move(value); }
    inline void SetGroupARN(const char* value) { m_groupARNHasBeenSet = true; m_groupARN.assign(value); }
    inline GetInsightSummariesRequest& WithGroupARN(const Aws::String& value) { SetGroupARN(value); return *this;}
    inline GetInsightSummariesRequest& WithGroupARN(Aws::String&& value) { SetGroupARN(std::move(value)); return *this;}
    inline GetInsightSummariesRequest& WithGroupARN(const char* value) { SetGroupARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group. Required if the GroupARN isn't provided.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline GetInsightSummariesRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline GetInsightSummariesRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline GetInsightSummariesRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The beginning of the time frame in which the insights started. The start time
     * can't be more than 30 days old.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetInsightSummariesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetInsightSummariesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time frame in which the insights ended. The end time can't be
     * more than 30 days old.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetInsightSummariesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetInsightSummariesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to display.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetInsightSummariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetInsightSummariesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetInsightSummariesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetInsightSummariesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<InsightState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
