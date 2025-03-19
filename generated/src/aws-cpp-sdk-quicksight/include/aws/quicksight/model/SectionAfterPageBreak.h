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
    AWS_QUICKSIGHT_API SectionAfterPageBreak() = default;
    AWS_QUICKSIGHT_API SectionAfterPageBreak(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionAfterPageBreak& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The option that enables or disables a page break at the end of a section.</p>
     */
    inline SectionPageBreakStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SectionPageBreakStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SectionAfterPageBreak& WithStatus(SectionPageBreakStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    SectionPageBreakStatus m_status{SectionPageBreakStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
