/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeClusterNodeRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterNodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterNode"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which the instance is.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which the instance is.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which the instance is.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which the instance is.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which the instance is.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which the instance is.</p>
     */
    inline DescribeClusterNodeRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which the instance is.</p>
     */
    inline DescribeClusterNodeRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which the instance is.</p>
     */
    inline DescribeClusterNodeRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline DescribeClusterNodeRequest& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline DescribeClusterNodeRequest& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline DescribeClusterNodeRequest& WithNodeId(const char* value) { SetNodeId(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
