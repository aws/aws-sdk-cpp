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


    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline const Aws::String& GetSectionId() const{ return m_sectionId; }

    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline bool SectionIdHasBeenSet() const { return m_sectionIdHasBeenSet; }

    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline void SetSectionId(const Aws::String& value) { m_sectionIdHasBeenSet = true; m_sectionId = value; }

    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline void SetSectionId(Aws::String&& value) { m_sectionIdHasBeenSet = true; m_sectionId = std::move(value); }

    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline void SetSectionId(const char* value) { m_sectionIdHasBeenSet = true; m_sectionId.assign(value); }

    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline BodySectionConfiguration& WithSectionId(const Aws::String& value) { SetSectionId(value); return *this;}

    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline BodySectionConfiguration& WithSectionId(Aws::String&& value) { SetSectionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a body section.</p>
     */
    inline BodySectionConfiguration& WithSectionId(const char* value) { SetSectionId(value); return *this;}


    /**
     * <p>The configuration of content in a body section.</p>
     */
    inline const BodySectionContent& GetContent() const{ return m_content; }

    /**
     * <p>The configuration of content in a body section.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The configuration of content in a body section.</p>
     */
    inline void SetContent(const BodySectionContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The configuration of content in a body section.</p>
     */
    inline void SetContent(BodySectionContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The configuration of content in a body section.</p>
     */
    inline BodySectionConfiguration& WithContent(const BodySectionContent& value) { SetContent(value); return *this;}

    /**
     * <p>The configuration of content in a body section.</p>
     */
    inline BodySectionConfiguration& WithContent(BodySectionContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The style options of a body section.</p>
     */
    inline const SectionStyle& GetStyle() const{ return m_style; }

    /**
     * <p>The style options of a body section.</p>
     */
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }

    /**
     * <p>The style options of a body section.</p>
     */
    inline void SetStyle(const SectionStyle& value) { m_styleHasBeenSet = true; m_style = value; }

    /**
     * <p>The style options of a body section.</p>
     */
    inline void SetStyle(SectionStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }

    /**
     * <p>The style options of a body section.</p>
     */
    inline BodySectionConfiguration& WithStyle(const SectionStyle& value) { SetStyle(value); return *this;}

    /**
     * <p>The style options of a body section.</p>
     */
    inline BodySectionConfiguration& WithStyle(SectionStyle&& value) { SetStyle(std::move(value)); return *this;}


    /**
     * <p>The configuration of a page break for a section.</p>
     */
    inline const SectionPageBreakConfiguration& GetPageBreakConfiguration() const{ return m_pageBreakConfiguration; }

    /**
     * <p>The configuration of a page break for a section.</p>
     */
    inline bool PageBreakConfigurationHasBeenSet() const { return m_pageBreakConfigurationHasBeenSet; }

    /**
     * <p>The configuration of a page break for a section.</p>
     */
    inline void SetPageBreakConfiguration(const SectionPageBreakConfiguration& value) { m_pageBreakConfigurationHasBeenSet = true; m_pageBreakConfiguration = value; }

    /**
     * <p>The configuration of a page break for a section.</p>
     */
    inline void SetPageBreakConfiguration(SectionPageBreakConfiguration&& value) { m_pageBreakConfigurationHasBeenSet = true; m_pageBreakConfiguration = std::move(value); }

    /**
     * <p>The configuration of a page break for a section.</p>
     */
    inline BodySectionConfiguration& WithPageBreakConfiguration(const SectionPageBreakConfiguration& value) { SetPageBreakConfiguration(value); return *this;}

    /**
     * <p>The configuration of a page break for a section.</p>
     */
    inline BodySectionConfiguration& WithPageBreakConfiguration(SectionPageBreakConfiguration&& value) { SetPageBreakConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_sectionId;
    bool m_sectionIdHasBeenSet = false;

    BodySectionContent m_content;
    bool m_contentHasBeenSet = false;

    SectionStyle m_style;
    bool m_styleHasBeenSet = false;

    SectionPageBreakConfiguration m_pageBreakConfiguration;
    bool m_pageBreakConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
