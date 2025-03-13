/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ImageMenuOption.h>
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
   * <p>The general image interactions setup for image publish options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImageInteractionOptions">AWS
   * API Reference</a></p>
   */
  class ImageInteractionOptions
  {
  public:
    AWS_QUICKSIGHT_API ImageInteractionOptions() = default;
    AWS_QUICKSIGHT_API ImageInteractionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageInteractionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The menu options for the image.</p>
     */
    inline const ImageMenuOption& GetImageMenuOption() const { return m_imageMenuOption; }
    inline bool ImageMenuOptionHasBeenSet() const { return m_imageMenuOptionHasBeenSet; }
    template<typename ImageMenuOptionT = ImageMenuOption>
    void SetImageMenuOption(ImageMenuOptionT&& value) { m_imageMenuOptionHasBeenSet = true; m_imageMenuOption = std::forward<ImageMenuOptionT>(value); }
    template<typename ImageMenuOptionT = ImageMenuOption>
    ImageInteractionOptions& WithImageMenuOption(ImageMenuOptionT&& value) { SetImageMenuOption(std::forward<ImageMenuOptionT>(value)); return *this;}
    ///@}
  private:

    ImageMenuOption m_imageMenuOption;
    bool m_imageMenuOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
