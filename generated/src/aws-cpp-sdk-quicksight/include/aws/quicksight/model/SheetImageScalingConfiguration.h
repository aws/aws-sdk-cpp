/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SheetImageScalingType.h>
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
   * <p>Determines how the image is scaled</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetImageScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class SheetImageScalingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SheetImageScalingConfiguration() = default;
    AWS_QUICKSIGHT_API SheetImageScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetImageScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scaling option to use when fitting the image inside the container.</p>
     * <p>Valid values are defined as follows:</p> <ul> <li> <p>
     * <code>SCALE_TO_WIDTH</code>: The image takes up the entire width of the
     * container. The image aspect ratio is preserved.</p> </li> <li> <p>
     * <code>SCALE_TO_HEIGHT</code>: The image takes up the entire height of the
     * container. The image aspect ratio is preserved.</p> </li> <li> <p>
     * <code>SCALE_TO_CONTAINER</code>: The image takes up the entire width and height
     * of the container. The image aspect ratio is not preserved.</p> </li> <li> <p>
     * <code>SCALE_NONE</code>: The image is displayed in its original size and is not
     * scaled to the container.</p> </li> </ul>
     */
    inline SheetImageScalingType GetScalingType() const { return m_scalingType; }
    inline bool ScalingTypeHasBeenSet() const { return m_scalingTypeHasBeenSet; }
    inline void SetScalingType(SheetImageScalingType value) { m_scalingTypeHasBeenSet = true; m_scalingType = value; }
    inline SheetImageScalingConfiguration& WithScalingType(SheetImageScalingType value) { SetScalingType(value); return *this;}
    ///@}
  private:

    SheetImageScalingType m_scalingType{SheetImageScalingType::NOT_SET};
    bool m_scalingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
