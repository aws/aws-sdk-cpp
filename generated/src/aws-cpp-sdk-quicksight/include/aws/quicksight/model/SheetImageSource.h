/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SheetImageStaticFileSource.h>
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
   * <p>The source of the image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetImageSource">AWS
   * API Reference</a></p>
   */
  class SheetImageSource
  {
  public:
    AWS_QUICKSIGHT_API SheetImageSource();
    AWS_QUICKSIGHT_API SheetImageSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetImageSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the static file that contains the image.</p>
     */
    inline const SheetImageStaticFileSource& GetSheetImageStaticFileSource() const{ return m_sheetImageStaticFileSource; }
    inline bool SheetImageStaticFileSourceHasBeenSet() const { return m_sheetImageStaticFileSourceHasBeenSet; }
    inline void SetSheetImageStaticFileSource(const SheetImageStaticFileSource& value) { m_sheetImageStaticFileSourceHasBeenSet = true; m_sheetImageStaticFileSource = value; }
    inline void SetSheetImageStaticFileSource(SheetImageStaticFileSource&& value) { m_sheetImageStaticFileSourceHasBeenSet = true; m_sheetImageStaticFileSource = std::move(value); }
    inline SheetImageSource& WithSheetImageStaticFileSource(const SheetImageStaticFileSource& value) { SetSheetImageStaticFileSource(value); return *this;}
    inline SheetImageSource& WithSheetImageStaticFileSource(SheetImageStaticFileSource&& value) { SetSheetImageStaticFileSource(std::move(value)); return *this;}
    ///@}
  private:

    SheetImageStaticFileSource m_sheetImageStaticFileSource;
    bool m_sheetImageStaticFileSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
