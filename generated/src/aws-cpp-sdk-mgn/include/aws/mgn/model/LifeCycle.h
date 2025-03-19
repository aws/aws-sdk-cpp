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
    AWS_MGN_API LifeCycle() = default;
    AWS_MGN_API LifeCycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LifeCycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lifecycle added to service data and time.</p>
     */
    inline const Aws::String& GetAddedToServiceDateTime() const { return m_addedToServiceDateTime; }
    inline bool AddedToServiceDateTimeHasBeenSet() const { return m_addedToServiceDateTimeHasBeenSet; }
    template<typename AddedToServiceDateTimeT = Aws::String>
    void SetAddedToServiceDateTime(AddedToServiceDateTimeT&& value) { m_addedToServiceDateTimeHasBeenSet = true; m_addedToServiceDateTime = std::forward<AddedToServiceDateTimeT>(value); }
    template<typename AddedToServiceDateTimeT = Aws::String>
    LifeCycle& WithAddedToServiceDateTime(AddedToServiceDateTimeT&& value) { SetAddedToServiceDateTime(std::forward<AddedToServiceDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle elapsed time and duration.</p>
     */
    inline const Aws::String& GetElapsedReplicationDuration() const { return m_elapsedReplicationDuration; }
    inline bool ElapsedReplicationDurationHasBeenSet() const { return m_elapsedReplicationDurationHasBeenSet; }
    template<typename ElapsedReplicationDurationT = Aws::String>
    void SetElapsedReplicationDuration(ElapsedReplicationDurationT&& value) { m_elapsedReplicationDurationHasBeenSet = true; m_elapsedReplicationDuration = std::forward<ElapsedReplicationDurationT>(value); }
    template<typename ElapsedReplicationDurationT = Aws::String>
    LifeCycle& WithElapsedReplicationDuration(ElapsedReplicationDurationT&& value) { SetElapsedReplicationDuration(std::forward<ElapsedReplicationDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle replication initiation date and time.</p>
     */
    inline const Aws::String& GetFirstByteDateTime() const { return m_firstByteDateTime; }
    inline bool FirstByteDateTimeHasBeenSet() const { return m_firstByteDateTimeHasBeenSet; }
    template<typename FirstByteDateTimeT = Aws::String>
    void SetFirstByteDateTime(FirstByteDateTimeT&& value) { m_firstByteDateTimeHasBeenSet = true; m_firstByteDateTime = std::forward<FirstByteDateTimeT>(value); }
    template<typename FirstByteDateTimeT = Aws::String>
    LifeCycle& WithFirstByteDateTime(FirstByteDateTimeT&& value) { SetFirstByteDateTime(std::forward<FirstByteDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last Cutover.</p>
     */
    inline const LifeCycleLastCutover& GetLastCutover() const { return m_lastCutover; }
    inline bool LastCutoverHasBeenSet() const { return m_lastCutoverHasBeenSet; }
    template<typename LastCutoverT = LifeCycleLastCutover>
    void SetLastCutover(LastCutoverT&& value) { m_lastCutoverHasBeenSet = true; m_lastCutover = std::forward<LastCutoverT>(value); }
    template<typename LastCutoverT = LifeCycleLastCutover>
    LifeCycle& WithLastCutover(LastCutoverT&& value) { SetLastCutover(std::forward<LastCutoverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last seen date and time.</p>
     */
    inline const Aws::String& GetLastSeenByServiceDateTime() const { return m_lastSeenByServiceDateTime; }
    inline bool LastSeenByServiceDateTimeHasBeenSet() const { return m_lastSeenByServiceDateTimeHasBeenSet; }
    template<typename LastSeenByServiceDateTimeT = Aws::String>
    void SetLastSeenByServiceDateTime(LastSeenByServiceDateTimeT&& value) { m_lastSeenByServiceDateTimeHasBeenSet = true; m_lastSeenByServiceDateTime = std::forward<LastSeenByServiceDateTimeT>(value); }
    template<typename LastSeenByServiceDateTimeT = Aws::String>
    LifeCycle& WithLastSeenByServiceDateTime(LastSeenByServiceDateTimeT&& value) { SetLastSeenByServiceDateTime(std::forward<LastSeenByServiceDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last Test.</p>
     */
    inline const LifeCycleLastTest& GetLastTest() const { return m_lastTest; }
    inline bool LastTestHasBeenSet() const { return m_lastTestHasBeenSet; }
    template<typename LastTestT = LifeCycleLastTest>
    void SetLastTest(LastTestT&& value) { m_lastTestHasBeenSet = true; m_lastTest = std::forward<LastTestT>(value); }
    template<typename LastTestT = LifeCycleLastTest>
    LifeCycle& WithLastTest(LastTestT&& value) { SetLastTest(std::forward<LastTestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle state.</p>
     */
    inline LifeCycleState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(LifeCycleState value) { m_stateHasBeenSet = true; m_state = value; }
    inline LifeCycle& WithState(LifeCycleState value) { SetState(value); return *this;}
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

    LifeCycleState m_state{LifeCycleState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
