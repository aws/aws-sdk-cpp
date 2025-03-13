/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ChangeType.h>
#include <aws/networkmanager/model/ChangeAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/ChangeStatus.h>
#include <aws/networkmanager/model/CoreNetworkChangeEventValues.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network change event. This can be a change to a segment,
   * attachment, route, etc.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkChangeEvent">AWS
   * API Reference</a></p>
   */
  class CoreNetworkChangeEvent
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkChangeEvent() = default;
    AWS_NETWORKMANAGER_API CoreNetworkChangeEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkChangeEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the type of change event. </p>
     */
    inline ChangeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChangeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CoreNetworkChangeEvent& WithType(ChangeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action taken for the change event.</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline CoreNetworkChangeEvent& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline const Aws::String& GetIdentifierPath() const { return m_identifierPath; }
    inline bool IdentifierPathHasBeenSet() const { return m_identifierPathHasBeenSet; }
    template<typename IdentifierPathT = Aws::String>
    void SetIdentifierPath(IdentifierPathT&& value) { m_identifierPathHasBeenSet = true; m_identifierPath = std::forward<IdentifierPathT>(value); }
    template<typename IdentifierPathT = Aws::String>
    CoreNetworkChangeEvent& WithIdentifierPath(IdentifierPathT&& value) { SetIdentifierPath(std::forward<IdentifierPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for an event change in status.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::Utils::DateTime>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::Utils::DateTime>
    CoreNetworkChangeEvent& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the core network change event.</p>
     */
    inline ChangeStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ChangeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CoreNetworkChangeEvent& WithStatus(ChangeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the change event.</p>
     */
    inline const CoreNetworkChangeEventValues& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = CoreNetworkChangeEventValues>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = CoreNetworkChangeEventValues>
    CoreNetworkChangeEvent& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    ///@}
  private:

    ChangeType m_type{ChangeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_identifierPath;
    bool m_identifierPathHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime{};
    bool m_eventTimeHasBeenSet = false;

    ChangeStatus m_status{ChangeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    CoreNetworkChangeEventValues m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
