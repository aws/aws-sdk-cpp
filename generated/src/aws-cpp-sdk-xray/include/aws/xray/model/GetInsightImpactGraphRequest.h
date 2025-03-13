/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class GetInsightImpactGraphRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API GetInsightImpactGraphRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsightImpactGraph"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The insight's unique identifier. Use the GetInsightSummaries action to
     * retrieve an InsightId.</p>
     */
    inline const Aws::String& GetInsightId() const { return m_insightId; }
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
    template<typename InsightIdT = Aws::String>
    void SetInsightId(InsightIdT&& value) { m_insightIdHasBeenSet = true; m_insightId = std::forward<InsightIdT>(value); }
    template<typename InsightIdT = Aws::String>
    GetInsightImpactGraphRequest& WithInsightId(InsightIdT&& value) { SetInsightId(std::forward<InsightIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated start time of the insight, in Unix time seconds. The StartTime
     * is inclusive of the value provided and can't be more than 30 days old.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetInsightImpactGraphRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated end time of the insight, in Unix time seconds. The EndTime is
     * exclusive of the value provided. The time range between the start time and end
     * time can't be more than six hours. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetInsightImpactGraphRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token returned by a previous request to retrieve the
     * next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInsightImpactGraphRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
