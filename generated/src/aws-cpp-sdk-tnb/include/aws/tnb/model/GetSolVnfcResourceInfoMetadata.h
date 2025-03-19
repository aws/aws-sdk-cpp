/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace tnb
{
namespace Model
{

  /**
   * <p>The metadata of a network function.</p> <p>A network instance is a single
   * network created in Amazon Web Services TNB that can be deployed and on which
   * life-cycle operations (like terminate, update, and delete) can be
   * performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolVnfcResourceInfoMetadata">AWS
   * API Reference</a></p>
   */
  class GetSolVnfcResourceInfoMetadata
  {
  public:
    AWS_TNB_API GetSolVnfcResourceInfoMetadata() = default;
    AWS_TNB_API GetSolVnfcResourceInfoMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolVnfcResourceInfoMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the cluster.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    GetSolVnfcResourceInfoMetadata& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the helm chart.</p>
     */
    inline const Aws::String& GetHelmChart() const { return m_helmChart; }
    inline bool HelmChartHasBeenSet() const { return m_helmChartHasBeenSet; }
    template<typename HelmChartT = Aws::String>
    void SetHelmChart(HelmChartT&& value) { m_helmChartHasBeenSet = true; m_helmChart = std::forward<HelmChartT>(value); }
    template<typename HelmChartT = Aws::String>
    GetSolVnfcResourceInfoMetadata& WithHelmChart(HelmChartT&& value) { SetHelmChart(std::forward<HelmChartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the node group.</p>
     */
    inline const Aws::String& GetNodeGroup() const { return m_nodeGroup; }
    inline bool NodeGroupHasBeenSet() const { return m_nodeGroupHasBeenSet; }
    template<typename NodeGroupT = Aws::String>
    void SetNodeGroup(NodeGroupT&& value) { m_nodeGroupHasBeenSet = true; m_nodeGroup = std::forward<NodeGroupT>(value); }
    template<typename NodeGroupT = Aws::String>
    GetSolVnfcResourceInfoMetadata& WithNodeGroup(NodeGroupT&& value) { SetNodeGroup(std::forward<NodeGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_helmChart;
    bool m_helmChartHasBeenSet = false;

    Aws::String m_nodeGroup;
    bool m_nodeGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
