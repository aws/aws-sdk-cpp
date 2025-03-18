/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ImageConfiguration.h>
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
   * <p>The image set configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImageSetConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageSetConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ImageSetConfiguration() = default;
    AWS_QUICKSIGHT_API ImageSetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageSetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The original image.</p>
     */
    inline const ImageConfiguration& GetOriginal() const { return m_original; }
    inline bool OriginalHasBeenSet() const { return m_originalHasBeenSet; }
    template<typename OriginalT = ImageConfiguration>
    void SetOriginal(OriginalT&& value) { m_originalHasBeenSet = true; m_original = std::forward<OriginalT>(value); }
    template<typename OriginalT = ImageConfiguration>
    ImageSetConfiguration& WithOriginal(OriginalT&& value) { SetOriginal(std::forward<OriginalT>(value)); return *this;}
    ///@}
  private:

    ImageConfiguration m_original;
    bool m_originalHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
