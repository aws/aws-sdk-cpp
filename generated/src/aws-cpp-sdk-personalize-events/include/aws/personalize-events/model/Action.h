/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>
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
namespace PersonalizeEvents
{
namespace Model
{

  /**
   * <p>Represents action metadata added to an Action dataset using the
   * <code>PutActions</code> API. For more information see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-actions.html">Importing
   * actions individually</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/Action">AWS
   * API Reference</a></p>
   */
  class Action
  {
  public:
    AWS_PERSONALIZEEVENTS_API Action() = default;
    AWS_PERSONALIZEEVENTS_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID associated with the action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    Action& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string map of action-specific metadata. Each element in the map consists of
     * a key-value pair. For example, <code>{"value": "100"}</code>.</p> <p>The keys
     * use camel case names that match the fields in the schema for the Actions
     * dataset. In the previous example, the <code>value</code> matches the 'VALUE'
     * field defined in the Actions schema. For categorical string data, to include
     * multiple categories for a single action, separate each category with a pipe
     * separator (<code>|</code>). For example, <code>\"Deluxe|Premium\"</code>.</p>
     */
    inline const Aws::String& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::String>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::String>
    Action& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
