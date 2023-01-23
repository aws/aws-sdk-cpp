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
   * <p>Represents item metadata added to an Items dataset using the
   * <code>PutItems</code> API. For more information see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/importing-items.html">Importing
   * Items Incrementally</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/Item">AWS
   * API Reference</a></p>
   */
  class Item
  {
  public:
    AWS_PERSONALIZEEVENTS_API Item();
    AWS_PERSONALIZEEVENTS_API Item(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Item& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID associated with the item.</p>
     */
    inline const Aws::String& GetItemId() const{ return m_itemId; }

    /**
     * <p>The ID associated with the item.</p>
     */
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }

    /**
     * <p>The ID associated with the item.</p>
     */
    inline void SetItemId(const Aws::String& value) { m_itemIdHasBeenSet = true; m_itemId = value; }

    /**
     * <p>The ID associated with the item.</p>
     */
    inline void SetItemId(Aws::String&& value) { m_itemIdHasBeenSet = true; m_itemId = std::move(value); }

    /**
     * <p>The ID associated with the item.</p>
     */
    inline void SetItemId(const char* value) { m_itemIdHasBeenSet = true; m_itemId.assign(value); }

    /**
     * <p>The ID associated with the item.</p>
     */
    inline Item& WithItemId(const Aws::String& value) { SetItemId(value); return *this;}

    /**
     * <p>The ID associated with the item.</p>
     */
    inline Item& WithItemId(Aws::String&& value) { SetItemId(std::move(value)); return *this;}

    /**
     * <p>The ID associated with the item.</p>
     */
    inline Item& WithItemId(const char* value) { SetItemId(value); return *this;}


    /**
     * <p>A string map of item-specific metadata. Each element in the map consists of a
     * key-value pair. For example, <code>{"numberOfRatings": "12"}</code>.</p> <p>The
     * keys use camel case names that match the fields in the schema for the Items
     * dataset. In the previous example, the <code>numberOfRatings</code> matches the
     * 'NUMBER_OF_RATINGS' field defined in the Items schema. For categorical string
     * data, to include multiple categories for a single item, separate each category
     * with a pipe separator (<code>|</code>). For example,
     * <code>\"Horror|Action\"</code>.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }

    /**
     * <p>A string map of item-specific metadata. Each element in the map consists of a
     * key-value pair. For example, <code>{"numberOfRatings": "12"}</code>.</p> <p>The
     * keys use camel case names that match the fields in the schema for the Items
     * dataset. In the previous example, the <code>numberOfRatings</code> matches the
     * 'NUMBER_OF_RATINGS' field defined in the Items schema. For categorical string
     * data, to include multiple categories for a single item, separate each category
     * with a pipe separator (<code>|</code>). For example,
     * <code>\"Horror|Action\"</code>.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>A string map of item-specific metadata. Each element in the map consists of a
     * key-value pair. For example, <code>{"numberOfRatings": "12"}</code>.</p> <p>The
     * keys use camel case names that match the fields in the schema for the Items
     * dataset. In the previous example, the <code>numberOfRatings</code> matches the
     * 'NUMBER_OF_RATINGS' field defined in the Items schema. For categorical string
     * data, to include multiple categories for a single item, separate each category
     * with a pipe separator (<code>|</code>). For example,
     * <code>\"Horror|Action\"</code>.</p>
     */
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>A string map of item-specific metadata. Each element in the map consists of a
     * key-value pair. For example, <code>{"numberOfRatings": "12"}</code>.</p> <p>The
     * keys use camel case names that match the fields in the schema for the Items
     * dataset. In the previous example, the <code>numberOfRatings</code> matches the
     * 'NUMBER_OF_RATINGS' field defined in the Items schema. For categorical string
     * data, to include multiple categories for a single item, separate each category
     * with a pipe separator (<code>|</code>). For example,
     * <code>\"Horror|Action\"</code>.</p>
     */
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>A string map of item-specific metadata. Each element in the map consists of a
     * key-value pair. For example, <code>{"numberOfRatings": "12"}</code>.</p> <p>The
     * keys use camel case names that match the fields in the schema for the Items
     * dataset. In the previous example, the <code>numberOfRatings</code> matches the
     * 'NUMBER_OF_RATINGS' field defined in the Items schema. For categorical string
     * data, to include multiple categories for a single item, separate each category
     * with a pipe separator (<code>|</code>). For example,
     * <code>\"Horror|Action\"</code>.</p>
     */
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }

    /**
     * <p>A string map of item-specific metadata. Each element in the map consists of a
     * key-value pair. For example, <code>{"numberOfRatings": "12"}</code>.</p> <p>The
     * keys use camel case names that match the fields in the schema for the Items
     * dataset. In the previous example, the <code>numberOfRatings</code> matches the
     * 'NUMBER_OF_RATINGS' field defined in the Items schema. For categorical string
     * data, to include multiple categories for a single item, separate each category
     * with a pipe separator (<code>|</code>). For example,
     * <code>\"Horror|Action\"</code>.</p>
     */
    inline Item& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}

    /**
     * <p>A string map of item-specific metadata. Each element in the map consists of a
     * key-value pair. For example, <code>{"numberOfRatings": "12"}</code>.</p> <p>The
     * keys use camel case names that match the fields in the schema for the Items
     * dataset. In the previous example, the <code>numberOfRatings</code> matches the
     * 'NUMBER_OF_RATINGS' field defined in the Items schema. For categorical string
     * data, to include multiple categories for a single item, separate each category
     * with a pipe separator (<code>|</code>). For example,
     * <code>\"Horror|Action\"</code>.</p>
     */
    inline Item& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A string map of item-specific metadata. Each element in the map consists of a
     * key-value pair. For example, <code>{"numberOfRatings": "12"}</code>.</p> <p>The
     * keys use camel case names that match the fields in the schema for the Items
     * dataset. In the previous example, the <code>numberOfRatings</code> matches the
     * 'NUMBER_OF_RATINGS' field defined in the Items schema. For categorical string
     * data, to include multiple categories for a single item, separate each category
     * with a pipe separator (<code>|</code>). For example,
     * <code>\"Horror|Action\"</code>.</p>
     */
    inline Item& WithProperties(const char* value) { SetProperties(value); return *this;}

  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
