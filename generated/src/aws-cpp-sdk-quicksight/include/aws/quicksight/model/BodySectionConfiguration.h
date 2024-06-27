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
    AWS_QUICKSIGHT_API BodySectionConfiguration();
    AWS_QUICKSIGHT_API BodySectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BodySectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline const Aws::String& GetSectionId() const{ return m_sectionId; }
    inline bool SectionIdHasBeenSet() const { return m_sectionIdHasBeenSet; }
    inline void SetSectionId(const Aws::String& value) { m_sectionIdHasBeenSet = true; m_sectionId = value; }
    inline void SetSectionId(Aws::String&& value) { m_sectionIdHasBeenSet = true; m_sectionId = std::move(value); }
    inline void SetSectionId(const char* value) { m_sectionIdHasBeenSet = true; m_sectionId.assign(value); }
    inline BodySectionConfiguration& WithSectionId(const Aws::String& value) { SetSectionId(value); return *this;}
    inline BodySectionConfiguration& WithSectionId(Aws::String&& value) { SetSectionId(std::move(value)); return *this;}
    inline BodySectionConfiguration& WithSectionId(const char* value) { SetSectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of content in a body section.</p>
     */
    inline const BodySectionContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const BodySectionContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(BodySectionContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline BodySectionConfiguration& WithContent(const BodySectionContent& value) { SetContent(value); return *this;}
    inline BodySectionConfiguration& WithContent(BodySectionContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The style options of a body section.</p>
     */
    inline const SectionStyle& GetStyle() const{ return m_style; }
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }
    inline void SetStyle(const SectionStyle& value) { m_styleHasBeenSet = true; m_style = value; }
    inline void SetStyle(SectionStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }
    inline BodySectionConfiguration& WithStyle(const SectionStyle& value) { SetStyle(value); return *this;}
    inline BodySectionConfiguration& WithStyle(SectionStyle&& value) { SetStyle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a page break for a section.</p>
     */
    inline const SectionPageBreakConfiguration& GetPageBreakConfiguration() const{ return m_pageBreakConfiguration; }
    inline bool PageBreakConfigurationHasBeenSet() const { return m_pageBreakConfigurationHasBeenSet; }
    inline void SetPageBreakConfiguration(const SectionPageBreakConfiguration& value) { m_pageBreakConfigurationHasBeenSet = true; m_pageBreakConfiguration = value; }
    inline void SetPageBreakConfiguration(SectionPageBreakConfiguration&& value) { m_pageBreakConfigurationHasBeenSet = true; m_pageBreakConfiguration = std::move(value); }
    inline BodySectionConfiguration& WithPageBreakConfiguration(const SectionPageBreakConfiguration& value) { SetPageBreakConfiguration(value); return *this;}
    inline BodySectionConfiguration& WithPageBreakConfiguration(SectionPageBreakConfiguration&& value) { SetPageBreakConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configurations that are required to declare a section as
     * repeating.</p>
     */
    inline const BodySectionRepeatConfiguration& GetRepeatConfiguration() const{ return m_repeatConfiguration; }
    inline bool RepeatConfigurationHasBeenSet() const { return m_repeatConfigurationHasBeenSet; }
    inline void SetRepeatConfiguration(const BodySectionRepeatConfiguration& value) { m_repeatConfigurationHasBeenSet = true; m_repeatConfiguration = value; }
    inline void SetRepeatConfiguration(BodySectionRepeatConfiguration&& value) { m_repeatConfigurationHasBeenSet = true; m_repeatConfiguration = std::move(value); }
    inline BodySectionConfiguration& WithRepeatConfiguration(const BodySectionRepeatConfiguration& value) { SetRepeatConfiguration(value); return *this;}
    inline BodySectionConfiguration& WithRepeatConfiguration(BodySectionRepeatConfiguration&& value) { SetRepeatConfiguration(std::move(value)); return *this;}
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
