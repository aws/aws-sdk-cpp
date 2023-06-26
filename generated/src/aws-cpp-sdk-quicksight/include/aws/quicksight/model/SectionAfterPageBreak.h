/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SectionPageBreakStatus.h>
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
   * <p>The configuration of a page break after a section.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SectionAfterPageBreak">AWS
   * API Reference</a></p>
   */
  class SectionAfterPageBreak
  {
  public:
    AWS_QUICKSIGHT_API SectionAfterPageBreak();
    AWS_QUICKSIGHT_API SectionAfterPageBreak(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionAfterPageBreak& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The option that enables or disables a page break at the end of a section.</p>
     */
    inline const SectionPageBreakStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The option that enables or disables a page break at the end of a section.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The option that enables or disables a page break at the end of a section.</p>
     */
    inline void SetStatus(const SectionPageBreakStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The option that enables or disables a page break at the end of a section.</p>
     */
    inline void SetStatus(SectionPageBreakStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The option that enables or disables a page break at the end of a section.</p>
     */
    inline SectionAfterPageBreak& WithStatus(const SectionPageBreakStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The option that enables or disables a page break at the end of a section.</p>
     */
    inline SectionAfterPageBreak& WithStatus(SectionPageBreakStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    SectionPageBreakStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
