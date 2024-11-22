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
    AWS_QUICKSIGHT_API SheetImageTooltipText();
    AWS_QUICKSIGHT_API SheetImageTooltipText(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetImageTooltipText& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The plain text format.</p>
     */
    inline const Aws::String& GetPlainText() const{ return m_plainText; }
    inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }
    inline void SetPlainText(const Aws::String& value) { m_plainTextHasBeenSet = true; m_plainText = value; }
    inline void SetPlainText(Aws::String&& value) { m_plainTextHasBeenSet = true; m_plainText = std::move(value); }
    inline void SetPlainText(const char* value) { m_plainTextHasBeenSet = true; m_plainText.assign(value); }
    inline SheetImageTooltipText& WithPlainText(const Aws::String& value) { SetPlainText(value); return *this;}
    inline SheetImageTooltipText& WithPlainText(Aws::String&& value) { SetPlainText(std::move(value)); return *this;}
    inline SheetImageTooltipText& WithPlainText(const char* value) { SetPlainText(value); return *this;}
    ///@}
  private:

    Aws::String m_plainText;
    bool m_plainTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
