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
    AWS_QUICKSIGHT_API RefreshSchedule();
    AWS_QUICKSIGHT_API RefreshSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RefreshSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier for the refresh schedule.</p>
     */
    inline const Aws::String& GetScheduleId() const{ return m_scheduleId; }

    /**
     * <p>An identifier for the refresh schedule.</p>
     */
    inline bool ScheduleIdHasBeenSet() const { return m_scheduleIdHasBeenSet; }

    /**
     * <p>An identifier for the refresh schedule.</p>
     */
    inline void SetScheduleId(const Aws::String& value) { m_scheduleIdHasBeenSet = true; m_scheduleId = value; }

    /**
     * <p>An identifier for the refresh schedule.</p>
     */
    inline void SetScheduleId(Aws::String&& value) { m_scheduleIdHasBeenSet = true; m_scheduleId = std::move(value); }

    /**
     * <p>An identifier for the refresh schedule.</p>
     */
    inline void SetScheduleId(const char* value) { m_scheduleIdHasBeenSet = true; m_scheduleId.assign(value); }

    /**
     * <p>An identifier for the refresh schedule.</p>
     */
    inline RefreshSchedule& WithScheduleId(const Aws::String& value) { SetScheduleId(value); return *this;}

    /**
     * <p>An identifier for the refresh schedule.</p>
     */
    inline RefreshSchedule& WithScheduleId(Aws::String&& value) { SetScheduleId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the refresh schedule.</p>
     */
    inline RefreshSchedule& WithScheduleId(const char* value) { SetScheduleId(value); return *this;}


    /**
     * <p>The frequency for the refresh schedule.</p>
     */
    inline const RefreshFrequency& GetScheduleFrequency() const{ return m_scheduleFrequency; }

    /**
     * <p>The frequency for the refresh schedule.</p>
     */
    inline bool ScheduleFrequencyHasBeenSet() const { return m_scheduleFrequencyHasBeenSet; }

    /**
     * <p>The frequency for the refresh schedule.</p>
     */
    inline void SetScheduleFrequency(const RefreshFrequency& value) { m_scheduleFrequencyHasBeenSet = true; m_scheduleFrequency = value; }

    /**
     * <p>The frequency for the refresh schedule.</p>
     */
    inline void SetScheduleFrequency(RefreshFrequency&& value) { m_scheduleFrequencyHasBeenSet = true; m_scheduleFrequency = std::move(value); }

    /**
     * <p>The frequency for the refresh schedule.</p>
     */
    inline RefreshSchedule& WithScheduleFrequency(const RefreshFrequency& value) { SetScheduleFrequency(value); return *this;}

    /**
     * <p>The frequency for the refresh schedule.</p>
     */
    inline RefreshSchedule& WithScheduleFrequency(RefreshFrequency&& value) { SetScheduleFrequency(std::move(value)); return *this;}


    /**
     * <p>Time after which the refresh schedule can be started, expressed in
     * <code>YYYY-MM-DDTHH:MM:SS</code> format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartAfterDateTime() const{ return m_startAfterDateTime; }

    /**
     * <p>Time after which the refresh schedule can be started, expressed in
     * <code>YYYY-MM-DDTHH:MM:SS</code> format.</p>
     */
    inline bool StartAfterDateTimeHasBeenSet() const { return m_startAfterDateTimeHasBeenSet; }

    /**
     * <p>Time after which the refresh schedule can be started, expressed in
     * <code>YYYY-MM-DDTHH:MM:SS</code> format.</p>
     */
    inline void SetStartAfterDateTime(const Aws::Utils::DateTime& value) { m_startAfterDateTimeHasBeenSet = true; m_startAfterDateTime = value; }

    /**
     * <p>Time after which the refresh schedule can be started, expressed in
     * <code>YYYY-MM-DDTHH:MM:SS</code> format.</p>
     */
    inline void SetStartAfterDateTime(Aws::Utils::DateTime&& value) { m_startAfterDateTimeHasBeenSet = true; m_startAfterDateTime = std::move(value); }

    /**
     * <p>Time after which the refresh schedule can be started, expressed in
     * <code>YYYY-MM-DDTHH:MM:SS</code> format.</p>
     */
    inline RefreshSchedule& WithStartAfterDateTime(const Aws::Utils::DateTime& value) { SetStartAfterDateTime(value); return *this;}

    /**
     * <p>Time after which the refresh schedule can be started, expressed in
     * <code>YYYY-MM-DDTHH:MM:SS</code> format.</p>
     */
    inline RefreshSchedule& WithStartAfterDateTime(Aws::Utils::DateTime&& value) { SetStartAfterDateTime(std::move(value)); return *this;}


    /**
     * <p>The type of refresh that a datset undergoes. Valid values are as follows:</p>
     * <ul> <li> <p> <code>FULL_REFRESH</code>: A complete refresh of a dataset.</p>
     * </li> <li> <p> <code>INCREMENTAL_REFRESH</code>: A partial refresh of some rows
     * of a dataset, based on the time window specified.</p> </li> </ul> <p>For more
     * information on full and incremental refreshes, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/refreshing-imported-data.html">Refreshing
     * SPICE data</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const IngestionType& GetRefreshType() const{ return m_refreshType; }

    /**
     * <p>The type of refresh that a datset undergoes. Valid values are as follows:</p>
     * <ul> <li> <p> <code>FULL_REFRESH</code>: A complete refresh of a dataset.</p>
     * </li> <li> <p> <code>INCREMENTAL_REFRESH</code>: A partial refresh of some rows
     * of a dataset, based on the time window specified.</p> </li> </ul> <p>For more
     * information on full and incremental refreshes, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/refreshing-imported-data.html">Refreshing
     * SPICE data</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool RefreshTypeHasBeenSet() const { return m_refreshTypeHasBeenSet; }

    /**
     * <p>The type of refresh that a datset undergoes. Valid values are as follows:</p>
     * <ul> <li> <p> <code>FULL_REFRESH</code>: A complete refresh of a dataset.</p>
     * </li> <li> <p> <code>INCREMENTAL_REFRESH</code>: A partial refresh of some rows
     * of a dataset, based on the time window specified.</p> </li> </ul> <p>For more
     * information on full and incremental refreshes, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/refreshing-imported-data.html">Refreshing
     * SPICE data</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetRefreshType(const IngestionType& value) { m_refreshTypeHasBeenSet = true; m_refreshType = value; }

    /**
     * <p>The type of refresh that a datset undergoes. Valid values are as follows:</p>
     * <ul> <li> <p> <code>FULL_REFRESH</code>: A complete refresh of a dataset.</p>
     * </li> <li> <p> <code>INCREMENTAL_REFRESH</code>: A partial refresh of some rows
     * of a dataset, based on the time window specified.</p> </li> </ul> <p>For more
     * information on full and incremental refreshes, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/refreshing-imported-data.html">Refreshing
     * SPICE data</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetRefreshType(IngestionType&& value) { m_refreshTypeHasBeenSet = true; m_refreshType = std::move(value); }

    /**
     * <p>The type of refresh that a datset undergoes. Valid values are as follows:</p>
     * <ul> <li> <p> <code>FULL_REFRESH</code>: A complete refresh of a dataset.</p>
     * </li> <li> <p> <code>INCREMENTAL_REFRESH</code>: A partial refresh of some rows
     * of a dataset, based on the time window specified.</p> </li> </ul> <p>For more
     * information on full and incremental refreshes, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/refreshing-imported-data.html">Refreshing
     * SPICE data</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline RefreshSchedule& WithRefreshType(const IngestionType& value) { SetRefreshType(value); return *this;}

    /**
     * <p>The type of refresh that a datset undergoes. Valid values are as follows:</p>
     * <ul> <li> <p> <code>FULL_REFRESH</code>: A complete refresh of a dataset.</p>
     * </li> <li> <p> <code>INCREMENTAL_REFRESH</code>: A partial refresh of some rows
     * of a dataset, based on the time window specified.</p> </li> </ul> <p>For more
     * information on full and incremental refreshes, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/refreshing-imported-data.html">Refreshing
     * SPICE data</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline RefreshSchedule& WithRefreshType(IngestionType&& value) { SetRefreshType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline RefreshSchedule& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline RefreshSchedule& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the refresh schedule.</p>
     */
    inline RefreshSchedule& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_scheduleId;
    bool m_scheduleIdHasBeenSet = false;

    RefreshFrequency m_scheduleFrequency;
    bool m_scheduleFrequencyHasBeenSet = false;

    Aws::Utils::DateTime m_startAfterDateTime;
    bool m_startAfterDateTimeHasBeenSet = false;

    IngestionType m_refreshType;
    bool m_refreshTypeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
