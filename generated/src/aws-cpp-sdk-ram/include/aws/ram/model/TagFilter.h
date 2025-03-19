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
    AWS_RAM_API TagFilter() = default;
    AWS_RAM_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tag key. This must have a valid string value and can't be empty.</p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    TagFilter& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of zero or more tag values. If no values are provided, then the filter
     * matches any tag with the specified key, regardless of its value.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const { return m_tagValues; }
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }
    template<typename TagValuesT = Aws::Vector<Aws::String>>
    void SetTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::forward<TagValuesT>(value); }
    template<typename TagValuesT = Aws::Vector<Aws::String>>
    TagFilter& WithTagValues(TagValuesT&& value) { SetTagValues(std::forward<TagValuesT>(value)); return *this;}
    template<typename TagValuesT = Aws::String>
    TagFilter& AddTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues.emplace_back(std::forward<TagValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
