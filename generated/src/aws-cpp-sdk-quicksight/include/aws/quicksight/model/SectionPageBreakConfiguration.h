/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SectionAfterPageBreak.h>
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
   * <p>The configuration of a page break for a section.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SectionPageBreakConfiguration">AWS
   * API Reference</a></p>
   */
  class SectionPageBreakConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SectionPageBreakConfiguration();
    AWS_QUICKSIGHT_API SectionPageBreakConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionPageBreakConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration of a page break after a section.</p>
     */
    inline const SectionAfterPageBreak& GetAfter() const{ return m_after; }

    /**
     * <p>The configuration of a page break after a section.</p>
     */
    inline bool AfterHasBeenSet() const { return m_afterHasBeenSet; }

    /**
     * <p>The configuration of a page break after a section.</p>
     */
    inline void SetAfter(const SectionAfterPageBreak& value) { m_afterHasBeenSet = true; m_after = value; }

    /**
     * <p>The configuration of a page break after a section.</p>
     */
    inline void SetAfter(SectionAfterPageBreak&& value) { m_afterHasBeenSet = true; m_after = std::move(value); }

    /**
     * <p>The configuration of a page break after a section.</p>
     */
    inline SectionPageBreakConfiguration& WithAfter(const SectionAfterPageBreak& value) { SetAfter(value); return *this;}

    /**
     * <p>The configuration of a page break after a section.</p>
     */
    inline SectionPageBreakConfiguration& WithAfter(SectionAfterPageBreak&& value) { SetAfter(std::move(value)); return *this;}

  private:

    SectionAfterPageBreak m_after;
    bool m_afterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
