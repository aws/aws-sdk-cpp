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
   * <p>The text that appears in the sheet image tooltip.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetImageTooltipText">AWS
   * API Reference</a></p>
   */
  class SheetImageTooltipText
  {
  public:
    AWS_QUICKSIGHT_API SheetImageTooltipText() = default;
    AWS_QUICKSIGHT_API SheetImageTooltipText(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetImageTooltipText& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The plain text format.</p>
     */
    inline const Aws::String& GetPlainText() const { return m_plainText; }
    inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }
    template<typename PlainTextT = Aws::String>
    void SetPlainText(PlainTextT&& value) { m_plainTextHasBeenSet = true; m_plainText = std::forward<PlainTextT>(value); }
    template<typename PlainTextT = Aws::String>
    SheetImageTooltipText& WithPlainText(PlainTextT&& value) { SetPlainText(std::forward<PlainTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_plainText;
    bool m_plainTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
