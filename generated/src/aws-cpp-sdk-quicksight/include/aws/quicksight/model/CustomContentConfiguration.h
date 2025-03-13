/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/CustomContentType.h>
#include <aws/quicksight/model/CustomContentImageScalingConfiguration.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
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
   * <p>The configuration of a <code>CustomContentVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomContentConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomContentConfiguration
  {
  public:
    AWS_QUICKSIGHT_API CustomContentConfiguration() = default;
    AWS_QUICKSIGHT_API CustomContentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomContentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input URL that links to the custom content that you want in the custom
     * visual.</p>
     */
    inline const Aws::String& GetContentUrl() const { return m_contentUrl; }
    inline bool ContentUrlHasBeenSet() const { return m_contentUrlHasBeenSet; }
    template<typename ContentUrlT = Aws::String>
    void SetContentUrl(ContentUrlT&& value) { m_contentUrlHasBeenSet = true; m_contentUrl = std::forward<ContentUrlT>(value); }
    template<typename ContentUrlT = Aws::String>
    CustomContentConfiguration& WithContentUrl(ContentUrlT&& value) { SetContentUrl(std::forward<ContentUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the custom content visual. You can use this to have the
     * visual render as an image.</p>
     */
    inline CustomContentType GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(CustomContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline CustomContentConfiguration& WithContentType(CustomContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sizing options for the size of the custom content visual. This structure
     * is required when the <code>ContentType</code> of the visual is
     * <code>'IMAGE'</code>.</p>
     */
    inline CustomContentImageScalingConfiguration GetImageScaling() const { return m_imageScaling; }
    inline bool ImageScalingHasBeenSet() const { return m_imageScalingHasBeenSet; }
    inline void SetImageScaling(CustomContentImageScalingConfiguration value) { m_imageScalingHasBeenSet = true; m_imageScaling = value; }
    inline CustomContentConfiguration& WithImageScaling(CustomContentImageScalingConfiguration value) { SetImageScaling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const { return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    template<typename InteractionsT = VisualInteractionOptions>
    void SetInteractions(InteractionsT&& value) { m_interactionsHasBeenSet = true; m_interactions = std::forward<InteractionsT>(value); }
    template<typename InteractionsT = VisualInteractionOptions>
    CustomContentConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentUrl;
    bool m_contentUrlHasBeenSet = false;

    CustomContentType m_contentType{CustomContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    CustomContentImageScalingConfiguration m_imageScaling{CustomContentImageScalingConfiguration::NOT_SET};
    bool m_imageScalingHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
