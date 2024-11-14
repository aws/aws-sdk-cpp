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
    AWS_QUICKSIGHT_API ImageSet();
    AWS_QUICKSIGHT_API ImageSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The original image.</p>
     */
    inline const Image& GetOriginal() const{ return m_original; }
    inline bool OriginalHasBeenSet() const { return m_originalHasBeenSet; }
    inline void SetOriginal(const Image& value) { m_originalHasBeenSet = true; m_original = value; }
    inline void SetOriginal(Image&& value) { m_originalHasBeenSet = true; m_original = std::move(value); }
    inline ImageSet& WithOriginal(const Image& value) { SetOriginal(value); return *this;}
    inline ImageSet& WithOriginal(Image&& value) { SetOriginal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image with the height set to 64 pixels.</p>
     */
    inline const Image& GetHeight64() const{ return m_height64; }
    inline bool Height64HasBeenSet() const { return m_height64HasBeenSet; }
    inline void SetHeight64(const Image& value) { m_height64HasBeenSet = true; m_height64 = value; }
    inline void SetHeight64(Image&& value) { m_height64HasBeenSet = true; m_height64 = std::move(value); }
    inline ImageSet& WithHeight64(const Image& value) { SetHeight64(value); return *this;}
    inline ImageSet& WithHeight64(Image&& value) { SetHeight64(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image with the height set to 32 pixels.</p>
     */
    inline const Image& GetHeight32() const{ return m_height32; }
    inline bool Height32HasBeenSet() const { return m_height32HasBeenSet; }
    inline void SetHeight32(const Image& value) { m_height32HasBeenSet = true; m_height32 = value; }
    inline void SetHeight32(Image&& value) { m_height32HasBeenSet = true; m_height32 = std::move(value); }
    inline ImageSet& WithHeight32(const Image& value) { SetHeight32(value); return *this;}
    inline ImageSet& WithHeight32(Image&& value) { SetHeight32(std::move(value)); return *this;}
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
