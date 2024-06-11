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
    AWS_QUICKSIGHT_API SheetControlInfoIconLabelOptions();
    AWS_QUICKSIGHT_API SheetControlInfoIconLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetControlInfoIconLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility configuration of info icon label options.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline SheetControlInfoIconLabelOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline SheetControlInfoIconLabelOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The text content of info icon.</p>
     */
    inline const Aws::String& GetInfoIconText() const{ return m_infoIconText; }
    inline bool InfoIconTextHasBeenSet() const { return m_infoIconTextHasBeenSet; }
    inline void SetInfoIconText(const Aws::String& value) { m_infoIconTextHasBeenSet = true; m_infoIconText = value; }
    inline void SetInfoIconText(Aws::String&& value) { m_infoIconTextHasBeenSet = true; m_infoIconText = std::move(value); }
    inline void SetInfoIconText(const char* value) { m_infoIconTextHasBeenSet = true; m_infoIconText.assign(value); }
    inline SheetControlInfoIconLabelOptions& WithInfoIconText(const Aws::String& value) { SetInfoIconText(value); return *this;}
    inline SheetControlInfoIconLabelOptions& WithInfoIconText(Aws::String&& value) { SetInfoIconText(std::move(value)); return *this;}
    inline SheetControlInfoIconLabelOptions& WithInfoIconText(const char* value) { SetInfoIconText(value); return *this;}
    ///@}
  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    Aws::String m_infoIconText;
    bool m_infoIconTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
