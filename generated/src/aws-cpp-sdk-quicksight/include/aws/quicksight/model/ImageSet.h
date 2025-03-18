/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Image.h>
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
   * <p>The image set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImageSet">AWS
   * API Reference</a></p>
   */
  class ImageSet
  {
  public:
    AWS_QUICKSIGHT_API ImageSet() = default;
    AWS_QUICKSIGHT_API ImageSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The original image.</p>
     */
    inline const Image& GetOriginal() const { return m_original; }
    inline bool OriginalHasBeenSet() const { return m_originalHasBeenSet; }
    template<typename OriginalT = Image>
    void SetOriginal(OriginalT&& value) { m_originalHasBeenSet = true; m_original = std::forward<OriginalT>(value); }
    template<typename OriginalT = Image>
    ImageSet& WithOriginal(OriginalT&& value) { SetOriginal(std::forward<OriginalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image with the height set to 64 pixels.</p>
     */
    inline const Image& GetHeight64() const { return m_height64; }
    inline bool Height64HasBeenSet() const { return m_height64HasBeenSet; }
    template<typename Height64T = Image>
    void SetHeight64(Height64T&& value) { m_height64HasBeenSet = true; m_height64 = std::forward<Height64T>(value); }
    template<typename Height64T = Image>
    ImageSet& WithHeight64(Height64T&& value) { SetHeight64(std::forward<Height64T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image with the height set to 32 pixels.</p>
     */
    inline const Image& GetHeight32() const { return m_height32; }
    inline bool Height32HasBeenSet() const { return m_height32HasBeenSet; }
    template<typename Height32T = Image>
    void SetHeight32(Height32T&& value) { m_height32HasBeenSet = true; m_height32 = std::forward<Height32T>(value); }
    template<typename Height32T = Image>
    ImageSet& WithHeight32(Height32T&& value) { SetHeight32(std::forward<Height32T>(value)); return *this;}
    ///@}
  private:

    Image m_original;
    bool m_originalHasBeenSet = false;

    Image m_height64;
    bool m_height64HasBeenSet = false;

    Image m_height32;
    bool m_height32HasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
