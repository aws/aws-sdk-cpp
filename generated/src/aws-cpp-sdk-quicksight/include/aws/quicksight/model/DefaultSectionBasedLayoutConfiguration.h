/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SectionBasedLayoutCanvasSizeOptions.h>
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
   * <p>The options that determine the default settings for a section-based layout
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultSectionBasedLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultSectionBasedLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DefaultSectionBasedLayoutConfiguration();
    AWS_QUICKSIGHT_API DefaultSectionBasedLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultSectionBasedLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the screen canvas size options for a section-based layout.</p>
     */
    inline const SectionBasedLayoutCanvasSizeOptions& GetCanvasSizeOptions() const{ return m_canvasSizeOptions; }

    /**
     * <p>Determines the screen canvas size options for a section-based layout.</p>
     */
    inline bool CanvasSizeOptionsHasBeenSet() const { return m_canvasSizeOptionsHasBeenSet; }

    /**
     * <p>Determines the screen canvas size options for a section-based layout.</p>
     */
    inline void SetCanvasSizeOptions(const SectionBasedLayoutCanvasSizeOptions& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = value; }

    /**
     * <p>Determines the screen canvas size options for a section-based layout.</p>
     */
    inline void SetCanvasSizeOptions(SectionBasedLayoutCanvasSizeOptions&& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = std::move(value); }

    /**
     * <p>Determines the screen canvas size options for a section-based layout.</p>
     */
    inline DefaultSectionBasedLayoutConfiguration& WithCanvasSizeOptions(const SectionBasedLayoutCanvasSizeOptions& value) { SetCanvasSizeOptions(value); return *this;}

    /**
     * <p>Determines the screen canvas size options for a section-based layout.</p>
     */
    inline DefaultSectionBasedLayoutConfiguration& WithCanvasSizeOptions(SectionBasedLayoutCanvasSizeOptions&& value) { SetCanvasSizeOptions(std::move(value)); return *this;}

  private:

    SectionBasedLayoutCanvasSizeOptions m_canvasSizeOptions;
    bool m_canvasSizeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
