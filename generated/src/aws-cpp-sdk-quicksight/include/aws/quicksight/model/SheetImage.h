/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SheetImageSource.h>
#include <aws/quicksight/model/SheetImageScalingConfiguration.h>
#include <aws/quicksight/model/SheetImageTooltipConfiguration.h>
#include <aws/quicksight/model/ImageInteractionOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ImageCustomAction.h>
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
   * <p>An image that is located on a sheet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetImage">AWS
   * API Reference</a></p>
   */
  class SheetImage
  {
  public:
    AWS_QUICKSIGHT_API SheetImage();
    AWS_QUICKSIGHT_API SheetImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the sheet image.</p>
     */
    inline const Aws::String& GetSheetImageId() const{ return m_sheetImageId; }
    inline bool SheetImageIdHasBeenSet() const { return m_sheetImageIdHasBeenSet; }
    inline void SetSheetImageId(const Aws::String& value) { m_sheetImageIdHasBeenSet = true; m_sheetImageId = value; }
    inline void SetSheetImageId(Aws::String&& value) { m_sheetImageIdHasBeenSet = true; m_sheetImageId = std::move(value); }
    inline void SetSheetImageId(const char* value) { m_sheetImageIdHasBeenSet = true; m_sheetImageId.assign(value); }
    inline SheetImage& WithSheetImageId(const Aws::String& value) { SetSheetImageId(value); return *this;}
    inline SheetImage& WithSheetImageId(Aws::String&& value) { SetSheetImageId(std::move(value)); return *this;}
    inline SheetImage& WithSheetImageId(const char* value) { SetSheetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the image.</p>
     */
    inline const SheetImageSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const SheetImageSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(SheetImageSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline SheetImage& WithSource(const SheetImageSource& value) { SetSource(value); return *this;}
    inline SheetImage& WithSource(SheetImageSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines how the image is scaled.</p>
     */
    inline const SheetImageScalingConfiguration& GetScaling() const{ return m_scaling; }
    inline bool ScalingHasBeenSet() const { return m_scalingHasBeenSet; }
    inline void SetScaling(const SheetImageScalingConfiguration& value) { m_scalingHasBeenSet = true; m_scaling = value; }
    inline void SetScaling(SheetImageScalingConfiguration&& value) { m_scalingHasBeenSet = true; m_scaling = std::move(value); }
    inline SheetImage& WithScaling(const SheetImageScalingConfiguration& value) { SetScaling(value); return *this;}
    inline SheetImage& WithScaling(SheetImageScalingConfiguration&& value) { SetScaling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip to be shown when hovering over the image.</p>
     */
    inline const SheetImageTooltipConfiguration& GetTooltip() const{ return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    inline void SetTooltip(const SheetImageTooltipConfiguration& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }
    inline void SetTooltip(SheetImageTooltipConfiguration&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }
    inline SheetImage& WithTooltip(const SheetImageTooltipConfiguration& value) { SetTooltip(value); return *this;}
    inline SheetImage& WithTooltip(SheetImageTooltipConfiguration&& value) { SetTooltip(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alt text for the image.</p>
     */
    inline const Aws::String& GetImageContentAltText() const{ return m_imageContentAltText; }
    inline bool ImageContentAltTextHasBeenSet() const { return m_imageContentAltTextHasBeenSet; }
    inline void SetImageContentAltText(const Aws::String& value) { m_imageContentAltTextHasBeenSet = true; m_imageContentAltText = value; }
    inline void SetImageContentAltText(Aws::String&& value) { m_imageContentAltTextHasBeenSet = true; m_imageContentAltText = std::move(value); }
    inline void SetImageContentAltText(const char* value) { m_imageContentAltTextHasBeenSet = true; m_imageContentAltText.assign(value); }
    inline SheetImage& WithImageContentAltText(const Aws::String& value) { SetImageContentAltText(value); return *this;}
    inline SheetImage& WithImageContentAltText(Aws::String&& value) { SetImageContentAltText(std::move(value)); return *this;}
    inline SheetImage& WithImageContentAltText(const char* value) { SetImageContentAltText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general image interactions setup for an image.</p>
     */
    inline const ImageInteractionOptions& GetInteractions() const{ return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    inline void SetInteractions(const ImageInteractionOptions& value) { m_interactionsHasBeenSet = true; m_interactions = value; }
    inline void SetInteractions(ImageInteractionOptions&& value) { m_interactionsHasBeenSet = true; m_interactions = std::move(value); }
    inline SheetImage& WithInteractions(const ImageInteractionOptions& value) { SetInteractions(value); return *this;}
    inline SheetImage& WithInteractions(ImageInteractionOptions&& value) { SetInteractions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom actions that are configured for an image.</p>
     */
    inline const Aws::Vector<ImageCustomAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<ImageCustomAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<ImageCustomAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline SheetImage& WithActions(const Aws::Vector<ImageCustomAction>& value) { SetActions(value); return *this;}
    inline SheetImage& WithActions(Aws::Vector<ImageCustomAction>&& value) { SetActions(std::move(value)); return *this;}
    inline SheetImage& AddActions(const ImageCustomAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline SheetImage& AddActions(ImageCustomAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_sheetImageId;
    bool m_sheetImageIdHasBeenSet = false;

    SheetImageSource m_source;
    bool m_sourceHasBeenSet = false;

    SheetImageScalingConfiguration m_scaling;
    bool m_scalingHasBeenSet = false;

    SheetImageTooltipConfiguration m_tooltip;
    bool m_tooltipHasBeenSet = false;

    Aws::String m_imageContentAltText;
    bool m_imageContentAltTextHasBeenSet = false;

    ImageInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;

    Aws::Vector<ImageCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
