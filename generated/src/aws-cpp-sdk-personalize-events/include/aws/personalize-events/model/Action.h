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
    AWS_PERSONALIZEEVENTS_API Action();
    AWS_PERSONALIZEEVENTS_API Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID associated with the action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>The ID associated with the action.</p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p>The ID associated with the action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p>The ID associated with the action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p>The ID associated with the action.</p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p>The ID associated with the action.</p>
     */
    inline Action& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>The ID associated with the action.</p>
     */
    inline Action& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>The ID associated with the action.</p>
     */
    inline Action& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>A string map of action-specific metadata. Each element in the map consists of
     * a key-value pair. For example, <code>{"value": "100"}</code>.</p> <p>The keys
     * use camel case names that match the fields in the schema for the Actions
     * dataset. In the previous example, the <code>value</code> matches the 'VALUE'
     * field defined in the Actions schema. For categorical string data, to include
     * multiple categories for a single action, separate each category with a pipe
     * separator (<code>|</code>). For example, <code>\"Deluxe|Premium\"</code>.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }

    /**
     * <p>A string map of action-specific metadata. Each element in the map consists of
     * a key-value pair. For example, <code>{"value": "100"}</code>.</p> <p>The keys
     * use camel case names that match the fields in the schema for the Actions
     * dataset. In the previous example, the <code>value</code> matches the 'VALUE'
     * field defined in the Actions schema. For categorical string data, to include
     * multiple categories for a single action, separate each category with a pipe
     * separator (<code>|</code>). For example, <code>\"Deluxe|Premium\"</code>.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A string map of action-specific metadata. Each element in the map consists of
     * a key-value pair. For example, <code>{"value": "100"}</code>.</p> <p>The keys
     * use camel case names that match the fields in the schema for the Actions
     * dataset. In the previous example, the <code>value</code> matches the 'VALUE'
     * field defined in the Actions schema. For categorical string data, to include
     * multiple categories for a single action, separate each category with a pipe
     * separator (<code>|</code>). For example, <code>\"Deluxe|Premium\"</code>.</p>
     */
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A string map of action-specific metadata. Each element in the map consists of
     * a key-value pair. For example, <code>{"value": "100"}</code>.</p> <p>The keys
     * use camel case names that match the fields in the schema for the Actions
     * dataset. In the previous example, the <code>value</code> matches the 'VALUE'
     * field defined in the Actions schema. For categorical string data, to include
     * multiple categories for a single action, separate each category with a pipe
     * separator (<code>|</code>). For example, <code>\"Deluxe|Premium\"</code>.</p>
     */
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A string map of action-specific metadata. Each element in the map consists of
     * a key-value pair. For example, <code>{"value": "100"}</code>.</p> <p>The keys
     * use camel case names that match the fields in the schema for the Actions
     * dataset. In the previous example, the <code>value</code> matches the 'VALUE'
     * field defined in the Actions schema. For categorical string data, to include
     * multiple categories for a single action, separate each category with a pipe
     * separator (<code>|</code>). For example, <code>\"Deluxe|Premium\"</code>.</p>
     */
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }

    /**
     * <p>A string map of action-specific metadata. Each element in the map consists of
     * a key-value pair. For example, <code>{"value": "100"}</code>.</p> <p>The keys
     * use camel case names that match the fields in the schema for the Actions
     * dataset. In the previous example, the <code>value</code> matches the 'VALUE'
     * field defined in the Actions schema. For categorical string data, to include
     * multiple categories for a single action, separate each category with a pipe
     * separator (<code>|</code>). For example, <code>\"Deluxe|Premium\"</code>.</p>
     */
    inline Action& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}

    /**
     * <p>A string map of action-specific metadata. Each element in the map consists of
     * a key-value pair. For example, <code>{"value": "100"}</code>.</p> <p>The keys
     * use camel case names that match the fields in the schema for the Actions
     * dataset. In the previous example, the <code>value</code> matches the 'VALUE'
     * field defined in the Actions schema. For categorical string data, to include
     * multiple categories for a single action, separate each category with a pipe
     * separator (<code>|</code>). For example, <code>\"Deluxe|Premium\"</code>.</p>
     */
    inline Action& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A string map of action-specific metadata. Each element in the map consists of
     * a key-value pair. For example, <code>{"value": "100"}</code>.</p> <p>The keys
     * use camel case names that match the fields in the schema for the Actions
     * dataset. In the previous example, the <code>value</code> matches the 'VALUE'
     * field defined in the Actions schema. For categorical string data, to include
     * multiple categories for a single action, separate each category with a pipe
     * separator (<code>|</code>). For example, <code>\"Deluxe|Premium\"</code>.</p>
     */
    inline Action& WithProperties(const char* value) { SetProperties(value); return *this;}

  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
