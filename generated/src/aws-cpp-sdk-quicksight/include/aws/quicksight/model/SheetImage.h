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
    AWS_QUICKSIGHT_API SheetImage() = default;
    AWS_QUICKSIGHT_API SheetImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the sheet image.</p>
     */
    inline const Aws::String& GetSheetImageId() const { return m_sheetImageId; }
    inline bool SheetImageIdHasBeenSet() const { return m_sheetImageIdHasBeenSet; }
    template<typename SheetImageIdT = Aws::String>
    void SetSheetImageId(SheetImageIdT&& value) { m_sheetImageIdHasBeenSet = true; m_sheetImageId = std::forward<SheetImageIdT>(value); }
    template<typename SheetImageIdT = Aws::String>
    SheetImage& WithSheetImageId(SheetImageIdT&& value) { SetSheetImageId(std::forward<SheetImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the image.</p>
     */
    inline const SheetImageSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = SheetImageSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = SheetImageSource>
    SheetImage& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines how the image is scaled.</p>
     */
    inline const SheetImageScalingConfiguration& GetScaling() const { return m_scaling; }
    inline bool ScalingHasBeenSet() const { return m_scalingHasBeenSet; }
    template<typename ScalingT = SheetImageScalingConfiguration>
    void SetScaling(ScalingT&& value) { m_scalingHasBeenSet = true; m_scaling = std::forward<ScalingT>(value); }
    template<typename ScalingT = SheetImageScalingConfiguration>
    SheetImage& WithScaling(ScalingT&& value) { SetScaling(std::forward<ScalingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip to be shown when hovering over the image.</p>
     */
    inline const SheetImageTooltipConfiguration& GetTooltip() const { return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    template<typename TooltipT = SheetImageTooltipConfiguration>
    void SetTooltip(TooltipT&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::forward<TooltipT>(value); }
    template<typename TooltipT = SheetImageTooltipConfiguration>
    SheetImage& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alt text for the image.</p>
     */
    inline const Aws::String& GetImageContentAltText() const { return m_imageContentAltText; }
    inline bool ImageContentAltTextHasBeenSet() const { return m_imageContentAltTextHasBeenSet; }
    template<typename ImageContentAltTextT = Aws::String>
    void SetImageContentAltText(ImageContentAltTextT&& value) { m_imageContentAltTextHasBeenSet = true; m_imageContentAltText = std::forward<ImageContentAltTextT>(value); }
    template<typename ImageContentAltTextT = Aws::String>
    SheetImage& WithImageContentAltText(ImageContentAltTextT&& value) { SetImageContentAltText(std::forward<ImageContentAltTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general image interactions setup for an image.</p>
     */
    inline const ImageInteractionOptions& GetInteractions() const { return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    template<typename InteractionsT = ImageInteractionOptions>
    void SetInteractions(InteractionsT&& value) { m_interactionsHasBeenSet = true; m_interactions = std::forward<InteractionsT>(value); }
    template<typename InteractionsT = ImageInteractionOptions>
    SheetImage& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom actions that are configured for an image.</p>
     */
    inline const Aws::Vector<ImageCustomAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<ImageCustomAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<ImageCustomAction>>
    SheetImage& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = ImageCustomAction>
    SheetImage& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
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
