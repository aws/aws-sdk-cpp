/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The text format for the title.</p> <p>This is a union type structure. For
   * this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ShortFormatText">AWS
   * API Reference</a></p>
   */
  class ShortFormatText
  {
  public:
    AWS_QUICKSIGHT_API ShortFormatText() = default;
    AWS_QUICKSIGHT_API ShortFormatText(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ShortFormatText& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Plain text format.</p>
     */
    inline const Aws::String& GetPlainText() const { return m_plainText; }
    inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }
    template<typename PlainTextT = Aws::String>
    void SetPlainText(PlainTextT&& value) { m_plainTextHasBeenSet = true; m_plainText = std::forward<PlainTextT>(value); }
    template<typename PlainTextT = Aws::String>
    ShortFormatText& WithPlainText(PlainTextT&& value) { SetPlainText(std::forward<PlainTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rich text. Examples of rich text include bold, underline, and italics.</p>
     */
    inline const Aws::String& GetRichText() const { return m_richText; }
    inline bool RichTextHasBeenSet() const { return m_richTextHasBeenSet; }
    template<typename RichTextT = Aws::String>
    void SetRichText(RichTextT&& value) { m_richTextHasBeenSet = true; m_richText = std::forward<RichTextT>(value); }
    template<typename RichTextT = Aws::String>
    ShortFormatText& WithRichText(RichTextT&& value) { SetRichText(std::forward<RichTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_plainText;
    bool m_plainTextHasBeenSet = false;

    Aws::String m_richText;
    bool m_richTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
