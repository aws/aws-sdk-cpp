/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FreeFormLayoutScreenCanvasSizeOptions.h>
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
   * <p>Configuration options for the canvas of a free-form layout.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FreeFormLayoutCanvasSizeOptions">AWS
   * API Reference</a></p>
   */
  class FreeFormLayoutCanvasSizeOptions
  {
  public:
    AWS_QUICKSIGHT_API FreeFormLayoutCanvasSizeOptions() = default;
    AWS_QUICKSIGHT_API FreeFormLayoutCanvasSizeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FreeFormLayoutCanvasSizeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options that determine the sizing of the canvas used in a free-form
     * layout.</p>
     */
    inline const FreeFormLayoutScreenCanvasSizeOptions& GetScreenCanvasSizeOptions() const { return m_screenCanvasSizeOptions; }
    inline bool ScreenCanvasSizeOptionsHasBeenSet() const { return m_screenCanvasSizeOptionsHasBeenSet; }
    template<typename ScreenCanvasSizeOptionsT = FreeFormLayoutScreenCanvasSizeOptions>
    void SetScreenCanvasSizeOptions(ScreenCanvasSizeOptionsT&& value) { m_screenCanvasSizeOptionsHasBeenSet = true; m_screenCanvasSizeOptions = std::forward<ScreenCanvasSizeOptionsT>(value); }
    template<typename ScreenCanvasSizeOptionsT = FreeFormLayoutScreenCanvasSizeOptions>
    FreeFormLayoutCanvasSizeOptions& WithScreenCanvasSizeOptions(ScreenCanvasSizeOptionsT&& value) { SetScreenCanvasSizeOptions(std::forward<ScreenCanvasSizeOptionsT>(value)); return *this;}
    ///@}
  private:

    FreeFormLayoutScreenCanvasSizeOptions m_screenCanvasSizeOptions;
    bool m_screenCanvasSizeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
