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
  class DescribeClusterSchedulerConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterSchedulerConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterSchedulerConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ID of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigId() const { return m_clusterSchedulerConfigId; }
    inline bool ClusterSchedulerConfigIdHasBeenSet() const { return m_clusterSchedulerConfigIdHasBeenSet; }
    template<typename ClusterSchedulerConfigIdT = Aws::String>
    void SetClusterSchedulerConfigId(ClusterSchedulerConfigIdT&& value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId = std::forward<ClusterSchedulerConfigIdT>(value); }
    template<typename ClusterSchedulerConfigIdT = Aws::String>
    DescribeClusterSchedulerConfigRequest& WithClusterSchedulerConfigId(ClusterSchedulerConfigIdT&& value) { SetClusterSchedulerConfigId(std::forward<ClusterSchedulerConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the cluster policy.</p>
     */
    inline int GetClusterSchedulerConfigVersion() const { return m_clusterSchedulerConfigVersion; }
    inline bool ClusterSchedulerConfigVersionHasBeenSet() const { return m_clusterSchedulerConfigVersionHasBeenSet; }
    inline void SetClusterSchedulerConfigVersion(int value) { m_clusterSchedulerConfigVersionHasBeenSet = true; m_clusterSchedulerConfigVersion = value; }
    inline DescribeClusterSchedulerConfigRequest& WithClusterSchedulerConfigVersion(int value) { SetClusterSchedulerConfigVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigId;
    bool m_clusterSchedulerConfigIdHasBeenSet = false;

    int m_clusterSchedulerConfigVersion{0};
    bool m_clusterSchedulerConfigVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
