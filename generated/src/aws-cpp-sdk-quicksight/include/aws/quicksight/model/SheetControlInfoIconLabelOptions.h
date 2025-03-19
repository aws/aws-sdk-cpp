/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A control to display info icons for filters and parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetControlInfoIconLabelOptions">AWS
   * API Reference</a></p>
   */
  class SheetControlInfoIconLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API SheetControlInfoIconLabelOptions() = default;
    AWS_QUICKSIGHT_API SheetControlInfoIconLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetControlInfoIconLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility configuration of info icon label options.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline SheetControlInfoIconLabelOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The text content of info icon.</p>
     */
    inline const Aws::String& GetInfoIconText() const { return m_infoIconText; }
    inline bool InfoIconTextHasBeenSet() const { return m_infoIconTextHasBeenSet; }
    template<typename InfoIconTextT = Aws::String>
    void SetInfoIconText(InfoIconTextT&& value) { m_infoIconTextHasBeenSet = true; m_infoIconText = std::forward<InfoIconTextT>(value); }
    template<typename InfoIconTextT = Aws::String>
    SheetControlInfoIconLabelOptions& WithInfoIconText(InfoIconTextT&& value) { SetInfoIconText(std::forward<InfoIconTextT>(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    Aws::String m_infoIconText;
    bool m_infoIconTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
