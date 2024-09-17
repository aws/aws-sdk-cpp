/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The configuration settings for the Amazon EKS cluster used as the
   * orchestrator for the SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterOrchestratorEksConfig">AWS
   * API Reference</a></p>
   */
  class ClusterOrchestratorEksConfig
  {
  public:
    AWS_SAGEMAKER_API ClusterOrchestratorEksConfig();
    AWS_SAGEMAKER_API ClusterOrchestratorEksConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterOrchestratorEksConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EKS cluster associated with the
     * SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ClusterOrchestratorEksConfig& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ClusterOrchestratorEksConfig& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ClusterOrchestratorEksConfig& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
