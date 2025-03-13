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
   * items individually</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-events-2018-03-22/Item">AWS
   * API Reference</a></p>
   */
  class Item
  {
  public:
    AWS_PERSONALIZEEVENTS_API Item() = default;
    AWS_PERSONALIZEEVENTS_API Item(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Item& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZEEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID associated with the item.</p>
     */
    inline const Aws::String& GetItemId() const { return m_itemId; }
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }
    template<typename ItemIdT = Aws::String>
    void SetItemId(ItemIdT&& value) { m_itemIdHasBeenSet = true; m_itemId = std::forward<ItemIdT>(value); }
    template<typename ItemIdT = Aws::String>
    Item& WithItemId(ItemIdT&& value) { SetItemId(std::forward<ItemIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::String>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::String>
    Item& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
