/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediatailor/model/RecurringConsumption.h>
#include <aws/mediatailor/model/RecurringRetrieval.h>
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
   * <p>The configuration that defines how MediaTailor performs recurring prefetch.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/RecurringPrefetchConfiguration">AWS
   * API Reference</a></p>
   */
  class RecurringPrefetchConfiguration
  {
  public:
    AWS_MEDIATAILOR_API RecurringPrefetchConfiguration() = default;
    AWS_MEDIATAILOR_API RecurringPrefetchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API RecurringPrefetchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time for the window that MediaTailor prefetches and inserts ads in
     * a live event. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    RecurringPrefetchConfiguration& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the window that MediaTailor prefetches and inserts ads in a
     * live event. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    RecurringPrefetchConfiguration& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings that determine how and when MediaTailor places prefetched ads
     * into upcoming ad breaks for recurring prefetch scedules.</p>
     */
    inline const RecurringConsumption& GetRecurringConsumption() const { return m_recurringConsumption; }
    inline bool RecurringConsumptionHasBeenSet() const { return m_recurringConsumptionHasBeenSet; }
    template<typename RecurringConsumptionT = RecurringConsumption>
    void SetRecurringConsumption(RecurringConsumptionT&& value) { m_recurringConsumptionHasBeenSet = true; m_recurringConsumption = std::forward<RecurringConsumptionT>(value); }
    template<typename RecurringConsumptionT = RecurringConsumption>
    RecurringPrefetchConfiguration& WithRecurringConsumption(RecurringConsumptionT&& value) { SetRecurringConsumption(std::forward<RecurringConsumptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for prefetch ad retrieval from the ADS.</p>
     */
    inline const RecurringRetrieval& GetRecurringRetrieval() const { return m_recurringRetrieval; }
    inline bool RecurringRetrievalHasBeenSet() const { return m_recurringRetrievalHasBeenSet; }
    template<typename RecurringRetrievalT = RecurringRetrieval>
    void SetRecurringRetrieval(RecurringRetrievalT&& value) { m_recurringRetrievalHasBeenSet = true; m_recurringRetrieval = std::forward<RecurringRetrievalT>(value); }
    template<typename RecurringRetrievalT = RecurringRetrieval>
    RecurringPrefetchConfiguration& WithRecurringRetrieval(RecurringRetrievalT&& value) { SetRecurringRetrieval(std::forward<RecurringRetrievalT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    RecurringConsumption m_recurringConsumption;
    bool m_recurringConsumptionHasBeenSet = false;

    RecurringRetrieval m_recurringRetrieval;
    bool m_recurringRetrievalHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
