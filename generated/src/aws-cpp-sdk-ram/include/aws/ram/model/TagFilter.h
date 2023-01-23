/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>A tag key and optional list of possible values that you can use to filter
   * results for tagged resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/TagFilter">AWS API
   * Reference</a></p>
   */
  class TagFilter
  {
  public:
    AWS_RAM_API TagFilter();
    AWS_RAM_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag key. This must have a valid string value and can't be empty.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The tag key. This must have a valid string value and can't be empty.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The tag key. This must have a valid string value and can't be empty.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The tag key. This must have a valid string value and can't be empty.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The tag key. This must have a valid string value and can't be empty.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The tag key. This must have a valid string value and can't be empty.</p>
     */
    inline TagFilter& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The tag key. This must have a valid string value and can't be empty.</p>
     */
    inline TagFilter& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The tag key. This must have a valid string value and can't be empty.</p>
     */
    inline TagFilter& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline TagFilter& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline TagFilter& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline TagFilter& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline TagFilter& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline TagFilter& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
