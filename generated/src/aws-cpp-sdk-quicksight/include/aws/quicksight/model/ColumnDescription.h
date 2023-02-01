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
   * <p>Metadata that contains a description for a column.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnDescription">AWS
   * API Reference</a></p>
   */
  class ColumnDescription
  {
  public:
    AWS_QUICKSIGHT_API ColumnDescription();
    AWS_QUICKSIGHT_API ColumnDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of a description for a column.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text of a description for a column.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text of a description for a column.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text of a description for a column.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text of a description for a column.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text of a description for a column.</p>
     */
    inline ColumnDescription& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text of a description for a column.</p>
     */
    inline ColumnDescription& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text of a description for a column.</p>
     */
    inline ColumnDescription& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
