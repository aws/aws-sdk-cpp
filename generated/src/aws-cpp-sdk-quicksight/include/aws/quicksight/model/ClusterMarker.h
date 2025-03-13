/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SimpleClusterMarker.h>
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
   * <p>The cluster marker that is a part of the cluster marker
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ClusterMarker">AWS
   * API Reference</a></p>
   */
  class ClusterMarker
  {
  public:
    AWS_QUICKSIGHT_API ClusterMarker() = default;
    AWS_QUICKSIGHT_API ClusterMarker(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ClusterMarker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The simple cluster marker of the cluster marker.</p>
     */
    inline const SimpleClusterMarker& GetSimpleClusterMarker() const { return m_simpleClusterMarker; }
    inline bool SimpleClusterMarkerHasBeenSet() const { return m_simpleClusterMarkerHasBeenSet; }
    template<typename SimpleClusterMarkerT = SimpleClusterMarker>
    void SetSimpleClusterMarker(SimpleClusterMarkerT&& value) { m_simpleClusterMarkerHasBeenSet = true; m_simpleClusterMarker = std::forward<SimpleClusterMarkerT>(value); }
    template<typename SimpleClusterMarkerT = SimpleClusterMarker>
    ClusterMarker& WithSimpleClusterMarker(SimpleClusterMarkerT&& value) { SetSimpleClusterMarker(std::forward<SimpleClusterMarkerT>(value)); return *this;}
    ///@}
  private:

    SimpleClusterMarker m_simpleClusterMarker;
    bool m_simpleClusterMarkerHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
