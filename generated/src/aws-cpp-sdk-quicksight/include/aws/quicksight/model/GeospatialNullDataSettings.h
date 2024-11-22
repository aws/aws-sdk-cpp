/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialNullSymbolStyle.h>
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
   * <p>The properties for the visualization of null data.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialNullDataSettings">AWS
   * API Reference</a></p>
   */
  class GeospatialNullDataSettings
  {
  public:
    AWS_QUICKSIGHT_API GeospatialNullDataSettings();
    AWS_QUICKSIGHT_API GeospatialNullDataSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialNullDataSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The symbol style for null data.</p>
     */
    inline const GeospatialNullSymbolStyle& GetSymbolStyle() const{ return m_symbolStyle; }
    inline bool SymbolStyleHasBeenSet() const { return m_symbolStyleHasBeenSet; }
    inline void SetSymbolStyle(const GeospatialNullSymbolStyle& value) { m_symbolStyleHasBeenSet = true; m_symbolStyle = value; }
    inline void SetSymbolStyle(GeospatialNullSymbolStyle&& value) { m_symbolStyleHasBeenSet = true; m_symbolStyle = std::move(value); }
    inline GeospatialNullDataSettings& WithSymbolStyle(const GeospatialNullSymbolStyle& value) { SetSymbolStyle(value); return *this;}
    inline GeospatialNullDataSettings& WithSymbolStyle(GeospatialNullSymbolStyle&& value) { SetSymbolStyle(std::move(value)); return *this;}
    ///@}
  private:

    GeospatialNullSymbolStyle m_symbolStyle;
    bool m_symbolStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
