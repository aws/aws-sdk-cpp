/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SectionBasedLayoutPaperCanvasSizeOptions.h>
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
   * <p>The options for the canvas of a section-based layout.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SectionBasedLayoutCanvasSizeOptions">AWS
   * API Reference</a></p>
   */
  class SectionBasedLayoutCanvasSizeOptions
  {
  public:
    AWS_QUICKSIGHT_API SectionBasedLayoutCanvasSizeOptions();
    AWS_QUICKSIGHT_API SectionBasedLayoutCanvasSizeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionBasedLayoutCanvasSizeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options for a paper canvas of a section-based layout.</p>
     */
    inline const SectionBasedLayoutPaperCanvasSizeOptions& GetPaperCanvasSizeOptions() const{ return m_paperCanvasSizeOptions; }

    /**
     * <p>The options for a paper canvas of a section-based layout.</p>
     */
    inline bool PaperCanvasSizeOptionsHasBeenSet() const { return m_paperCanvasSizeOptionsHasBeenSet; }

    /**
     * <p>The options for a paper canvas of a section-based layout.</p>
     */
    inline void SetPaperCanvasSizeOptions(const SectionBasedLayoutPaperCanvasSizeOptions& value) { m_paperCanvasSizeOptionsHasBeenSet = true; m_paperCanvasSizeOptions = value; }

    /**
     * <p>The options for a paper canvas of a section-based layout.</p>
     */
    inline void SetPaperCanvasSizeOptions(SectionBasedLayoutPaperCanvasSizeOptions&& value) { m_paperCanvasSizeOptionsHasBeenSet = true; m_paperCanvasSizeOptions = std::move(value); }

    /**
     * <p>The options for a paper canvas of a section-based layout.</p>
     */
    inline SectionBasedLayoutCanvasSizeOptions& WithPaperCanvasSizeOptions(const SectionBasedLayoutPaperCanvasSizeOptions& value) { SetPaperCanvasSizeOptions(value); return *this;}

    /**
     * <p>The options for a paper canvas of a section-based layout.</p>
     */
    inline SectionBasedLayoutCanvasSizeOptions& WithPaperCanvasSizeOptions(SectionBasedLayoutPaperCanvasSizeOptions&& value) { SetPaperCanvasSizeOptions(std::move(value)); return *this;}

  private:

    SectionBasedLayoutPaperCanvasSizeOptions m_paperCanvasSizeOptions;
    bool m_paperCanvasSizeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
