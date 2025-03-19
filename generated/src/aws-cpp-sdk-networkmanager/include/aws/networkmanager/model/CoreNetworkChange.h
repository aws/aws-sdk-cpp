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
    AWS_NETWORKMANAGER_API CoreNetworkChange() = default;
    AWS_NETWORKMANAGER_API CoreNetworkChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of change.</p>
     */
    inline ChangeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChangeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CoreNetworkChange& WithType(ChangeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take for a core network.</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline CoreNetworkChange& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource identifier.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    CoreNetworkChange& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous values for a core network.</p>
     */
    inline const CoreNetworkChangeValues& GetPreviousValues() const { return m_previousValues; }
    inline bool PreviousValuesHasBeenSet() const { return m_previousValuesHasBeenSet; }
    template<typename PreviousValuesT = CoreNetworkChangeValues>
    void SetPreviousValues(PreviousValuesT&& value) { m_previousValuesHasBeenSet = true; m_previousValues = std::forward<PreviousValuesT>(value); }
    template<typename PreviousValuesT = CoreNetworkChangeValues>
    CoreNetworkChange& WithPreviousValues(PreviousValuesT&& value) { SetPreviousValues(std::forward<PreviousValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value for a core network</p>
     */
    inline const CoreNetworkChangeValues& GetNewValues() const { return m_newValues; }
    inline bool NewValuesHasBeenSet() const { return m_newValuesHasBeenSet; }
    template<typename NewValuesT = CoreNetworkChangeValues>
    void SetNewValues(NewValuesT&& value) { m_newValuesHasBeenSet = true; m_newValues = std::forward<NewValuesT>(value); }
    template<typename NewValuesT = CoreNetworkChangeValues>
    CoreNetworkChange& WithNewValues(NewValuesT&& value) { SetNewValues(std::forward<NewValuesT>(value)); return *this;}
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
    CoreNetworkChange& WithIdentifierPath(IdentifierPathT&& value) { SetIdentifierPath(std::forward<IdentifierPathT>(value)); return *this;}
    ///@}
  private:

    ChangeType m_type{ChangeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ChangeAction m_action{ChangeAction::NOT_SET};
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
