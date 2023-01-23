/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ChangeType.h>
#include <aws/networkmanager/model/ChangeAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkChangeValues.h>
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
   * <p>Details describing a core network change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkChange">AWS
   * API Reference</a></p>
   */
  class CoreNetworkChange
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkChange();
    AWS_NETWORKMANAGER_API CoreNetworkChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of change.</p>
     */
    inline const ChangeType& GetType() const{ return m_type; }

    /**
     * <p>The type of change.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of change.</p>
     */
    inline void SetType(const ChangeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of change.</p>
     */
    inline void SetType(ChangeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of change.</p>
     */
    inline CoreNetworkChange& WithType(const ChangeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of change.</p>
     */
    inline CoreNetworkChange& WithType(ChangeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The action to take for a core network.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to take for a core network.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to take for a core network.</p>
     */
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to take for a core network.</p>
     */
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to take for a core network.</p>
     */
    inline CoreNetworkChange& WithAction(const ChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to take for a core network.</p>
     */
    inline CoreNetworkChange& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The resource identifier.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The resource identifier.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The resource identifier.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The resource identifier.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The resource identifier.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The resource identifier.</p>
     */
    inline CoreNetworkChange& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The resource identifier.</p>
     */
    inline CoreNetworkChange& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The resource identifier.</p>
     */
    inline CoreNetworkChange& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The previous values for a core network.</p>
     */
    inline const CoreNetworkChangeValues& GetPreviousValues() const{ return m_previousValues; }

    /**
     * <p>The previous values for a core network.</p>
     */
    inline bool PreviousValuesHasBeenSet() const { return m_previousValuesHasBeenSet; }

    /**
     * <p>The previous values for a core network.</p>
     */
    inline void SetPreviousValues(const CoreNetworkChangeValues& value) { m_previousValuesHasBeenSet = true; m_previousValues = value; }

    /**
     * <p>The previous values for a core network.</p>
     */
    inline void SetPreviousValues(CoreNetworkChangeValues&& value) { m_previousValuesHasBeenSet = true; m_previousValues = std::move(value); }

    /**
     * <p>The previous values for a core network.</p>
     */
    inline CoreNetworkChange& WithPreviousValues(const CoreNetworkChangeValues& value) { SetPreviousValues(value); return *this;}

    /**
     * <p>The previous values for a core network.</p>
     */
    inline CoreNetworkChange& WithPreviousValues(CoreNetworkChangeValues&& value) { SetPreviousValues(std::move(value)); return *this;}


    /**
     * <p>The new value for a core network</p>
     */
    inline const CoreNetworkChangeValues& GetNewValues() const{ return m_newValues; }

    /**
     * <p>The new value for a core network</p>
     */
    inline bool NewValuesHasBeenSet() const { return m_newValuesHasBeenSet; }

    /**
     * <p>The new value for a core network</p>
     */
    inline void SetNewValues(const CoreNetworkChangeValues& value) { m_newValuesHasBeenSet = true; m_newValues = value; }

    /**
     * <p>The new value for a core network</p>
     */
    inline void SetNewValues(CoreNetworkChangeValues&& value) { m_newValuesHasBeenSet = true; m_newValues = std::move(value); }

    /**
     * <p>The new value for a core network</p>
     */
    inline CoreNetworkChange& WithNewValues(const CoreNetworkChangeValues& value) { SetNewValues(value); return *this;}

    /**
     * <p>The new value for a core network</p>
     */
    inline CoreNetworkChange& WithNewValues(CoreNetworkChangeValues&& value) { SetNewValues(std::move(value)); return *this;}


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
    inline CoreNetworkChange& WithIdentifierPath(const Aws::String& value) { SetIdentifierPath(value); return *this;}

    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline CoreNetworkChange& WithIdentifierPath(Aws::String&& value) { SetIdentifierPath(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the path for a change within the changeset. For example,
     * the <code>IdentifierPath</code> for a core network segment change might be
     * <code>"CORE_NETWORK_SEGMENT/us-east-1/devsegment"</code>.</p>
     */
    inline CoreNetworkChange& WithIdentifierPath(const char* value) { SetIdentifierPath(value); return *this;}

  private:

    ChangeType m_type;
    bool m_typeHasBeenSet = false;

    ChangeAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    CoreNetworkChangeValues m_previousValues;
    bool m_previousValuesHasBeenSet = false;

    CoreNetworkChangeValues m_newValues;
    bool m_newValuesHasBeenSet = false;

    Aws::String m_identifierPath;
    bool m_identifierPathHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
