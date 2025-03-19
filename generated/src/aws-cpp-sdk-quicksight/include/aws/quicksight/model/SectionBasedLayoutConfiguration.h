/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SectionBasedLayoutCanvasSizeOptions.h>
#include <aws/quicksight/model/HeaderFooterSectionConfiguration.h>
#include <aws/quicksight/model/BodySectionConfiguration.h>
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
   * <p>The configuration for a section-based layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SectionBasedLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class SectionBasedLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SectionBasedLayoutConfiguration() = default;
    AWS_QUICKSIGHT_API SectionBasedLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionBasedLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of header section configurations.</p>
     */
    inline const Aws::Vector<HeaderFooterSectionConfiguration>& GetHeaderSections() const { return m_headerSections; }
    inline bool HeaderSectionsHasBeenSet() const { return m_headerSectionsHasBeenSet; }
    template<typename HeaderSectionsT = Aws::Vector<HeaderFooterSectionConfiguration>>
    void SetHeaderSections(HeaderSectionsT&& value) { m_headerSectionsHasBeenSet = true; m_headerSections = std::forward<HeaderSectionsT>(value); }
    template<typename HeaderSectionsT = Aws::Vector<HeaderFooterSectionConfiguration>>
    SectionBasedLayoutConfiguration& WithHeaderSections(HeaderSectionsT&& value) { SetHeaderSections(std::forward<HeaderSectionsT>(value)); return *this;}
    template<typename HeaderSectionsT = HeaderFooterSectionConfiguration>
    SectionBasedLayoutConfiguration& AddHeaderSections(HeaderSectionsT&& value) { m_headerSectionsHasBeenSet = true; m_headerSections.emplace_back(std::forward<HeaderSectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of body section configurations.</p>
     */
    inline const Aws::Vector<BodySectionConfiguration>& GetBodySections() const { return m_bodySections; }
    inline bool BodySectionsHasBeenSet() const { return m_bodySectionsHasBeenSet; }
    template<typename BodySectionsT = Aws::Vector<BodySectionConfiguration>>
    void SetBodySections(BodySectionsT&& value) { m_bodySectionsHasBeenSet = true; m_bodySections = std::forward<BodySectionsT>(value); }
    template<typename BodySectionsT = Aws::Vector<BodySectionConfiguration>>
    SectionBasedLayoutConfiguration& WithBodySections(BodySectionsT&& value) { SetBodySections(std::forward<BodySectionsT>(value)); return *this;}
    template<typename BodySectionsT = BodySectionConfiguration>
    SectionBasedLayoutConfiguration& AddBodySections(BodySectionsT&& value) { m_bodySectionsHasBeenSet = true; m_bodySections.emplace_back(std::forward<BodySectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of footer section configurations.</p>
     */
    inline const Aws::Vector<HeaderFooterSectionConfiguration>& GetFooterSections() const { return m_footerSections; }
    inline bool FooterSectionsHasBeenSet() const { return m_footerSectionsHasBeenSet; }
    template<typename FooterSectionsT = Aws::Vector<HeaderFooterSectionConfiguration>>
    void SetFooterSections(FooterSectionsT&& value) { m_footerSectionsHasBeenSet = true; m_footerSections = std::forward<FooterSectionsT>(value); }
    template<typename FooterSectionsT = Aws::Vector<HeaderFooterSectionConfiguration>>
    SectionBasedLayoutConfiguration& WithFooterSections(FooterSectionsT&& value) { SetFooterSections(std::forward<FooterSectionsT>(value)); return *this;}
    template<typename FooterSectionsT = HeaderFooterSectionConfiguration>
    SectionBasedLayoutConfiguration& AddFooterSections(FooterSectionsT&& value) { m_footerSectionsHasBeenSet = true; m_footerSections.emplace_back(std::forward<FooterSectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The options for the canvas of a section-based layout.</p>
     */
    inline const SectionBasedLayoutCanvasSizeOptions& GetCanvasSizeOptions() const { return m_canvasSizeOptions; }
    inline bool CanvasSizeOptionsHasBeenSet() const { return m_canvasSizeOptionsHasBeenSet; }
    template<typename CanvasSizeOptionsT = SectionBasedLayoutCanvasSizeOptions>
    void SetCanvasSizeOptions(CanvasSizeOptionsT&& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = std::forward<CanvasSizeOptionsT>(value); }
    template<typename CanvasSizeOptionsT = SectionBasedLayoutCanvasSizeOptions>
    SectionBasedLayoutConfiguration& WithCanvasSizeOptions(CanvasSizeOptionsT&& value) { SetCanvasSizeOptions(std::forward<CanvasSizeOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HeaderFooterSectionConfiguration> m_headerSections;
    bool m_headerSectionsHasBeenSet = false;

    Aws::Vector<BodySectionConfiguration> m_bodySections;
    bool m_bodySectionsHasBeenSet = false;

    Aws::Vector<HeaderFooterSectionConfiguration> m_footerSections;
    bool m_footerSectionsHasBeenSet = false;

    SectionBasedLayoutCanvasSizeOptions m_canvasSizeOptions;
    bool m_canvasSizeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
