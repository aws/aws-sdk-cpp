/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/RepositorySyncStatus.h>
#include <aws/proton/model/RepositorySyncEvent.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>Detail data for a repository sync attempt activated by a push to a
   * repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/RepositorySyncAttempt">AWS
   * API Reference</a></p>
   */
  class RepositorySyncAttempt
  {
  public:
    AWS_PROTON_API RepositorySyncAttempt() = default;
    AWS_PROTON_API RepositorySyncAttempt(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API RepositorySyncAttempt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Detail data for sync attempt events.</p>
     */
    inline const Aws::Vector<RepositorySyncEvent>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<RepositorySyncEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<RepositorySyncEvent>>
    RepositorySyncAttempt& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = RepositorySyncEvent>
    RepositorySyncAttempt& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the sync attempt started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    RepositorySyncAttempt& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync attempt status.</p>
     */
    inline RepositorySyncStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RepositorySyncStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RepositorySyncAttempt& WithStatus(RepositorySyncStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<RepositorySyncEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    RepositorySyncStatus m_status{RepositorySyncStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
