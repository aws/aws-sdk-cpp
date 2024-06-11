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
    AWS_NETWORKMANAGER_API CoreNetworkChangeEvent();
    AWS_NETWORKMANAGER_API CoreNetworkChangeEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkChangeEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the type of change event. </p>
     */
    inline const ChangeType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ChangeType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ChangeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CoreNetworkChangeEvent& WithType(const ChangeType& value) { SetType(value); return *this;}
    inline CoreNetworkChangeEvent& WithType(ChangeType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action taken for the change event.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline CoreNetworkChangeEvent& WithAction(const ChangeAction& value) { SetAction(value); return *this;}
    inline CoreNetworkChangeEvent& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline const Aws::String& GetIdentifierPath() const{ return m_identifierPath; }
    inline bool IdentifierPathHasBeenSet() const { return m_identifierPathHasBeenSet; }
    inline void SetIdentifierPath(const Aws::String& value) { m_identifierPathHasBeenSet = true; m_identifierPath = value; }
    inline void SetIdentifierPath(Aws::String&& value) { m_identifierPathHasBeenSet = true; m_identifierPath = std::move(value); }
    inline void SetIdentifierPath(const char* value) { m_identifierPathHasBeenSet = true; m_identifierPath.assign(value); }
    inline CoreNetworkChangeEvent& WithIdentifierPath(const Aws::String& value) { SetIdentifierPath(value); return *this;}
    inline CoreNetworkChangeEvent& WithIdentifierPath(Aws::String&& value) { SetIdentifierPath(std::move(value)); return *this;}
    inline CoreNetworkChangeEvent& WithIdentifierPath(const char* value) { SetIdentifierPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for an event change in status.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline CoreNetworkChangeEvent& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline CoreNetworkChangeEvent& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the core network change event.</p>
     */
    inline const ChangeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ChangeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ChangeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CoreNetworkChangeEvent& WithStatus(const ChangeStatus& value) { SetStatus(value); return *this;}
    inline CoreNetworkChangeEvent& WithStatus(ChangeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the change event.</p>
     */
    inline const CoreNetworkChangeEventValues& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const CoreNetworkChangeEventValues& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(CoreNetworkChangeEventValues&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline CoreNetworkChangeEvent& WithValues(const CoreNetworkChangeEventValues& value) { SetValues(value); return *this;}
    inline CoreNetworkChangeEvent& WithValues(CoreNetworkChangeEventValues&& value) { SetValues(std::move(value)); return *this;}
    ///@}
  private:

    ChangeType m_type;
    bool m_typeHasBeenSet = false;

    ChangeAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_identifierPath;
    bool m_identifierPathHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    ChangeStatus m_status;
    bool m_statusHasBeenSet = false;

    CoreNetworkChangeEventValues m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
