/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ClusterMarker.h>
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
   * <p>The cluster marker configuration of the geospatial map selected point
   * style.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ClusterMarkerConfiguration">AWS
   * API Reference</a></p>
   */
  class ClusterMarkerConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ClusterMarkerConfiguration() = default;
    AWS_QUICKSIGHT_API ClusterMarkerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ClusterMarkerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cluster marker that is a part of the cluster marker configuration.</p>
     */
    inline const ClusterMarker& GetClusterMarker() const { return m_clusterMarker; }
    inline bool ClusterMarkerHasBeenSet() const { return m_clusterMarkerHasBeenSet; }
    template<typename ClusterMarkerT = ClusterMarker>
    void SetClusterMarker(ClusterMarkerT&& value) { m_clusterMarkerHasBeenSet = true; m_clusterMarker = std::forward<ClusterMarkerT>(value); }
    template<typename ClusterMarkerT = ClusterMarker>
    ClusterMarkerConfiguration& WithClusterMarker(ClusterMarkerT&& value) { SetClusterMarker(std::forward<ClusterMarkerT>(value)); return *this;}
    ///@}
  private:

    ClusterMarker m_clusterMarker;
    bool m_clusterMarkerHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
