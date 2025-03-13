/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A list of overrides for a specific <code>RefreshsSchedule</code> resource
   * that is present in the asset bundle that is imported.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobRefreshScheduleOverrideParameters">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobRefreshScheduleOverrideParameters
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobRefreshScheduleOverrideParameters() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobRefreshScheduleOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobRefreshScheduleOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * that is being overridden. This structure is used together with the
     * <code>ScheduleID</code> structure.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    AssetBundleImportJobRefreshScheduleOverrideParameters& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * being overridden. This structure is used together with the
     * <code>DataSetId</code> structure.</p>
     */
    inline const Aws::String& GetScheduleId() const { return m_scheduleId; }
    inline bool ScheduleIdHasBeenSet() const { return m_scheduleIdHasBeenSet; }
    template<typename ScheduleIdT = Aws::String>
    void SetScheduleId(ScheduleIdT&& value) { m_scheduleIdHasBeenSet = true; m_scheduleId = std::forward<ScheduleIdT>(value); }
    template<typename ScheduleIdT = Aws::String>
    AssetBundleImportJobRefreshScheduleOverrideParameters& WithScheduleId(ScheduleIdT&& value) { SetScheduleId(std::forward<ScheduleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An override for the <code>StartAfterDateTime</code> of a
     * <code>RefreshSchedule</code>. Make sure that the <code>StartAfterDateTime</code>
     * is set to a time that takes place in the future.</p>
     */
    inline const Aws::Utils::DateTime& GetStartAfterDateTime() const { return m_startAfterDateTime; }
    inline bool StartAfterDateTimeHasBeenSet() const { return m_startAfterDateTimeHasBeenSet; }
    template<typename StartAfterDateTimeT = Aws::Utils::DateTime>
    void SetStartAfterDateTime(StartAfterDateTimeT&& value) { m_startAfterDateTimeHasBeenSet = true; m_startAfterDateTime = std::forward<StartAfterDateTimeT>(value); }
    template<typename StartAfterDateTimeT = Aws::Utils::DateTime>
    AssetBundleImportJobRefreshScheduleOverrideParameters& WithStartAfterDateTime(StartAfterDateTimeT&& value) { SetStartAfterDateTime(std::forward<StartAfterDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_scheduleId;
    bool m_scheduleIdHasBeenSet = false;

    Aws::Utils::DateTime m_startAfterDateTime{};
    bool m_startAfterDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
