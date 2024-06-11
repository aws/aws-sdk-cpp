/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/LifeCycleLastCutover.h>
#include <aws/mgn/model/LifeCycleLastTest.h>
#include <aws/mgn/model/LifeCycleState.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Lifecycle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LifeCycle">AWS API
   * Reference</a></p>
   */
  class LifeCycle
  {
  public:
    AWS_MGN_API LifeCycle();
    AWS_MGN_API LifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline const Aws::String& GetAddedToServiceDateTime() const{ return m_addedToServiceDateTime; }
    inline bool AddedToServiceDateTimeHasBeenSet() const { return m_addedToServiceDateTimeHasBeenSet; }
    inline void SetAddedToServiceDateTime(const Aws::String& value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime = value; }
    inline void SetAddedToServiceDateTime(Aws::String&& value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime = std::move(value); }
    inline void SetAddedToServiceDateTime(const char* value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime.assign(value); }
    inline LifeCycle& WithAddedToServiceDateTime(const Aws::String& value) { SetAddedToServiceDateTime(value); return *this;}
    inline LifeCycle& WithAddedToServiceDateTime(Aws::String&& value) { SetAddedToServiceDateTime(std::move(value)); return *this;}
    inline LifeCycle& WithAddedToServiceDateTime(const char* value) { SetAddedToServiceDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline const Aws::String& GetElapsedReplicationDuration() const{ return m_elapsedReplicationDuration; }
    inline bool ElapsedReplicationDurationHasBeenSet() const { return m_elapsedReplicationDurationHasBeenSet; }
    inline void SetElapsedReplicationDuration(const Aws::String& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = value; }
    inline void SetElapsedReplicationDuration(Aws::String&& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = std::move(value); }
    inline void SetElapsedReplicationDuration(const char* value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration.assign(value); }
    inline LifeCycle& WithElapsedReplicationDuration(const Aws::String& value) { SetElapsedReplicationDuration(value); return *this;}
    inline LifeCycle& WithElapsedReplicationDuration(Aws::String&& value) { SetElapsedReplicationDuration(std::move(value)); return *this;}
    inline LifeCycle& WithElapsedReplicationDuration(const char* value) { SetElapsedReplicationDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline const Aws::String& GetFirstByteDateTime() const{ return m_firstByteDateTime; }
    inline bool FirstByteDateTimeHasBeenSet() const { return m_firstByteDateTimeHasBeenSet; }
    inline void SetFirstByteDateTime(const Aws::String& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = value; }
    inline void SetFirstByteDateTime(Aws::String&& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = std::move(value); }
    inline void SetFirstByteDateTime(const char* value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime.assign(value); }
    inline LifeCycle& WithFirstByteDateTime(const Aws::String& value) { SetFirstByteDateTime(value); return *this;}
    inline LifeCycle& WithFirstByteDateTime(Aws::String&& value) { SetFirstByteDateTime(std::move(value)); return *this;}
    inline LifeCycle& WithFirstByteDateTime(const char* value) { SetFirstByteDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last Cutover.</p>
     */
    inline const LifeCycleLastCutover& GetLastCutover() const{ return m_lastCutover; }
    inline bool LastCutoverHasBeenSet() const { return m_lastCutoverHasBeenSet; }
    inline void SetLastCutover(const LifeCycleLastCutover& value) { m_lastCutoverHasBeenSet = true; m_lastCutover = value; }
    inline void SetLastCutover(LifeCycleLastCutover&& value) { m_lastCutoverHasBeenSet = true; m_lastCutover = std::move(value); }
    inline LifeCycle& WithLastCutover(const LifeCycleLastCutover& value) { SetLastCutover(value); return *this;}
    inline LifeCycle& WithLastCutover(LifeCycleLastCutover&& value) { SetLastCutover(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline const Aws::String& GetLastSeenByServiceDateTime() const{ return m_lastSeenByServiceDateTime; }
    inline bool LastSeenByServiceDateTimeHasBeenSet() const { return m_lastSeenByServiceDateTimeHasBeenSet; }
    inline void SetLastSeenByServiceDateTime(const Aws::String& value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime = value; }
    inline void SetLastSeenByServiceDateTime(Aws::String&& value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime = std::move(value); }
    inline void SetLastSeenByServiceDateTime(const char* value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime.assign(value); }
    inline LifeCycle& WithLastSeenByServiceDateTime(const Aws::String& value) { SetLastSeenByServiceDateTime(value); return *this;}
    inline LifeCycle& WithLastSeenByServiceDateTime(Aws::String&& value) { SetLastSeenByServiceDateTime(std::move(value)); return *this;}
    inline LifeCycle& WithLastSeenByServiceDateTime(const char* value) { SetLastSeenByServiceDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last Test.</p>
     */
    inline const LifeCycleLastTest& GetLastTest() const{ return m_lastTest; }
    inline bool LastTestHasBeenSet() const { return m_lastTestHasBeenSet; }
    inline void SetLastTest(const LifeCycleLastTest& value) { m_lastTestHasBeenSet = true; m_lastTest = value; }
    inline void SetLastTest(LifeCycleLastTest&& value) { m_lastTestHasBeenSet = true; m_lastTest = std::move(value); }
    inline LifeCycle& WithLastTest(const LifeCycleLastTest& value) { SetLastTest(value); return *this;}
    inline LifeCycle& WithLastTest(LifeCycleLastTest&& value) { SetLastTest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle state.</p>
     */
    inline const LifeCycleState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const LifeCycleState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(LifeCycleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline LifeCycle& WithState(const LifeCycleState& value) { SetState(value); return *this;}
    inline LifeCycle& WithState(LifeCycleState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_addedToServiceDateTime;
    bool m_addedToServiceDateTimeHasBeenSet = false;

    Aws::String m_elapsedReplicationDuration;
    bool m_elapsedReplicationDurationHasBeenSet = false;

    Aws::String m_firstByteDateTime;
    bool m_firstByteDateTimeHasBeenSet = false;

    LifeCycleLastCutover m_lastCutover;
    bool m_lastCutoverHasBeenSet = false;

    Aws::String m_lastSeenByServiceDateTime;
    bool m_lastSeenByServiceDateTimeHasBeenSet = false;

    LifeCycleLastTest m_lastTest;
    bool m_lastTestHasBeenSet = false;

    LifeCycleState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
