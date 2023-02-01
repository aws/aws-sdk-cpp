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


    /**
     * <p>Describes the type of change event. </p>
     */
    inline const ChangeType& GetType() const{ return m_type; }

    /**
     * <p>Describes the type of change event. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Describes the type of change event. </p>
     */
    inline void SetType(const ChangeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Describes the type of change event. </p>
     */
    inline void SetType(ChangeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Describes the type of change event. </p>
     */
    inline CoreNetworkChangeEvent& WithType(const ChangeType& value) { SetType(value); return *this;}

    /**
     * <p>Describes the type of change event. </p>
     */
    inline CoreNetworkChangeEvent& WithType(ChangeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The action taken for the change event.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>The action taken for the change event.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action taken for the change event.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action taken for the change event.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action taken for the change event.</p>
     */
    inline CoreNetworkChangeEvent& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action taken for the change event.</p>
     */
    inline CoreNetworkChangeEvent& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline const Aws::String& GetIdentifierPath() const{ return m_identifierPath; }

    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline bool IdentifierPathHasBeenSet() const { return m_identifierPathHasBeenSet; }

    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline void SetIdentifierPath(const Aws::String& value) { m_identifierPathHasBeenSet = true; m_identifierPath = value; }

    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline void SetIdentifierPath(Aws::String&& value) { m_identifierPathHasBeenSet = true; m_identifierPath = std::move(value); }

    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline void SetIdentifierPath(const char* value) { m_identifierPathHasBeenSet = true; m_identifierPath.assign(value); }

    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline CoreNetworkChangeEvent& WithIdentifierPath(const Aws::String& value) { SetIdentifierPath(value); return *this;}

    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline CoreNetworkChangeEvent& WithIdentifierPath(Aws::String&& value) { SetIdentifierPath(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline CoreNetworkChangeEvent& WithIdentifierPath(const char* value) { SetIdentifierPath(value); return *this;}


    /**
     * <p>The timestamp for an event change in status.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>The timestamp for an event change in status.</p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p>The timestamp for an event change in status.</p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>The timestamp for an event change in status.</p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>The timestamp for an event change in status.</p>
     */
    inline CoreNetworkChangeEvent& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p>The timestamp for an event change in status.</p>
     */
    inline CoreNetworkChangeEvent& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}


    /**
     * <p>The status of the core network change event.</p>
     */
    inline const ChangeStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the core network change event.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the core network change event.</p>
     */
    inline void SetStatus(const ChangeStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the core network change event.</p>
     */
    inline void SetStatus(ChangeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the core network change event.</p>
     */
    inline CoreNetworkChangeEvent& WithStatus(const ChangeStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the core network change event.</p>
     */
    inline CoreNetworkChangeEvent& WithStatus(ChangeStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Details of the change event.</p>
     */
    inline const CoreNetworkChangeEventValues& GetValues() const{ return m_values; }

    /**
     * <p>Details of the change event.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>Details of the change event.</p>
     */
    inline void SetValues(const CoreNetworkChangeEventValues& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>Details of the change event.</p>
     */
    inline void SetValues(CoreNetworkChangeEventValues&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>Details of the change event.</p>
     */
    inline CoreNetworkChangeEvent& WithValues(const CoreNetworkChangeEventValues& value) { SetValues(value); return *this;}

    /**
     * <p>Details of the change event.</p>
     */
    inline CoreNetworkChangeEvent& WithValues(CoreNetworkChangeEventValues&& value) { SetValues(std::move(value)); return *this;}

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
