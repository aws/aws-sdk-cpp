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
    AWS_SAGEMAKER_API ComputeQuotaSummary();
    AWS_SAGEMAKER_API ComputeQuotaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ComputeQuotaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaArn() const{ return m_computeQuotaArn; }
    inline bool ComputeQuotaArnHasBeenSet() const { return m_computeQuotaArnHasBeenSet; }
    inline void SetComputeQuotaArn(const Aws::String& value) { m_computeQuotaArnHasBeenSet = true; m_computeQuotaArn = value; }
    inline void SetComputeQuotaArn(Aws::String&& value) { m_computeQuotaArnHasBeenSet = true; m_computeQuotaArn = std::move(value); }
    inline void SetComputeQuotaArn(const char* value) { m_computeQuotaArnHasBeenSet = true; m_computeQuotaArn.assign(value); }
    inline ComputeQuotaSummary& WithComputeQuotaArn(const Aws::String& value) { SetComputeQuotaArn(value); return *this;}
    inline ComputeQuotaSummary& WithComputeQuotaArn(Aws::String&& value) { SetComputeQuotaArn(std::move(value)); return *this;}
    inline ComputeQuotaSummary& WithComputeQuotaArn(const char* value) { SetComputeQuotaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaId() const{ return m_computeQuotaId; }
    inline bool ComputeQuotaIdHasBeenSet() const { return m_computeQuotaIdHasBeenSet; }
    inline void SetComputeQuotaId(const Aws::String& value) { m_computeQuotaIdHasBeenSet = true; m_computeQuotaId = value; }
    inline void SetComputeQuotaId(Aws::String&& value) { m_computeQuotaIdHasBeenSet = true; m_computeQuotaId = std::move(value); }
    inline void SetComputeQuotaId(const char* value) { m_computeQuotaIdHasBeenSet = true; m_computeQuotaId.assign(value); }
    inline ComputeQuotaSummary& WithComputeQuotaId(const Aws::String& value) { SetComputeQuotaId(value); return *this;}
    inline ComputeQuotaSummary& WithComputeQuotaId(Aws::String&& value) { SetComputeQuotaId(std::move(value)); return *this;}
    inline ComputeQuotaSummary& WithComputeQuotaId(const char* value) { SetComputeQuotaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the compute allocation definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ComputeQuotaSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ComputeQuotaSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ComputeQuotaSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the compute allocation definition.</p>
     */
    inline int GetComputeQuotaVersion() const{ return m_computeQuotaVersion; }
    inline bool ComputeQuotaVersionHasBeenSet() const { return m_computeQuotaVersionHasBeenSet; }
    inline void SetComputeQuotaVersion(int value) { m_computeQuotaVersionHasBeenSet = true; m_computeQuotaVersion = value; }
    inline ComputeQuotaSummary& WithComputeQuotaVersion(int value) { SetComputeQuotaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the compute allocation definition.</p>
     */
    inline const SchedulerResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SchedulerResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SchedulerResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ComputeQuotaSummary& WithStatus(const SchedulerResourceStatus& value) { SetStatus(value); return *this;}
    inline ComputeQuotaSummary& WithStatus(SchedulerResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ComputeQuotaSummary& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ComputeQuotaSummary& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ComputeQuotaSummary& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the compute allocation definition. This includes the
     * resource sharing option, and the setting to preempt low priority tasks.</p>
     */
    inline const ComputeQuotaConfig& GetComputeQuotaConfig() const{ return m_computeQuotaConfig; }
    inline bool ComputeQuotaConfigHasBeenSet() const { return m_computeQuotaConfigHasBeenSet; }
    inline void SetComputeQuotaConfig(const ComputeQuotaConfig& value) { m_computeQuotaConfigHasBeenSet = true; m_computeQuotaConfig = value; }
    inline void SetComputeQuotaConfig(ComputeQuotaConfig&& value) { m_computeQuotaConfigHasBeenSet = true; m_computeQuotaConfig = std::move(value); }
    inline ComputeQuotaSummary& WithComputeQuotaConfig(const ComputeQuotaConfig& value) { SetComputeQuotaConfig(value); return *this;}
    inline ComputeQuotaSummary& WithComputeQuotaConfig(ComputeQuotaConfig&& value) { SetComputeQuotaConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target entity to allocate compute resources to.</p>
     */
    inline const ComputeQuotaTarget& GetComputeQuotaTarget() const{ return m_computeQuotaTarget; }
    inline bool ComputeQuotaTargetHasBeenSet() const { return m_computeQuotaTargetHasBeenSet; }
    inline void SetComputeQuotaTarget(const ComputeQuotaTarget& value) { m_computeQuotaTargetHasBeenSet = true; m_computeQuotaTarget = value; }
    inline void SetComputeQuotaTarget(ComputeQuotaTarget&& value) { m_computeQuotaTargetHasBeenSet = true; m_computeQuotaTarget = std::move(value); }
    inline ComputeQuotaSummary& WithComputeQuotaTarget(const ComputeQuotaTarget& value) { SetComputeQuotaTarget(value); return *this;}
    inline ComputeQuotaSummary& WithComputeQuotaTarget(ComputeQuotaTarget&& value) { SetComputeQuotaTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the compute allocation being described. Use to enable or disable
     * compute allocation.</p> <p>Default is <code>Enabled</code>.</p>
     */
    inline const ActivationState& GetActivationState() const{ return m_activationState; }
    inline bool ActivationStateHasBeenSet() const { return m_activationStateHasBeenSet; }
    inline void SetActivationState(const ActivationState& value) { m_activationStateHasBeenSet = true; m_activationState = value; }
    inline void SetActivationState(ActivationState&& value) { m_activationStateHasBeenSet = true; m_activationState = std::move(value); }
    inline ComputeQuotaSummary& WithActivationState(const ActivationState& value) { SetActivationState(value); return *this;}
    inline ComputeQuotaSummary& WithActivationState(ActivationState&& value) { SetActivationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the compute allocation definition.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ComputeQuotaSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ComputeQuotaSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time of the compute allocation definition.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ComputeQuotaSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ComputeQuotaSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeQuotaArn;
    bool m_computeQuotaArnHasBeenSet = false;

    Aws::String m_computeQuotaId;
    bool m_computeQuotaIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_computeQuotaVersion;
    bool m_computeQuotaVersionHasBeenSet = false;

    SchedulerResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    ComputeQuotaConfig m_computeQuotaConfig;
    bool m_computeQuotaConfigHasBeenSet = false;

    ComputeQuotaTarget m_computeQuotaTarget;
    bool m_computeQuotaTargetHasBeenSet = false;

    ActivationState m_activationState;
    bool m_activationStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
