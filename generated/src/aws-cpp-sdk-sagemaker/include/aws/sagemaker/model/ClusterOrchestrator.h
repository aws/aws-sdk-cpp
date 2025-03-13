/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterOrchestratorEksConfig.h>
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
   * <p>The type of orchestrator used for the SageMaker HyperPod
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterOrchestrator">AWS
   * API Reference</a></p>
   */
  class ClusterOrchestrator
  {
  public:
    AWS_SAGEMAKER_API ClusterOrchestrator() = default;
    AWS_SAGEMAKER_API ClusterOrchestrator(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterOrchestrator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EKS cluster used as the orchestrator for the SageMaker HyperPod
     * cluster.</p>
     */
    inline const ClusterOrchestratorEksConfig& GetEks() const { return m_eks; }
    inline bool EksHasBeenSet() const { return m_eksHasBeenSet; }
    template<typename EksT = ClusterOrchestratorEksConfig>
    void SetEks(EksT&& value) { m_eksHasBeenSet = true; m_eks = std::forward<EksT>(value); }
    template<typename EksT = ClusterOrchestratorEksConfig>
    ClusterOrchestrator& WithEks(EksT&& value) { SetEks(std::forward<EksT>(value)); return *this;}
    ///@}
  private:

    ClusterOrchestratorEksConfig m_eks;
    bool m_eksHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
