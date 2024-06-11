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
    AWS_PINPOINT_API ActivityResponse();
    AWS_PINPOINT_API ActivityResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ActivityResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline ActivityResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline ActivityResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline ActivityResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the campaign that the activity applies to.</p>
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }
    inline ActivityResponse& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}
    inline ActivityResponse& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}
    inline ActivityResponse& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual time, in ISO 8601 format, when the activity was marked CANCELLED
     * or COMPLETED.</p>
     */
    inline const Aws::String& GetEnd() const{ return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(const Aws::String& value) { m_endHasBeenSet = true; m_end = value; }
    inline void SetEnd(Aws::String&& value) { m_endHasBeenSet = true; m_end = std::move(value); }
    inline void SetEnd(const char* value) { m_endHasBeenSet = true; m_end.assign(value); }
    inline ActivityResponse& WithEnd(const Aws::String& value) { SetEnd(value); return *this;}
    inline ActivityResponse& WithEnd(Aws::String&& value) { SetEnd(std::move(value)); return *this;}
    inline ActivityResponse& WithEnd(const char* value) { SetEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the activity.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ActivityResponse& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ActivityResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ActivityResponse& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the activity succeeded. Possible values are SUCCESS and
     * FAIL.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }
    inline ActivityResponse& WithResult(const Aws::String& value) { SetResult(value); return *this;}
    inline ActivityResponse& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}
    inline ActivityResponse& WithResult(const char* value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduled start time, in ISO 8601 format, for the activity.</p>
     */
    inline const Aws::String& GetScheduledStart() const{ return m_scheduledStart; }
    inline bool ScheduledStartHasBeenSet() const { return m_scheduledStartHasBeenSet; }
    inline void SetScheduledStart(const Aws::String& value) { m_scheduledStartHasBeenSet = true; m_scheduledStart = value; }
    inline void SetScheduledStart(Aws::String&& value) { m_scheduledStartHasBeenSet = true; m_scheduledStart = std::move(value); }
    inline void SetScheduledStart(const char* value) { m_scheduledStartHasBeenSet = true; m_scheduledStart.assign(value); }
    inline ActivityResponse& WithScheduledStart(const Aws::String& value) { SetScheduledStart(value); return *this;}
    inline ActivityResponse& WithScheduledStart(Aws::String&& value) { SetScheduledStart(std::move(value)); return *this;}
    inline ActivityResponse& WithScheduledStart(const char* value) { SetScheduledStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual start time, in ISO 8601 format, of the activity.</p>
     */
    inline const Aws::String& GetStart() const{ return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }
    inline ActivityResponse& WithStart(const Aws::String& value) { SetStart(value); return *this;}
    inline ActivityResponse& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}
    inline ActivityResponse& WithStart(const char* value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the activity. Possible values are: PENDING,
     * INITIALIZING, RUNNING, PAUSED, CANCELLED, and COMPLETED.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline ActivityResponse& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline ActivityResponse& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline ActivityResponse& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of endpoints that the campaign successfully delivered
     * messages to.</p>
     */
    inline int GetSuccessfulEndpointCount() const{ return m_successfulEndpointCount; }
    inline bool SuccessfulEndpointCountHasBeenSet() const { return m_successfulEndpointCountHasBeenSet; }
    inline void SetSuccessfulEndpointCount(int value) { m_successfulEndpointCountHasBeenSet = true; m_successfulEndpointCount = value; }
    inline ActivityResponse& WithSuccessfulEndpointCount(int value) { SetSuccessfulEndpointCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of time zones that were completed.</p>
     */
    inline int GetTimezonesCompletedCount() const{ return m_timezonesCompletedCount; }
    inline bool TimezonesCompletedCountHasBeenSet() const { return m_timezonesCompletedCountHasBeenSet; }
    inline void SetTimezonesCompletedCount(int value) { m_timezonesCompletedCountHasBeenSet = true; m_timezonesCompletedCount = value; }
    inline ActivityResponse& WithTimezonesCompletedCount(int value) { SetTimezonesCompletedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of unique time zones that are in the segment for the
     * campaign.</p>
     */
    inline int GetTimezonesTotalCount() const{ return m_timezonesTotalCount; }
    inline bool TimezonesTotalCountHasBeenSet() const { return m_timezonesTotalCountHasBeenSet; }
    inline void SetTimezonesTotalCount(int value) { m_timezonesTotalCountHasBeenSet = true; m_timezonesTotalCount = value; }
    inline ActivityResponse& WithTimezonesTotalCount(int value) { SetTimezonesTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of endpoints that the campaign attempted to deliver messages
     * to.</p>
     */
    inline int GetTotalEndpointCount() const{ return m_totalEndpointCount; }
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
    inline const Aws::String& GetTreatmentId() const{ return m_treatmentId; }
    inline bool TreatmentIdHasBeenSet() const { return m_treatmentIdHasBeenSet; }
    inline void SetTreatmentId(const Aws::String& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = value; }
    inline void SetTreatmentId(Aws::String&& value) { m_treatmentIdHasBeenSet = true; m_treatmentId = std::move(value); }
    inline void SetTreatmentId(const char* value) { m_treatmentIdHasBeenSet = true; m_treatmentId.assign(value); }
    inline ActivityResponse& WithTreatmentId(const Aws::String& value) { SetTreatmentId(value); return *this;}
    inline ActivityResponse& WithTreatmentId(Aws::String&& value) { SetTreatmentId(std::move(value)); return *this;}
    inline ActivityResponse& WithTreatmentId(const char* value) { SetTreatmentId(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetExecutionMetrics() const{ return m_executionMetrics; }
    inline bool ExecutionMetricsHasBeenSet() const { return m_executionMetricsHasBeenSet; }
    inline void SetExecutionMetrics(const Aws::Map<Aws::String, Aws::String>& value) { m_executionMetricsHasBeenSet = true; m_executionMetrics = value; }
    inline void SetExecutionMetrics(Aws::Map<Aws::String, Aws::String>&& value) { m_executionMetricsHasBeenSet = true; m_executionMetrics = std::move(value); }
    inline ActivityResponse& WithExecutionMetrics(const Aws::Map<Aws::String, Aws::String>& value) { SetExecutionMetrics(value); return *this;}
    inline ActivityResponse& WithExecutionMetrics(Aws::Map<Aws::String, Aws::String>&& value) { SetExecutionMetrics(std::move(value)); return *this;}
    inline ActivityResponse& AddExecutionMetrics(const Aws::String& key, const Aws::String& value) { m_executionMetricsHasBeenSet = true; m_executionMetrics.emplace(key, value); return *this; }
    inline ActivityResponse& AddExecutionMetrics(Aws::String&& key, const Aws::String& value) { m_executionMetricsHasBeenSet = true; m_executionMetrics.emplace(std::move(key), value); return *this; }
    inline ActivityResponse& AddExecutionMetrics(const Aws::String& key, Aws::String&& value) { m_executionMetricsHasBeenSet = true; m_executionMetrics.emplace(key, std::move(value)); return *this; }
    inline ActivityResponse& AddExecutionMetrics(Aws::String&& key, Aws::String&& value) { m_executionMetricsHasBeenSet = true; m_executionMetrics.emplace(std::move(key), std::move(value)); return *this; }
    inline ActivityResponse& AddExecutionMetrics(const char* key, Aws::String&& value) { m_executionMetricsHasBeenSet = true; m_executionMetrics.emplace(key, std::move(value)); return *this; }
    inline ActivityResponse& AddExecutionMetrics(Aws::String&& key, const char* value) { m_executionMetricsHasBeenSet = true; m_executionMetrics.emplace(std::move(key), value); return *this; }
    inline ActivityResponse& AddExecutionMetrics(const char* key, const char* value) { m_executionMetricsHasBeenSet = true; m_executionMetrics.emplace(key, value); return *this; }
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

    int m_successfulEndpointCount;
    bool m_successfulEndpointCountHasBeenSet = false;

    int m_timezonesCompletedCount;
    bool m_timezonesCompletedCountHasBeenSet = false;

    int m_timezonesTotalCount;
    bool m_timezonesTotalCountHasBeenSet = false;

    int m_totalEndpointCount;
    bool m_totalEndpointCountHasBeenSet = false;

    Aws::String m_treatmentId;
    bool m_treatmentIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_executionMetrics;
    bool m_executionMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
