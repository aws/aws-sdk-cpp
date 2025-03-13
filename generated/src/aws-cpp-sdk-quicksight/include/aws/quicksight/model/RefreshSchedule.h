/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/RefreshFrequency.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/IngestionType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The refresh schedule of a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RefreshSchedule">AWS
   * API Reference</a></p>
   */
  class RefreshSchedule
  {
  public:
    AWS_QUICKSIGHT_API RefreshSchedule() = default;
    AWS_QUICKSIGHT_API RefreshSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RefreshSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for the refresh schedule.</p>
     */
    inline const Aws::String& GetScheduleId() const { return m_scheduleId; }
    inline bool ScheduleIdHasBeenSet() const { return m_scheduleIdHasBeenSet; }
    template<typename ScheduleIdT = Aws::String>
    void SetScheduleId(ScheduleIdT&& value) { m_scheduleIdHasBeenSet = true; m_scheduleId = std::forward<ScheduleIdT>(value); }
    template<typename ScheduleIdT = Aws::String>
    RefreshSchedule& WithScheduleId(ScheduleIdT&& value) { SetScheduleId(std::forward<ScheduleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency for the refresh schedule.</p>
     */
    inline const RefreshFrequency& GetScheduleFrequency() const { return m_scheduleFrequency; }
    inline bool ScheduleFrequencyHasBeenSet() const { return m_scheduleFrequencyHasBeenSet; }
    template<typename ScheduleFrequencyT = RefreshFrequency>
    void SetScheduleFrequency(ScheduleFrequencyT&& value) { m_scheduleFrequencyHasBeenSet = true; m_scheduleFrequency = std::forward<ScheduleFrequencyT>(value); }
    template<typename ScheduleFrequencyT = RefreshFrequency>
    RefreshSchedule& WithScheduleFrequency(ScheduleFrequencyT&& value) { SetScheduleFrequency(std::forward<ScheduleFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time after which the refresh schedule can be started, expressed in
     * <code>YYYY-MM-DDTHH:MM:SS</code> format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartAfterDateTime() const { return m_startAfterDateTime; }
    inline bool StartAfterDateTimeHasBeenSet() const { return m_startAfterDateTimeHasBeenSet; }
    template<typename StartAfterDateTimeT = Aws::Utils::DateTime>
    void SetStartAfterDateTime(StartAfterDateTimeT&& value) { m_startAfterDateTimeHasBeenSet = true; m_startAfterDateTime = std::forward<StartAfterDateTimeT>(value); }
    template<typename StartAfterDateTimeT = Aws::Utils::DateTime>
    RefreshSchedule& WithStartAfterDateTime(StartAfterDateTimeT&& value) { SetStartAfterDateTime(std::forward<StartAfterDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of refresh that a datset undergoes. Valid values are as follows:</p>
     * <ul> <li> <p> <code>FULL_REFRESH</code>: A complete refresh of a dataset.</p>
     * </li> <li> <p> <code>INCREMENTAL_REFRESH</code>: A partial refresh of some rows
     * of a dataset, based on the time window specified.</p> </li> </ul> <p>For more
     * information on full and incremental refreshes, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/refreshing-imported-data.html">Refreshing
     * SPICE data</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline IngestionType GetRefreshType() const { return m_refreshType; }
    inline bool RefreshTypeHasBeenSet() const { return m_refreshTypeHasBeenSet; }
    inline void SetRefreshType(IngestionType value) { m_refreshTypeHasBeenSet = true; m_refreshType = value; }
    inline RefreshSchedule& WithRefreshType(IngestionType value) { SetRefreshType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RefreshSchedule& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduleId;
    bool m_scheduleIdHasBeenSet = false;

    RefreshFrequency m_scheduleFrequency;
    bool m_scheduleFrequencyHasBeenSet = false;

    Aws::Utils::DateTime m_startAfterDateTime{};
    bool m_startAfterDateTimeHasBeenSet = false;

    IngestionType m_refreshType{IngestionType::NOT_SET};
    bool m_refreshTypeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
