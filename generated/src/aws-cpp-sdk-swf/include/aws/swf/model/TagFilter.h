/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Used to filter the workflow executions in visibility APIs based on a
   * tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TagFilter">AWS API
   * Reference</a></p>
   */
  class TagFilter
  {
  public:
    AWS_SWF_API TagFilter() = default;
    AWS_SWF_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the tag that must be associated with the execution for it to meet
     * the filter criteria.</p> <p>Tags may only contain unicode letters, digits,
     * whitespace, or these symbols: <code>_ . : / = + - @</code>.</p>
     */
    inline const Aws::String& GetTag() const { return m_tag; }
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }
    template<typename TagT = Aws::String>
    void SetTag(TagT&& value) { m_tagHasBeenSet = true; m_tag = std::forward<TagT>(value); }
    template<typename TagT = Aws::String>
    TagFilter& WithTag(TagT&& value) { SetTag(std::forward<TagT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tag;
    bool m_tagHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
