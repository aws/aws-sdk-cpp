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
    AWS_QUICKSIGHT_API AssetBundleImportJobRefreshScheduleOverrideParameters();
    AWS_QUICKSIGHT_API AssetBundleImportJobRefreshScheduleOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobRefreshScheduleOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * that is being overridden. This structure is used together with the
     * <code>ScheduleID</code> structure.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * that is being overridden. This structure is used together with the
     * <code>ScheduleID</code> structure.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * that is being overridden. This structure is used together with the
     * <code>ScheduleID</code> structure.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * that is being overridden. This structure is used together with the
     * <code>ScheduleID</code> structure.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * that is being overridden. This structure is used together with the
     * <code>ScheduleID</code> structure.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * that is being overridden. This structure is used together with the
     * <code>ScheduleID</code> structure.</p>
     */
    inline AssetBundleImportJobRefreshScheduleOverrideParameters& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * that is being overridden. This structure is used together with the
     * <code>ScheduleID</code> structure.</p>
     */
    inline AssetBundleImportJobRefreshScheduleOverrideParameters& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * that is being overridden. This structure is used together with the
     * <code>ScheduleID</code> structure.</p>
     */
    inline AssetBundleImportJobRefreshScheduleOverrideParameters& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * being overridden. This structure is used together with the
     * <code>DataSetId</code> structure.</p>
     */
    inline const Aws::String& GetScheduleId() const{ return m_scheduleId; }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * being overridden. This structure is used together with the
     * <code>DataSetId</code> structure.</p>
     */
    inline bool ScheduleIdHasBeenSet() const { return m_scheduleIdHasBeenSet; }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * being overridden. This structure is used together with the
     * <code>DataSetId</code> structure.</p>
     */
    inline void SetScheduleId(const Aws::String& value) { m_scheduleIdHasBeenSet = true; m_scheduleId = value; }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * being overridden. This structure is used together with the
     * <code>DataSetId</code> structure.</p>
     */
    inline void SetScheduleId(Aws::String&& value) { m_scheduleIdHasBeenSet = true; m_scheduleId = std::move(value); }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * being overridden. This structure is used together with the
     * <code>DataSetId</code> structure.</p>
     */
    inline void SetScheduleId(const char* value) { m_scheduleIdHasBeenSet = true; m_scheduleId.assign(value); }

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * being overridden. This structure is used together with the
     * <code>DataSetId</code> structure.</p>
     */
    inline AssetBundleImportJobRefreshScheduleOverrideParameters& WithScheduleId(const Aws::String& value) { SetScheduleId(value); return *this;}

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * being overridden. This structure is used together with the
     * <code>DataSetId</code> structure.</p>
     */
    inline AssetBundleImportJobRefreshScheduleOverrideParameters& WithScheduleId(Aws::String&& value) { SetScheduleId(std::move(value)); return *this;}

    /**
     * <p>A partial identifier for the specific <code>RefreshSchedule</code> resource
     * being overridden. This structure is used together with the
     * <code>DataSetId</code> structure.</p>
     */
    inline AssetBundleImportJobRefreshScheduleOverrideParameters& WithScheduleId(const char* value) { SetScheduleId(value); return *this;}


    /**
     * <p>An override for the <code>StartAfterDateTime</code> of a
     * <code>RefreshSchedule</code>. Make sure that the <code>StartAfterDateTime</code>
     * is set to a time that takes place in the future.</p>
     */
    inline const Aws::Utils::DateTime& GetStartAfterDateTime() const{ return m_startAfterDateTime; }

    /**
     * <p>An override for the <code>StartAfterDateTime</code> of a
     * <code>RefreshSchedule</code>. Make sure that the <code>StartAfterDateTime</code>
     * is set to a time that takes place in the future.</p>
     */
    inline bool StartAfterDateTimeHasBeenSet() const { return m_startAfterDateTimeHasBeenSet; }

    /**
     * <p>An override for the <code>StartAfterDateTime</code> of a
     * <code>RefreshSchedule</code>. Make sure that the <code>StartAfterDateTime</code>
     * is set to a time that takes place in the future.</p>
     */
    inline void SetStartAfterDateTime(const Aws::Utils::DateTime& value) { m_startAfterDateTimeHasBeenSet = true; m_startAfterDateTime = value; }

    /**
     * <p>An override for the <code>StartAfterDateTime</code> of a
     * <code>RefreshSchedule</code>. Make sure that the <code>StartAfterDateTime</code>
     * is set to a time that takes place in the future.</p>
     */
    inline void SetStartAfterDateTime(Aws::Utils::DateTime&& value) { m_startAfterDateTimeHasBeenSet = true; m_startAfterDateTime = std::move(value); }

    /**
     * <p>An override for the <code>StartAfterDateTime</code> of a
     * <code>RefreshSchedule</code>. Make sure that the <code>StartAfterDateTime</code>
     * is set to a time that takes place in the future.</p>
     */
    inline AssetBundleImportJobRefreshScheduleOverrideParameters& WithStartAfterDateTime(const Aws::Utils::DateTime& value) { SetStartAfterDateTime(value); return *this;}

    /**
     * <p>An override for the <code>StartAfterDateTime</code> of a
     * <code>RefreshSchedule</code>. Make sure that the <code>StartAfterDateTime</code>
     * is set to a time that takes place in the future.</p>
     */
    inline AssetBundleImportJobRefreshScheduleOverrideParameters& WithStartAfterDateTime(Aws::Utils::DateTime&& value) { SetStartAfterDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_scheduleId;
    bool m_scheduleIdHasBeenSet = false;

    Aws::Utils::DateTime m_startAfterDateTime;
    bool m_startAfterDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
