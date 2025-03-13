/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/BodySectionContent.h>
#include <aws/quicksight/model/SectionStyle.h>
#include <aws/quicksight/model/SectionPageBreakConfiguration.h>
#include <aws/quicksight/model/BodySectionRepeatConfiguration.h>
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
   * <p>The configuration of a body section.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BodySectionConfiguration">AWS
   * API Reference</a></p>
   */
  class BodySectionConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BodySectionConfiguration() = default;
    AWS_QUICKSIGHT_API BodySectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BodySectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline const Aws::String& GetSectionId() const { return m_sectionId; }
    inline bool SectionIdHasBeenSet() const { return m_sectionIdHasBeenSet; }
    template<typename SectionIdT = Aws::String>
    void SetSectionId(SectionIdT&& value) { m_sectionIdHasBeenSet = true; m_sectionId = std::forward<SectionIdT>(value); }
    template<typename SectionIdT = Aws::String>
    BodySectionConfiguration& WithSectionId(SectionIdT&& value) { SetSectionId(std::forward<SectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of content in a body section.</p>
     */
    inline const BodySectionContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = BodySectionContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = BodySectionContent>
    BodySectionConfiguration& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The style options of a body section.</p>
     */
    inline const SectionStyle& GetStyle() const { return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    template<typename StyleT = SectionStyle>
    void SetStyle(StyleT&& value) { m_styleHasBeenSet = true; m_style = std::forward<StyleT>(value); }
    template<typename StyleT = SectionStyle>
    BodySectionConfiguration& WithStyle(StyleT&& value) { SetStyle(std::forward<StyleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a page break for a section.</p>
     */
    inline const SectionPageBreakConfiguration& GetPageBreakConfiguration() const { return m_pageBreakConfiguration; }
    inline bool PageBreakConfigurationHasBeenSet() const { return m_pageBreakConfigurationHasBeenSet; }
    template<typename PageBreakConfigurationT = SectionPageBreakConfiguration>
    void SetPageBreakConfiguration(PageBreakConfigurationT&& value) { m_pageBreakConfigurationHasBeenSet = true; m_pageBreakConfiguration = std::forward<PageBreakConfigurationT>(value); }
    template<typename PageBreakConfigurationT = SectionPageBreakConfiguration>
    BodySectionConfiguration& WithPageBreakConfiguration(PageBreakConfigurationT&& value) { SetPageBreakConfiguration(std::forward<PageBreakConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configurations that are required to declare a section as
     * repeating.</p>
     */
    inline const BodySectionRepeatConfiguration& GetRepeatConfiguration() const { return m_repeatConfiguration; }
    inline bool RepeatConfigurationHasBeenSet() const { return m_repeatConfigurationHasBeenSet; }
    template<typename RepeatConfigurationT = BodySectionRepeatConfiguration>
    void SetRepeatConfiguration(RepeatConfigurationT&& value) { m_repeatConfigurationHasBeenSet = true; m_repeatConfiguration = std::forward<RepeatConfigurationT>(value); }
    template<typename RepeatConfigurationT = BodySectionRepeatConfiguration>
    BodySectionConfiguration& WithRepeatConfiguration(RepeatConfigurationT&& value) { SetRepeatConfiguration(std::forward<RepeatConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sectionId;
    bool m_sectionIdHasBeenSet = false;

    BodySectionContent m_content;
    bool m_contentHasBeenSet = false;

    SectionStyle m_style;
    bool m_styleHasBeenSet = false;

    SectionPageBreakConfiguration m_pageBreakConfiguration;
    bool m_pageBreakConfigurationHasBeenSet = false;

    BodySectionRepeatConfiguration m_repeatConfiguration;
    bool m_repeatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
