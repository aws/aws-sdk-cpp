/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about an activity that was performed by a
   * campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ActivityResponse">AWS
   * API Reference</a></p>
   */
  class ActivityResponse
  {
  public:
    AWS_PINPOINT_API ActivityResponse() = default;
    AWS_PINPOINT_API ActivityResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ActivityResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ActivityResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline const Aws::String& GetCampaignId() const { return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    template<typename CampaignIdT = Aws::String>
    void SetCampaignId(CampaignIdT&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::forward<CampaignIdT>(value); }
    template<typename CampaignIdT = Aws::String>
    ActivityResponse& WithCampaignId(CampaignIdT&& value) { SetCampaignId(std::forward<CampaignIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline const Aws::String& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::String>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::String>
    ActivityResponse& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ActivityResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline const Aws::String& GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    template<typename ResultT = Aws::String>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = Aws::String>
    ActivityResponse& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline const Aws::String& GetScheduledStart() const { return m_scheduledStart; }
    inline bool ScheduledStartHasBeenSet() const { return m_scheduledStartHasBeenSet; }
    template<typename ScheduledStartT = Aws::String>
    void SetScheduledStart(ScheduledStartT&& value) { m_scheduledStartHasBeenSet = true; m_scheduledStart = std::forward<ScheduledStartT>(value); }
    template<typename ScheduledStartT = Aws::String>
    ActivityResponse& WithScheduledStart(ScheduledStartT&& value) { SetScheduledStart(std::forward<ScheduledStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline const Aws::String& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::String>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::String>
    ActivityResponse& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the activity. Possible values are: PENDING,
     * INITIALIZING, RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    ActivityResponse& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of endpoints that the campaign successfully delivered
     * messages to.</p>
     */
    inline int GetSuccessfulEndpointCount() const { return m_successfulEndpointCount; }
    inline bool SuccessfulEndpointCountHasBeenSet() const { return m_successfulEndpointCountHasBeenSet; }
    inline void SetSuccessfulEndpointCount(int value) { m_successfulEndpointCountHasBeenSet = true; m_successfulEndpointCount = value; }
    inline ActivityResponse& WithSuccessfulEndpointCount(int value) { SetSuccessfulEndpointCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of time zones that were completed.</p>
     */
    inline int GetTimezonesCompletedCount() const { return m_timezonesCompletedCount; }
    inline bool TimezonesCompletedCountHasBeenSet() const { return m_timezonesCompletedCountHasBeenSet; }
    inline void SetTimezonesCompletedCount(int value) { m_timezonesCompletedCountHasBeenSet = true; m_timezonesCompletedCount = value; }
    inline ActivityResponse& WithTimezonesCompletedCount(int value) { SetTimezonesCompletedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of unique time zones that are in the segment for the
     * campaign.</p>
     */
    inline int GetTimezonesTotalCount() const { return m_timezonesTotalCount; }
    inline bool TimezonesTotalCountHasBeenSet() const { return m_timezonesTotalCountHasBeenSet; }
    inline void SetTimezonesTotalCount(int value) { m_timezonesTotalCountHasBeenSet = true; m_timezonesTotalCount = value; }
    inline ActivityResponse& WithTimezonesTotalCount(int value) { SetTimezonesTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of endpoints that the campaign attempted to deliver messages
     * to.</p>
     */
    inline int GetTotalEndpointCount() const { return m_totalEndpointCount; }
    inline bool TotalEndpointCountHasBeenSet() const { return m_totalEndpointCountHasBeenSet; }
    inline void SetTotalEndpointCount(int value) { m_totalEndpointCountHasBeenSet = true; m_totalEndpointCount = value; }
    inline ActivityResponse& WithTotalEndpointCount(int value) { SetTotalEndpointCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the campaign treatment that the activity applies
     * to. A treatment is a variation of a campaign that's used for A/B testing of a
     * campaign.</p>
     */
    inline const Aws::String& GetTreatmentId() const { return m_treatmentId; }
    inline bool TreatmentIdHasBeenSet() const { return m_treatmentIdHasBeenSet; }
    template<typename TreatmentIdT = Aws::String>
    void SetTreatmentId(TreatmentIdT&& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = std::forward<TreatmentIdT>(value); }
    template<typename TreatmentIdT = Aws::String>
    ActivityResponse& WithTreatmentId(TreatmentIdT&& value) { SetTreatmentId(std::forward<TreatmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object that contains metrics relating to the campaign execution for
     * this campaign activity. For information about the structure and contents of the
     * results, see <a
     * href="https://docs.aws.amazon.com//pinpoint/latest/developerguide/analytics-standard-metrics.html">Standard
     * Amazon Pinpoint analytics metrics</a> in the <i>Amazon Pinpoint Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExecutionMetrics() const { return m_executionMetrics; }
    inline bool ExecutionMetricsHasBeenSet() const { return m_executionMetricsHasBeenSet; }
    template<typename ExecutionMetricsT = Aws::Map<Aws::String, Aws::String>>
    void SetExecutionMetrics(ExecutionMetricsT&& value) { m_executionMetricsHasBeenSet = true; m_executionMetrics = std::forward<ExecutionMetricsT>(value); }
    template<typename ExecutionMetricsT = Aws::Map<Aws::String, Aws::String>>
    ActivityResponse& WithExecutionMetrics(ExecutionMetricsT&& value) { SetExecutionMetrics(std::forward<ExecutionMetricsT>(value)); return *this;}
    template<typename ExecutionMetricsKeyT = Aws::String, typename ExecutionMetricsValueT = Aws::String>
    ActivityResponse& AddExecutionMetrics(ExecutionMetricsKeyT&& key, ExecutionMetricsValueT&& value) {
      m_executionMetricsHasBeenSet = true; m_executionMetrics.emplace(std::forward<ExecutionMetricsKeyT>(key), std::forward<ExecutionMetricsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    Aws::String m_end;
    bool m_endHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_result;
    bool m_resultHasBeenSet = false;

    Aws::String m_scheduledStart;
    bool m_scheduledStartHasBeenSet = false;

    Aws::String m_start;
    bool m_startHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    int m_successfulEndpointCount{0};
    bool m_successfulEndpointCountHasBeenSet = false;

    int m_timezonesCompletedCount{0};
    bool m_timezonesCompletedCountHasBeenSet = false;

    int m_timezonesTotalCount{0};
    bool m_timezonesTotalCountHasBeenSet = false;

    int m_totalEndpointCount{0};
    bool m_totalEndpointCountHasBeenSet = false;

    Aws::String m_treatmentId;
    bool m_treatmentIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_executionMetrics;
    bool m_executionMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
