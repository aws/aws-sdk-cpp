/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/TrafficShapingType.h>
#include <aws/mediatailor/model/TrafficShapingRetrievalWindow.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>A complex type that contains settings governing when MediaTailor prefetches
   * ads, and which dynamic variables that MediaTailor includes in the request to the
   * ad decision server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PrefetchRetrieval">AWS
   * API Reference</a></p>
   */
  class PrefetchRetrieval
  {
  public:
    AWS_MEDIATAILOR_API PrefetchRetrieval() = default;
    AWS_MEDIATAILOR_API PrefetchRetrieval(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API PrefetchRetrieval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dynamic variables to use for substitution during prefetch requests to the
     * ad decision server (ADS).</p> <p>You initially configure <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables.html">dynamic
     * variables</a> for the ADS URL when you set up your playback configuration. When
     * you specify <code>DynamicVariables</code> for prefetch retrieval, MediaTailor
     * includes the dynamic variables in the request to the ADS.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDynamicVariables() const { return m_dynamicVariables; }
    inline bool DynamicVariablesHasBeenSet() const { return m_dynamicVariablesHasBeenSet; }
    template<typename DynamicVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetDynamicVariables(DynamicVariablesT&& value) { m_dynamicVariablesHasBeenSet = true; m_dynamicVariables = std::forward<DynamicVariablesT>(value); }
    template<typename DynamicVariablesT = Aws::Map<Aws::String, Aws::String>>
    PrefetchRetrieval& WithDynamicVariables(DynamicVariablesT&& value) { SetDynamicVariables(std::forward<DynamicVariablesT>(value)); return *this;}
    template<typename DynamicVariablesKeyT = Aws::String, typename DynamicVariablesValueT = Aws::String>
    PrefetchRetrieval& AddDynamicVariables(DynamicVariablesKeyT&& key, DynamicVariablesValueT&& value) {
      m_dynamicVariablesHasBeenSet = true; m_dynamicVariables.emplace(std::forward<DynamicVariablesKeyT>(key), std::forward<DynamicVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time when prefetch retrieval ends for the ad break. Prefetching will be
     * attempted for manifest requests that occur at or before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    PrefetchRetrieval& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when prefetch retrievals can start for this break. Ad prefetching
     * will be attempted for manifest requests that occur at or after this time.
     * Defaults to the current time. If not specified, the prefetch retrieval starts as
     * soon as possible.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    PrefetchRetrieval& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if this configuration uses a retrieval window for traffic shaping
     * and limiting the number of requests to the ADS at one time.</p>
     */
    inline TrafficShapingType GetTrafficShapingType() const { return m_trafficShapingType; }
    inline bool TrafficShapingTypeHasBeenSet() const { return m_trafficShapingTypeHasBeenSet; }
    inline void SetTrafficShapingType(TrafficShapingType value) { m_trafficShapingTypeHasBeenSet = true; m_trafficShapingType = value; }
    inline PrefetchRetrieval& WithTrafficShapingType(TrafficShapingType value) { SetTrafficShapingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for spreading ADS traffic across a set window instead of
     * sending ADS requests for all sessions at the same time.</p>
     */
    inline const TrafficShapingRetrievalWindow& GetTrafficShapingRetrievalWindow() const { return m_trafficShapingRetrievalWindow; }
    inline bool TrafficShapingRetrievalWindowHasBeenSet() const { return m_trafficShapingRetrievalWindowHasBeenSet; }
    template<typename TrafficShapingRetrievalWindowT = TrafficShapingRetrievalWindow>
    void SetTrafficShapingRetrievalWindow(TrafficShapingRetrievalWindowT&& value) { m_trafficShapingRetrievalWindowHasBeenSet = true; m_trafficShapingRetrievalWindow = std::forward<TrafficShapingRetrievalWindowT>(value); }
    template<typename TrafficShapingRetrievalWindowT = TrafficShapingRetrievalWindow>
    PrefetchRetrieval& WithTrafficShapingRetrievalWindow(TrafficShapingRetrievalWindowT&& value) { SetTrafficShapingRetrievalWindow(std::forward<TrafficShapingRetrievalWindowT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_dynamicVariables;
    bool m_dynamicVariablesHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    TrafficShapingType m_trafficShapingType{TrafficShapingType::NOT_SET};
    bool m_trafficShapingTypeHasBeenSet = false;

    TrafficShapingRetrievalWindow m_trafficShapingRetrievalWindow;
    bool m_trafficShapingRetrievalWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
