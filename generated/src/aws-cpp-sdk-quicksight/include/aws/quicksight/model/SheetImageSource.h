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
    AWS_QUICKSIGHT_API SheetImageSource() = default;
    AWS_QUICKSIGHT_API SheetImageSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetImageSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source of the static file that contains the image.</p>
     */
    inline const SheetImageStaticFileSource& GetSheetImageStaticFileSource() const { return m_sheetImageStaticFileSource; }
    inline bool SheetImageStaticFileSourceHasBeenSet() const { return m_sheetImageStaticFileSourceHasBeenSet; }
    template<typename SheetImageStaticFileSourceT = SheetImageStaticFileSource>
    void SetSheetImageStaticFileSource(SheetImageStaticFileSourceT&& value) { m_sheetImageStaticFileSourceHasBeenSet = true; m_sheetImageStaticFileSource = std::forward<SheetImageStaticFileSourceT>(value); }
    template<typename SheetImageStaticFileSourceT = SheetImageStaticFileSource>
    SheetImageSource& WithSheetImageStaticFileSource(SheetImageStaticFileSourceT&& value) { SetSheetImageStaticFileSource(std::forward<SheetImageStaticFileSourceT>(value)); return *this;}
    ///@}
  private:

    SheetImageStaticFileSource m_sheetImageStaticFileSource;
    bool m_sheetImageStaticFileSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
