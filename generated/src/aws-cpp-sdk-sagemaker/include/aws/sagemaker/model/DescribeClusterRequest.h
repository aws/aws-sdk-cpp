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
  class DescribeClusterRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCluster"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster.</p>
     */
    inline DescribeClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster.</p>
     */
    inline DescribeClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster.</p>
     */
    inline DescribeClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
