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
    AWS_QUICKSIGHT_API HeaderFooterSectionConfiguration();
    AWS_QUICKSIGHT_API HeaderFooterSectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HeaderFooterSectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the header or footer section.</p>
     */
    inline const Aws::String& GetSectionId() const{ return m_sectionId; }

    /**
     * <p>The unique identifier of the header or footer section.</p>
     */
    inline bool SectionIdHasBeenSet() const { return m_sectionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the header or footer section.</p>
     */
    inline void SetSectionId(const Aws::String& value) { m_sectionIdHasBeenSet = true; m_sectionId = value; }

    /**
     * <p>The unique identifier of the header or footer section.</p>
     */
    inline void SetSectionId(Aws::String&& value) { m_sectionIdHasBeenSet = true; m_sectionId = std::move(value); }

    /**
     * <p>The unique identifier of the header or footer section.</p>
     */
    inline void SetSectionId(const char* value) { m_sectionIdHasBeenSet = true; m_sectionId.assign(value); }

    /**
     * <p>The unique identifier of the header or footer section.</p>
     */
    inline HeaderFooterSectionConfiguration& WithSectionId(const Aws::String& value) { SetSectionId(value); return *this;}

    /**
     * <p>The unique identifier of the header or footer section.</p>
     */
    inline HeaderFooterSectionConfiguration& WithSectionId(Aws::String&& value) { SetSectionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the header or footer section.</p>
     */
    inline HeaderFooterSectionConfiguration& WithSectionId(const char* value) { SetSectionId(value); return *this;}


    /**
     * <p>The layout configuration of the header or footer section.</p>
     */
    inline const SectionLayoutConfiguration& GetLayout() const{ return m_layout; }

    /**
     * <p>The layout configuration of the header or footer section.</p>
     */
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }

    /**
     * <p>The layout configuration of the header or footer section.</p>
     */
    inline void SetLayout(const SectionLayoutConfiguration& value) { m_layoutHasBeenSet = true; m_layout = value; }

    /**
     * <p>The layout configuration of the header or footer section.</p>
     */
    inline void SetLayout(SectionLayoutConfiguration&& value) { m_layoutHasBeenSet = true; m_layout = std::move(value); }

    /**
     * <p>The layout configuration of the header or footer section.</p>
     */
    inline HeaderFooterSectionConfiguration& WithLayout(const SectionLayoutConfiguration& value) { SetLayout(value); return *this;}

    /**
     * <p>The layout configuration of the header or footer section.</p>
     */
    inline HeaderFooterSectionConfiguration& WithLayout(SectionLayoutConfiguration&& value) { SetLayout(std::move(value)); return *this;}


    /**
     * <p>The style options of a header or footer section.</p>
     */
    inline const SectionStyle& GetStyle() const{ return m_style; }

    /**
     * <p>The style options of a header or footer section.</p>
     */
    inline bool StyleHasBeenSet() const { return m_styleHasBeenSet; }

    /**
     * <p>The style options of a header or footer section.</p>
     */
    inline void SetStyle(const SectionStyle& value) { m_styleHasBeenSet = true; m_style = value; }

    /**
     * <p>The style options of a header or footer section.</p>
     */
    inline void SetStyle(SectionStyle&& value) { m_styleHasBeenSet = true; m_style = std::move(value); }

    /**
     * <p>The style options of a header or footer section.</p>
     */
    inline HeaderFooterSectionConfiguration& WithStyle(const SectionStyle& value) { SetStyle(value); return *this;}

    /**
     * <p>The style options of a header or footer section.</p>
     */
    inline HeaderFooterSectionConfiguration& WithStyle(SectionStyle&& value) { SetStyle(std::move(value)); return *this;}

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
