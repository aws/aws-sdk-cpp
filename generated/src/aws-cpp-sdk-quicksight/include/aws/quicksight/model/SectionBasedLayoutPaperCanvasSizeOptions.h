/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PaperSize.h>
#include <aws/quicksight/model/PaperOrientation.h>
#include <aws/quicksight/model/Spacing.h>
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
   * <p>The options for a paper canvas of a section-based layout.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SectionBasedLayoutPaperCanvasSizeOptions">AWS
   * API Reference</a></p>
   */
  class SectionBasedLayoutPaperCanvasSizeOptions
  {
  public:
    AWS_QUICKSIGHT_API SectionBasedLayoutPaperCanvasSizeOptions() = default;
    AWS_QUICKSIGHT_API SectionBasedLayoutPaperCanvasSizeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionBasedLayoutPaperCanvasSizeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The paper size that is used to define canvas dimensions.</p>
     */
    inline PaperSize GetPaperSize() const { return m_paperSize; }
    inline bool PaperSizeHasBeenSet() const { return m_paperSizeHasBeenSet; }
    inline void SetPaperSize(PaperSize value) { m_paperSizeHasBeenSet = true; m_paperSize = value; }
    inline SectionBasedLayoutPaperCanvasSizeOptions& WithPaperSize(PaperSize value) { SetPaperSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The paper orientation that is used to define canvas dimensions. Choose one of
     * the following options:</p> <ul> <li> <p>PORTRAIT</p> </li> <li> <p>LANDSCAPE</p>
     * </li> </ul>
     */
    inline PaperOrientation GetPaperOrientation() const { return m_paperOrientation; }
    inline bool PaperOrientationHasBeenSet() const { return m_paperOrientationHasBeenSet; }
    inline void SetPaperOrientation(PaperOrientation value) { m_paperOrientationHasBeenSet = true; m_paperOrientation = value; }
    inline SectionBasedLayoutPaperCanvasSizeOptions& WithPaperOrientation(PaperOrientation value) { SetPaperOrientation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the spacing between the canvas content and the top, bottom, left, and
     * right edges.</p>
     */
    inline const Spacing& GetPaperMargin() const { return m_paperMargin; }
    inline bool PaperMarginHasBeenSet() const { return m_paperMarginHasBeenSet; }
    template<typename PaperMarginT = Spacing>
    void SetPaperMargin(PaperMarginT&& value) { m_paperMarginHasBeenSet = true; m_paperMargin = std::forward<PaperMarginT>(value); }
    template<typename PaperMarginT = Spacing>
    SectionBasedLayoutPaperCanvasSizeOptions& WithPaperMargin(PaperMarginT&& value) { SetPaperMargin(std::forward<PaperMarginT>(value)); return *this;}
    ///@}
  private:

    PaperSize m_paperSize{PaperSize::NOT_SET};
    bool m_paperSizeHasBeenSet = false;

    PaperOrientation m_paperOrientation{PaperOrientation::NOT_SET};
    bool m_paperOrientationHasBeenSet = false;

    Spacing m_paperMargin;
    bool m_paperMarginHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
