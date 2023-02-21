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
    AWS_TNB_API GetSolVnfcResourceInfoMetadata();
    AWS_TNB_API GetSolVnfcResourceInfoMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API GetSolVnfcResourceInfoMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the cluster.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>Information about the cluster.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>Information about the cluster.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>Information about the cluster.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>Information about the cluster.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>Information about the cluster.</p>
     */
    inline GetSolVnfcResourceInfoMetadata& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>Information about the cluster.</p>
     */
    inline GetSolVnfcResourceInfoMetadata& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>Information about the cluster.</p>
     */
    inline GetSolVnfcResourceInfoMetadata& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>Information about the helm chart.</p>
     */
    inline const Aws::String& GetHelmChart() const{ return m_helmChart; }

    /**
     * <p>Information about the helm chart.</p>
     */
    inline bool HelmChartHasBeenSet() const { return m_helmChartHasBeenSet; }

    /**
     * <p>Information about the helm chart.</p>
     */
    inline void SetHelmChart(const Aws::String& value) { m_helmChartHasBeenSet = true; m_helmChart = value; }

    /**
     * <p>Information about the helm chart.</p>
     */
    inline void SetHelmChart(Aws::String&& value) { m_helmChartHasBeenSet = true; m_helmChart = std::move(value); }

    /**
     * <p>Information about the helm chart.</p>
     */
    inline void SetHelmChart(const char* value) { m_helmChartHasBeenSet = true; m_helmChart.assign(value); }

    /**
     * <p>Information about the helm chart.</p>
     */
    inline GetSolVnfcResourceInfoMetadata& WithHelmChart(const Aws::String& value) { SetHelmChart(value); return *this;}

    /**
     * <p>Information about the helm chart.</p>
     */
    inline GetSolVnfcResourceInfoMetadata& WithHelmChart(Aws::String&& value) { SetHelmChart(std::move(value)); return *this;}

    /**
     * <p>Information about the helm chart.</p>
     */
    inline GetSolVnfcResourceInfoMetadata& WithHelmChart(const char* value) { SetHelmChart(value); return *this;}


    /**
     * <p>Information about the node group.</p>
     */
    inline const Aws::String& GetNodeGroup() const{ return m_nodeGroup; }

    /**
     * <p>Information about the node group.</p>
     */
    inline bool NodeGroupHasBeenSet() const { return m_nodeGroupHasBeenSet; }

    /**
     * <p>Information about the node group.</p>
     */
    inline void SetNodeGroup(const Aws::String& value) { m_nodeGroupHasBeenSet = true; m_nodeGroup = value; }

    /**
     * <p>Information about the node group.</p>
     */
    inline void SetNodeGroup(Aws::String&& value) { m_nodeGroupHasBeenSet = true; m_nodeGroup = std::move(value); }

    /**
     * <p>Information about the node group.</p>
     */
    inline void SetNodeGroup(const char* value) { m_nodeGroupHasBeenSet = true; m_nodeGroup.assign(value); }

    /**
     * <p>Information about the node group.</p>
     */
    inline GetSolVnfcResourceInfoMetadata& WithNodeGroup(const Aws::String& value) { SetNodeGroup(value); return *this;}

    /**
     * <p>Information about the node group.</p>
     */
    inline GetSolVnfcResourceInfoMetadata& WithNodeGroup(Aws::String&& value) { SetNodeGroup(std::move(value)); return *this;}

    /**
     * <p>Information about the node group.</p>
     */
    inline GetSolVnfcResourceInfoMetadata& WithNodeGroup(const char* value) { SetNodeGroup(value); return *this;}

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
