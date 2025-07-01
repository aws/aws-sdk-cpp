/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DbServerPatchingStatus.h>
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
namespace odb
{
namespace Model
{

  /**
   * <p>The scheduling details for the quarterly maintenance window. Patching and
   * system updates take place during the maintenance window.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DbServerPatchingDetails">AWS
   * API Reference</a></p>
   */
  class DbServerPatchingDetails
  {
  public:
    AWS_ODB_API DbServerPatchingDetails() = default;
    AWS_ODB_API DbServerPatchingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API DbServerPatchingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Estimated time, in minutes, to patch one database server.</p>
     */
    inline int GetEstimatedPatchDuration() const { return m_estimatedPatchDuration; }
    inline bool EstimatedPatchDurationHasBeenSet() const { return m_estimatedPatchDurationHasBeenSet; }
    inline void SetEstimatedPatchDuration(int value) { m_estimatedPatchDurationHasBeenSet = true; m_estimatedPatchDuration = value; }
    inline DbServerPatchingDetails& WithEstimatedPatchDuration(int value) { SetEstimatedPatchDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the patching operation. Possible values are
     * <code>SCHEDULED</code>, <code>MAINTENANCE_IN_PROGRESS</code>,
     * <code>FAILED</code>, and <code>COMPLETE</code>.</p>
     */
    inline DbServerPatchingStatus GetPatchingStatus() const { return m_patchingStatus; }
    inline bool PatchingStatusHasBeenSet() const { return m_patchingStatusHasBeenSet; }
    inline void SetPatchingStatus(DbServerPatchingStatus value) { m_patchingStatusHasBeenSet = true; m_patchingStatus = value; }
    inline DbServerPatchingDetails& WithPatchingStatus(DbServerPatchingStatus value) { SetPatchingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the patching operation ended.</p>
     */
    inline const Aws::String& GetTimePatchingEnded() const { return m_timePatchingEnded; }
    inline bool TimePatchingEndedHasBeenSet() const { return m_timePatchingEndedHasBeenSet; }
    template<typename TimePatchingEndedT = Aws::String>
    void SetTimePatchingEnded(TimePatchingEndedT&& value) { m_timePatchingEndedHasBeenSet = true; m_timePatchingEnded = std::forward<TimePatchingEndedT>(value); }
    template<typename TimePatchingEndedT = Aws::String>
    DbServerPatchingDetails& WithTimePatchingEnded(TimePatchingEndedT&& value) { SetTimePatchingEnded(std::forward<TimePatchingEndedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the patching operation started.</p>
     */
    inline const Aws::String& GetTimePatchingStarted() const { return m_timePatchingStarted; }
    inline bool TimePatchingStartedHasBeenSet() const { return m_timePatchingStartedHasBeenSet; }
    template<typename TimePatchingStartedT = Aws::String>
    void SetTimePatchingStarted(TimePatchingStartedT&& value) { m_timePatchingStartedHasBeenSet = true; m_timePatchingStarted = std::forward<TimePatchingStartedT>(value); }
    template<typename TimePatchingStartedT = Aws::String>
    DbServerPatchingDetails& WithTimePatchingStarted(TimePatchingStartedT&& value) { SetTimePatchingStarted(std::forward<TimePatchingStartedT>(value)); return *this;}
    ///@}
  private:

    int m_estimatedPatchDuration{0};
    bool m_estimatedPatchDurationHasBeenSet = false;

    DbServerPatchingStatus m_patchingStatus{DbServerPatchingStatus::NOT_SET};
    bool m_patchingStatusHasBeenSet = false;

    Aws::String m_timePatchingEnded;
    bool m_timePatchingEndedHasBeenSet = false;

    Aws::String m_timePatchingStarted;
    bool m_timePatchingStartedHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
