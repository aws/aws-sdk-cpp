/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   * <p>A list of tags (keys and values) that are used to specify the associated
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/TagFilter">AWS
   * API Reference</a></p>
   */
  class TagFilter
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API TagFilter();
    AWS_RESOURCEGROUPSTAGGINGAPI_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline TagFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline TagFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that makes up a tag. A key is a general label
     * that acts like a category for more specific tag values.</p>
     */
    inline TagFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline TagFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline TagFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline TagFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline TagFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>One part of a key-value pair that make up a tag. A value acts as a descriptor
     * within a tag category (key). The value can be empty or null.</p>
     */
    inline TagFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
