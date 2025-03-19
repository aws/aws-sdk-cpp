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
    AWS_QUICKSIGHT_API SectionPageBreakConfiguration() = default;
    AWS_QUICKSIGHT_API SectionPageBreakConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionPageBreakConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of a page break after a section.</p>
     */
    inline const SectionAfterPageBreak& GetAfter() const { return m_after; }
    inline bool AfterHasBeenSet() const { return m_afterHasBeenSet; }
    template<typename AfterT = SectionAfterPageBreak>
    void SetAfter(AfterT&& value) { m_afterHasBeenSet = true; m_after = std::forward<AfterT>(value); }
    template<typename AfterT = SectionAfterPageBreak>
    SectionPageBreakConfiguration& WithAfter(AfterT&& value) { SetAfter(std::forward<AfterT>(value)); return *this;}
    ///@}
  private:

    SectionAfterPageBreak m_after;
    bool m_afterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
