/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SectionLayoutConfiguration.h>
#include <aws/quicksight/model/SectionStyle.h>
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
   * <p>The configuration of a header or footer section.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HeaderFooterSectionConfiguration">AWS
   * API Reference</a></p>
   */
  class HeaderFooterSectionConfiguration
  {
  public:
    AWS_QUICKSIGHT_API HeaderFooterSectionConfiguration() = default;
    AWS_QUICKSIGHT_API HeaderFooterSectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HeaderFooterSectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the header or footer section.</p>
     */
    inline const Aws::String& GetSectionId() const { return m_sectionId; }
    inline bool SectionIdHasBeenSet() const { return m_sectionIdHasBeenSet; }
    template<typename SectionIdT = Aws::String>
    void SetSectionId(SectionIdT&& value) { m_sectionIdHasBeenSet = true; m_sectionId = std::forward<SectionIdT>(value); }
    template<typename SectionIdT = Aws::String>
    HeaderFooterSectionConfiguration& WithSectionId(SectionIdT&& value) { SetSectionId(std::forward<SectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layout configuration of the header or footer section.</p>
     */
    inline const SectionLayoutConfiguration& GetLayout() const { return m_layout; }
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
    template<typename LayoutT = SectionLayoutConfiguration>
    void SetLayout(LayoutT&& value) { m_layoutHasBeenSet = true; m_layout = std::forward<LayoutT>(value); }
    template<typename LayoutT = SectionLayoutConfiguration>
    HeaderFooterSectionConfiguration& WithLayout(LayoutT&& value) { SetLayout(std::forward<LayoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The style options of a header or footer section.</p>
     */
    inline const SectionStyle& GetStyle() const { return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    template<typename StyleT = SectionStyle>
    void SetStyle(StyleT&& value) { m_styleHasBeenSet = true; m_style = std::forward<StyleT>(value); }
    template<typename StyleT = SectionStyle>
    HeaderFooterSectionConfiguration& WithStyle(StyleT&& value) { SetStyle(std::forward<StyleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sectionId;
    bool m_sectionIdHasBeenSet = false;

    SectionLayoutConfiguration m_layout;
    bool m_layoutHasBeenSet = false;

    SectionStyle m_style;
    bool m_styleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
