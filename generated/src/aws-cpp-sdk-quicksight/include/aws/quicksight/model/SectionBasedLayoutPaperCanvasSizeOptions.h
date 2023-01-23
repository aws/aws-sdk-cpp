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
    AWS_QUICKSIGHT_API SectionBasedLayoutPaperCanvasSizeOptions();
    AWS_QUICKSIGHT_API SectionBasedLayoutPaperCanvasSizeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionBasedLayoutPaperCanvasSizeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The paper size that is used to define canvas dimensions.</p>
     */
    inline const PaperSize& GetPaperSize() const{ return m_paperSize; }

    /**
     * <p>The paper size that is used to define canvas dimensions.</p>
     */
    inline bool PaperSizeHasBeenSet() const { return m_paperSizeHasBeenSet; }

    /**
     * <p>The paper size that is used to define canvas dimensions.</p>
     */
    inline void SetPaperSize(const PaperSize& value) { m_paperSizeHasBeenSet = true; m_paperSize = value; }

    /**
     * <p>The paper size that is used to define canvas dimensions.</p>
     */
    inline void SetPaperSize(PaperSize&& value) { m_paperSizeHasBeenSet = true; m_paperSize = std::move(value); }

    /**
     * <p>The paper size that is used to define canvas dimensions.</p>
     */
    inline SectionBasedLayoutPaperCanvasSizeOptions& WithPaperSize(const PaperSize& value) { SetPaperSize(value); return *this;}

    /**
     * <p>The paper size that is used to define canvas dimensions.</p>
     */
    inline SectionBasedLayoutPaperCanvasSizeOptions& WithPaperSize(PaperSize&& value) { SetPaperSize(std::move(value)); return *this;}


    /**
     * <p>The paper orientation that is used to define canvas dimensions. Choose one of
     * the following options:</p> <ul> <li> <p>PORTRAIT</p> </li> <li> <p>LANDSCAPE</p>
     * </li> </ul>
     */
    inline const PaperOrientation& GetPaperOrientation() const{ return m_paperOrientation; }

    /**
     * <p>The paper orientation that is used to define canvas dimensions. Choose one of
     * the following options:</p> <ul> <li> <p>PORTRAIT</p> </li> <li> <p>LANDSCAPE</p>
     * </li> </ul>
     */
    inline bool PaperOrientationHasBeenSet() const { return m_paperOrientationHasBeenSet; }

    /**
     * <p>The paper orientation that is used to define canvas dimensions. Choose one of
     * the following options:</p> <ul> <li> <p>PORTRAIT</p> </li> <li> <p>LANDSCAPE</p>
     * </li> </ul>
     */
    inline void SetPaperOrientation(const PaperOrientation& value) { m_paperOrientationHasBeenSet = true; m_paperOrientation = value; }

    /**
     * <p>The paper orientation that is used to define canvas dimensions. Choose one of
     * the following options:</p> <ul> <li> <p>PORTRAIT</p> </li> <li> <p>LANDSCAPE</p>
     * </li> </ul>
     */
    inline void SetPaperOrientation(PaperOrientation&& value) { m_paperOrientationHasBeenSet = true; m_paperOrientation = std::move(value); }

    /**
     * <p>The paper orientation that is used to define canvas dimensions. Choose one of
     * the following options:</p> <ul> <li> <p>PORTRAIT</p> </li> <li> <p>LANDSCAPE</p>
     * </li> </ul>
     */
    inline SectionBasedLayoutPaperCanvasSizeOptions& WithPaperOrientation(const PaperOrientation& value) { SetPaperOrientation(value); return *this;}

    /**
     * <p>The paper orientation that is used to define canvas dimensions. Choose one of
     * the following options:</p> <ul> <li> <p>PORTRAIT</p> </li> <li> <p>LANDSCAPE</p>
     * </li> </ul>
     */
    inline SectionBasedLayoutPaperCanvasSizeOptions& WithPaperOrientation(PaperOrientation&& value) { SetPaperOrientation(std::move(value)); return *this;}


    /**
     * <p>Defines the spacing between the canvas content and the top, bottom, left, and
     * right edges.</p>
     */
    inline const Spacing& GetPaperMargin() const{ return m_paperMargin; }

    /**
     * <p>Defines the spacing between the canvas content and the top, bottom, left, and
     * right edges.</p>
     */
    inline bool PaperMarginHasBeenSet() const { return m_paperMarginHasBeenSet; }

    /**
     * <p>Defines the spacing between the canvas content and the top, bottom, left, and
     * right edges.</p>
     */
    inline void SetPaperMargin(const Spacing& value) { m_paperMarginHasBeenSet = true; m_paperMargin = value; }

    /**
     * <p>Defines the spacing between the canvas content and the top, bottom, left, and
     * right edges.</p>
     */
    inline void SetPaperMargin(Spacing&& value) { m_paperMarginHasBeenSet = true; m_paperMargin = std::move(value); }

    /**
     * <p>Defines the spacing between the canvas content and the top, bottom, left, and
     * right edges.</p>
     */
    inline SectionBasedLayoutPaperCanvasSizeOptions& WithPaperMargin(const Spacing& value) { SetPaperMargin(value); return *this;}

    /**
     * <p>Defines the spacing between the canvas content and the top, bottom, left, and
     * right edges.</p>
     */
    inline SectionBasedLayoutPaperCanvasSizeOptions& WithPaperMargin(Spacing&& value) { SetPaperMargin(std::move(value)); return *this;}

  private:

    PaperSize m_paperSize;
    bool m_paperSizeHasBeenSet = false;

    PaperOrientation m_paperOrientation;
    bool m_paperOrientationHasBeenSet = false;

    Spacing m_paperMargin;
    bool m_paperMarginHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
