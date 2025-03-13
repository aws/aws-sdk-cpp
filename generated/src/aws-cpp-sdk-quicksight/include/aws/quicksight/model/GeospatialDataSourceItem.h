/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialStaticFileSource.h>
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
   * <p>The data source properties for the geospatial data.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialDataSourceItem">AWS
   * API Reference</a></p>
   */
  class GeospatialDataSourceItem
  {
  public:
    AWS_QUICKSIGHT_API GeospatialDataSourceItem() = default;
    AWS_QUICKSIGHT_API GeospatialDataSourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialDataSourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The static file data source properties for the geospatial data.</p>
     */
    inline const GeospatialStaticFileSource& GetStaticFileDataSource() const { return m_staticFileDataSource; }
    inline bool StaticFileDataSourceHasBeenSet() const { return m_staticFileDataSourceHasBeenSet; }
    template<typename StaticFileDataSourceT = GeospatialStaticFileSource>
    void SetStaticFileDataSource(StaticFileDataSourceT&& value) { m_staticFileDataSourceHasBeenSet = true; m_staticFileDataSource = std::forward<StaticFileDataSourceT>(value); }
    template<typename StaticFileDataSourceT = GeospatialStaticFileSource>
    GeospatialDataSourceItem& WithStaticFileDataSource(StaticFileDataSourceT&& value) { SetStaticFileDataSource(std::forward<StaticFileDataSourceT>(value)); return *this;}
    ///@}
  private:

    GeospatialStaticFileSource m_staticFileDataSource;
    bool m_staticFileDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
