/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SchedulerResourceStatus.h>
#include <aws/sagemaker/model/ComputeQuotaConfig.h>
#include <aws/sagemaker/model/ComputeQuotaTarget.h>
#include <aws/sagemaker/model/ActivationState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary of the compute allocation definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ComputeQuotaSummary">AWS
   * API Reference</a></p>
   */
  class ComputeQuotaSummary
  {
  public:
    AWS_SAGEMAKER_API ComputeQuotaSummary() = default;
    AWS_SAGEMAKER_API ComputeQuotaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ComputeQuotaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaArn() const { return m_computeQuotaArn; }
    inline bool ComputeQuotaArnHasBeenSet() const { return m_computeQuotaArnHasBeenSet; }
    template<typename ComputeQuotaArnT = Aws::String>
    void SetComputeQuotaArn(ComputeQuotaArnT&& value) { m_computeQuotaArnHasBeenSet = true; m_computeQuotaArn = std::forward<ComputeQuotaArnT>(value); }
    template<typename ComputeQuotaArnT = Aws::String>
    ComputeQuotaSummary& WithComputeQuotaArn(ComputeQuotaArnT&& value) { SetComputeQuotaArn(std::forward<ComputeQuotaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaId() const { return m_computeQuotaId; }
    inline bool ComputeQuotaIdHasBeenSet() const { return m_computeQuotaIdHasBeenSet; }
    template<typename ComputeQuotaIdT = Aws::String>
    void SetComputeQuotaId(ComputeQuotaIdT&& value) { m_computeQuotaIdHasBeenSet = true; m_computeQuotaId = std::forward<ComputeQuotaIdT>(value); }
    template<typename ComputeQuotaIdT = Aws::String>
    ComputeQuotaSummary& WithComputeQuotaId(ComputeQuotaIdT&& value) { SetComputeQuotaId(std::forward<ComputeQuotaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the compute allocation definition.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ComputeQuotaSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the compute allocation definition.</p>
     */
    inline int GetComputeQuotaVersion() const { return m_computeQuotaVersion; }
    inline bool ComputeQuotaVersionHasBeenSet() const { return m_computeQuotaVersionHasBeenSet; }
    inline void SetComputeQuotaVersion(int value) { m_computeQuotaVersionHasBeenSet = true; m_computeQuotaVersion = value; }
    inline ComputeQuotaSummary& WithComputeQuotaVersion(int value) { SetComputeQuotaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the compute allocation definition.</p>
     */
    inline SchedulerResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SchedulerResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ComputeQuotaSummary& WithStatus(SchedulerResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ComputeQuotaSummary& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the compute allocation definition. This includes the
     * resource sharing option, and the setting to preempt low priority tasks.</p>
     */
    inline const ComputeQuotaConfig& GetComputeQuotaConfig() const { return m_computeQuotaConfig; }
    inline bool ComputeQuotaConfigHasBeenSet() const { return m_computeQuotaConfigHasBeenSet; }
    template<typename ComputeQuotaConfigT = ComputeQuotaConfig>
    void SetComputeQuotaConfig(ComputeQuotaConfigT&& value) { m_computeQuotaConfigHasBeenSet = true; m_computeQuotaConfig = std::forward<ComputeQuotaConfigT>(value); }
    template<typename ComputeQuotaConfigT = ComputeQuotaConfig>
    ComputeQuotaSummary& WithComputeQuotaConfig(ComputeQuotaConfigT&& value) { SetComputeQuotaConfig(std::forward<ComputeQuotaConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target entity to allocate compute resources to.</p>
     */
    inline const ComputeQuotaTarget& GetComputeQuotaTarget() const { return m_computeQuotaTarget; }
    inline bool ComputeQuotaTargetHasBeenSet() const { return m_computeQuotaTargetHasBeenSet; }
    template<typename ComputeQuotaTargetT = ComputeQuotaTarget>
    void SetComputeQuotaTarget(ComputeQuotaTargetT&& value) { m_computeQuotaTargetHasBeenSet = true; m_computeQuotaTarget = std::forward<ComputeQuotaTargetT>(value); }
    template<typename ComputeQuotaTargetT = ComputeQuotaTarget>
    ComputeQuotaSummary& WithComputeQuotaTarget(ComputeQuotaTargetT&& value) { SetComputeQuotaTarget(std::forward<ComputeQuotaTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the compute allocation being described. Use to enable or disable
     * compute allocation.</p> <p>Default is <code>Enabled</code>.</p>
     */
    inline ActivationState GetActivationState() const { return m_activationState; }
    inline bool ActivationStateHasBeenSet() const { return m_activationStateHasBeenSet; }
    inline void SetActivationState(ActivationState value) { m_activationStateHasBeenSet = true; m_activationState = value; }
    inline ComputeQuotaSummary& WithActivationState(ActivationState value) { SetActivationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the compute allocation definition.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ComputeQuotaSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time of the compute allocation definition.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ComputeQuotaSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeQuotaArn;
    bool m_computeQuotaArnHasBeenSet = false;

    Aws::String m_computeQuotaId;
    bool m_computeQuotaIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_computeQuotaVersion{0};
    bool m_computeQuotaVersionHasBeenSet = false;

    SchedulerResourceStatus m_status{SchedulerResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    ComputeQuotaConfig m_computeQuotaConfig;
    bool m_computeQuotaConfigHasBeenSet = false;

    ComputeQuotaTarget m_computeQuotaTarget;
    bool m_computeQuotaTargetHasBeenSet = false;

    ActivationState m_activationState{ActivationState::NOT_SET};
    bool m_activationStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
