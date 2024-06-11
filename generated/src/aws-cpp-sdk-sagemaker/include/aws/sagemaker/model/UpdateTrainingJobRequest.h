/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProfilerConfigForUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ResourceConfigForUpdate.h>
#include <aws/sagemaker/model/RemoteDebugConfigForUpdate.h>
#include <aws/sagemaker/model/ProfilerRuleConfiguration.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateTrainingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateTrainingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrainingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of a training job to update the Debugger profiling
     * configuration.</p>
     */
    inline const Aws::String& GetTrainingJobName() const{ return m_trainingJobName; }
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }
    inline void SetTrainingJobName(const Aws::String& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = value; }
    inline void SetTrainingJobName(Aws::String&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::move(value); }
    inline void SetTrainingJobName(const char* value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName.assign(value); }
    inline UpdateTrainingJobRequest& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}
    inline UpdateTrainingJobRequest& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}
    inline UpdateTrainingJobRequest& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for Amazon SageMaker Debugger system monitoring,
     * framework profiling, and storage paths.</p>
     */
    inline const ProfilerConfigForUpdate& GetProfilerConfig() const{ return m_profilerConfig; }
    inline bool ProfilerConfigHasBeenSet() const { return m_profilerConfigHasBeenSet; }
    inline void SetProfilerConfig(const ProfilerConfigForUpdate& value) { m_profilerConfigHasBeenSet = true; m_profilerConfig = value; }
    inline void SetProfilerConfig(ProfilerConfigForUpdate&& value) { m_profilerConfigHasBeenSet = true; m_profilerConfig = std::move(value); }
    inline UpdateTrainingJobRequest& WithProfilerConfig(const ProfilerConfigForUpdate& value) { SetProfilerConfig(value); return *this;}
    inline UpdateTrainingJobRequest& WithProfilerConfig(ProfilerConfigForUpdate&& value) { SetProfilerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for Amazon SageMaker Debugger rules for profiling
     * system and framework metrics.</p>
     */
    inline const Aws::Vector<ProfilerRuleConfiguration>& GetProfilerRuleConfigurations() const{ return m_profilerRuleConfigurations; }
    inline bool ProfilerRuleConfigurationsHasBeenSet() const { return m_profilerRuleConfigurationsHasBeenSet; }
    inline void SetProfilerRuleConfigurations(const Aws::Vector<ProfilerRuleConfiguration>& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations = value; }
    inline void SetProfilerRuleConfigurations(Aws::Vector<ProfilerRuleConfiguration>&& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations = std::move(value); }
    inline UpdateTrainingJobRequest& WithProfilerRuleConfigurations(const Aws::Vector<ProfilerRuleConfiguration>& value) { SetProfilerRuleConfigurations(value); return *this;}
    inline UpdateTrainingJobRequest& WithProfilerRuleConfigurations(Aws::Vector<ProfilerRuleConfiguration>&& value) { SetProfilerRuleConfigurations(std::move(value)); return *this;}
    inline UpdateTrainingJobRequest& AddProfilerRuleConfigurations(const ProfilerRuleConfiguration& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations.push_back(value); return *this; }
    inline UpdateTrainingJobRequest& AddProfilerRuleConfigurations(ProfilerRuleConfiguration&& value) { m_profilerRuleConfigurationsHasBeenSet = true; m_profilerRuleConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The training job <code>ResourceConfig</code> to update warm pool retention
     * length.</p>
     */
    inline const ResourceConfigForUpdate& GetResourceConfig() const{ return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    inline void SetResourceConfig(const ResourceConfigForUpdate& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = value; }
    inline void SetResourceConfig(ResourceConfigForUpdate&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::move(value); }
    inline UpdateTrainingJobRequest& WithResourceConfig(const ResourceConfigForUpdate& value) { SetResourceConfig(value); return *this;}
    inline UpdateTrainingJobRequest& WithResourceConfig(ResourceConfigForUpdate&& value) { SetResourceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for remote debugging while the training job is running. You can
     * update the remote debugging configuration when the <code>SecondaryStatus</code>
     * of the job is <code>Downloading</code> or <code>Training</code>.To learn more
     * about the remote debugging functionality of SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-remote-debugging.html">Access
     * a training container through Amazon Web Services Systems Manager (SSM) for
     * remote debugging</a>.</p>
     */
    inline const RemoteDebugConfigForUpdate& GetRemoteDebugConfig() const{ return m_remoteDebugConfig; }
    inline bool RemoteDebugConfigHasBeenSet() const { return m_remoteDebugConfigHasBeenSet; }
    inline void SetRemoteDebugConfig(const RemoteDebugConfigForUpdate& value) { m_remoteDebugConfigHasBeenSet = true; m_remoteDebugConfig = value; }
    inline void SetRemoteDebugConfig(RemoteDebugConfigForUpdate&& value) { m_remoteDebugConfigHasBeenSet = true; m_remoteDebugConfig = std::move(value); }
    inline UpdateTrainingJobRequest& WithRemoteDebugConfig(const RemoteDebugConfigForUpdate& value) { SetRemoteDebugConfig(value); return *this;}
    inline UpdateTrainingJobRequest& WithRemoteDebugConfig(RemoteDebugConfigForUpdate&& value) { SetRemoteDebugConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet = false;

    ProfilerConfigForUpdate m_profilerConfig;
    bool m_profilerConfigHasBeenSet = false;

    Aws::Vector<ProfilerRuleConfiguration> m_profilerRuleConfigurations;
    bool m_profilerRuleConfigurationsHasBeenSet = false;

    ResourceConfigForUpdate m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    RemoteDebugConfigForUpdate m_remoteDebugConfig;
    bool m_remoteDebugConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
