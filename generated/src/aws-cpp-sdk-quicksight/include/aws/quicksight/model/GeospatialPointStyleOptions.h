/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeospatialSelectedPointStyle.h>
#include <aws/quicksight/model/ClusterMarkerConfiguration.h>
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
   * <p>The point style of the geospatial map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialPointStyleOptions">AWS
   * API Reference</a></p>
   */
  class GeospatialPointStyleOptions
  {
  public:
    AWS_QUICKSIGHT_API GeospatialPointStyleOptions();
    AWS_QUICKSIGHT_API GeospatialPointStyleOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialPointStyleOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The selected point styles (point, cluster) of the geospatial map.</p>
     */
    inline const GeospatialSelectedPointStyle& GetSelectedPointStyle() const{ return m_selectedPointStyle; }

    /**
     * <p>The selected point styles (point, cluster) of the geospatial map.</p>
     */
    inline bool SelectedPointStyleHasBeenSet() const { return m_selectedPointStyleHasBeenSet; }

    /**
     * <p>The selected point styles (point, cluster) of the geospatial map.</p>
     */
    inline void SetSelectedPointStyle(const GeospatialSelectedPointStyle& value) { m_selectedPointStyleHasBeenSet = true; m_selectedPointStyle = value; }

    /**
     * <p>The selected point styles (point, cluster) of the geospatial map.</p>
     */
    inline void SetSelectedPointStyle(GeospatialSelectedPointStyle&& value) { m_selectedPointStyleHasBeenSet = true; m_selectedPointStyle = std::move(value); }

    /**
     * <p>The selected point styles (point, cluster) of the geospatial map.</p>
     */
    inline GeospatialPointStyleOptions& WithSelectedPointStyle(const GeospatialSelectedPointStyle& value) { SetSelectedPointStyle(value); return *this;}

    /**
     * <p>The selected point styles (point, cluster) of the geospatial map.</p>
     */
    inline GeospatialPointStyleOptions& WithSelectedPointStyle(GeospatialSelectedPointStyle&& value) { SetSelectedPointStyle(std::move(value)); return *this;}


    /**
     * <p>The cluster marker configuration of the geospatial point style.</p>
     */
    inline const ClusterMarkerConfiguration& GetClusterMarkerConfiguration() const{ return m_clusterMarkerConfiguration; }

    /**
     * <p>The cluster marker configuration of the geospatial point style.</p>
     */
    inline bool ClusterMarkerConfigurationHasBeenSet() const { return m_clusterMarkerConfigurationHasBeenSet; }

    /**
     * <p>The cluster marker configuration of the geospatial point style.</p>
     */
    inline void SetClusterMarkerConfiguration(const ClusterMarkerConfiguration& value) { m_clusterMarkerConfigurationHasBeenSet = true; m_clusterMarkerConfiguration = value; }

    /**
     * <p>The cluster marker configuration of the geospatial point style.</p>
     */
    inline void SetClusterMarkerConfiguration(ClusterMarkerConfiguration&& value) { m_clusterMarkerConfigurationHasBeenSet = true; m_clusterMarkerConfiguration = std::move(value); }

    /**
     * <p>The cluster marker configuration of the geospatial point style.</p>
     */
    inline GeospatialPointStyleOptions& WithClusterMarkerConfiguration(const ClusterMarkerConfiguration& value) { SetClusterMarkerConfiguration(value); return *this;}

    /**
     * <p>The cluster marker configuration of the geospatial point style.</p>
     */
    inline GeospatialPointStyleOptions& WithClusterMarkerConfiguration(ClusterMarkerConfiguration&& value) { SetClusterMarkerConfiguration(std::move(value)); return *this;}

  private:

    GeospatialSelectedPointStyle m_selectedPointStyle;
    bool m_selectedPointStyleHasBeenSet = false;

    ClusterMarkerConfiguration m_clusterMarkerConfiguration;
    bool m_clusterMarkerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
