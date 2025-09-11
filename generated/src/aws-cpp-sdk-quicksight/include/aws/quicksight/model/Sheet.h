/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SheetImage.h>
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
   * <p>A <i>sheet</i>, which is an object that contains a set of visuals that are
   * viewed together on one page in Amazon QuickSight. Every analysis and dashboard
   * contains at least one sheet. Each sheet contains at least one visualization
   * widget, for example a chart, pivot table, or narrative insight. Sheets can be
   * associated with other components, such as controls, filters, and so
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Sheet">AWS
   * API Reference</a></p>
   */
  class Sheet
  {
  public:
    AWS_QUICKSIGHT_API Sheet() = default;
    AWS_QUICKSIGHT_API Sheet(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Sheet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier associated with a sheet.</p>
     */
    inline const Aws::String& GetSheetId() const { return m_sheetId; }
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }
    template<typename SheetIdT = Aws::String>
    void SetSheetId(SheetIdT&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::forward<SheetIdT>(value); }
    template<typename SheetIdT = Aws::String>
    Sheet& WithSheetId(SheetIdT&& value) { SetSheetId(std::forward<SheetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a sheet. This name is displayed on the sheet's tab in the
     * QuickSight console.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Sheet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of images on a sheet.</p>
     */
    inline const Aws::Vector<SheetImage>& GetImages() const { return m_images; }
    inline bool ImagesHasBeenSet() const { return m_imagesHasBeenSet; }
    template<typename ImagesT = Aws::Vector<SheetImage>>
    void SetImages(ImagesT&& value) { m_imagesHasBeenSet = true; m_images = std::forward<ImagesT>(value); }
    template<typename ImagesT = Aws::Vector<SheetImage>>
    Sheet& WithImages(ImagesT&& value) { SetImages(std::forward<ImagesT>(value)); return *this;}
    template<typename ImagesT = SheetImage>
    Sheet& AddImages(ImagesT&& value) { m_imagesHasBeenSet = true; m_images.emplace_back(std::forward<ImagesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sheetId;
    bool m_sheetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SheetImage> m_images;
    bool m_imagesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
