/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingInstanceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Configuration information for profiling rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProfilerRuleConfiguration">AWS
   * API Reference</a></p>
   */
  class ProfilerRuleConfiguration
  {
  public:
    AWS_SAGEMAKER_API ProfilerRuleConfiguration() = default;
    AWS_SAGEMAKER_API ProfilerRuleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProfilerRuleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule configuration. It must be unique relative to other rule
     * configuration names.</p>
     */
    inline const Aws::String& GetRuleConfigurationName() const { return m_ruleConfigurationName; }
    inline bool RuleConfigurationNameHasBeenSet() const { return m_ruleConfigurationNameHasBeenSet; }
    template<typename RuleConfigurationNameT = Aws::String>
    void SetRuleConfigurationName(RuleConfigurationNameT&& value) { m_ruleConfigurationNameHasBeenSet = true; m_ruleConfigurationName = std::forward<RuleConfigurationNameT>(value); }
    template<typename RuleConfigurationNameT = Aws::String>
    ProfilerRuleConfiguration& WithRuleConfigurationName(RuleConfigurationNameT&& value) { SetRuleConfigurationName(std::forward<RuleConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path to local storage location for output of rules. Defaults to
     * <code>/opt/ml/processing/output/rule/</code>. </p>
     */
    inline const Aws::String& GetLocalPath() const { return m_localPath; }
    inline bool LocalPathHasBeenSet() const { return m_localPathHasBeenSet; }
    template<typename LocalPathT = Aws::String>
    void SetLocalPath(LocalPathT&& value) { m_localPathHasBeenSet = true; m_localPath = std::forward<LocalPathT>(value); }
    template<typename LocalPathT = Aws::String>
    ProfilerRuleConfiguration& WithLocalPath(LocalPathT&& value) { SetLocalPath(std::forward<LocalPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Path to Amazon S3 storage location for rules.</p>
     */
    inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    template<typename S3OutputPathT = Aws::String>
    void SetS3OutputPath(S3OutputPathT&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::forward<S3OutputPathT>(value); }
    template<typename S3OutputPathT = Aws::String>
    ProfilerRuleConfiguration& WithS3OutputPath(S3OutputPathT&& value) { SetS3OutputPath(std::forward<S3OutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic Container Registry Image for the managed rule
     * evaluation.</p>
     */
    inline const Aws::String& GetRuleEvaluatorImage() const { return m_ruleEvaluatorImage; }
    inline bool RuleEvaluatorImageHasBeenSet() const { return m_ruleEvaluatorImageHasBeenSet; }
    template<typename RuleEvaluatorImageT = Aws::String>
    void SetRuleEvaluatorImage(RuleEvaluatorImageT&& value) { m_ruleEvaluatorImageHasBeenSet = true; m_ruleEvaluatorImage = std::forward<RuleEvaluatorImageT>(value); }
    template<typename RuleEvaluatorImageT = Aws::String>
    ProfilerRuleConfiguration& WithRuleEvaluatorImage(RuleEvaluatorImageT&& value) { SetRuleEvaluatorImage(std::forward<RuleEvaluatorImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type to deploy a custom rule for profiling a training job.</p>
     */
    inline ProcessingInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ProcessingInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ProfilerRuleConfiguration& WithInstanceType(ProcessingInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GB, of the ML storage volume attached to the processing
     * instance.</p>
     */
    inline int GetVolumeSizeInGB() const { return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline ProfilerRuleConfiguration& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime configuration for rule container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRuleParameters() const { return m_ruleParameters; }
    inline bool RuleParametersHasBeenSet() const { return m_ruleParametersHasBeenSet; }
    template<typename RuleParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetRuleParameters(RuleParametersT&& value) { m_ruleParametersHasBeenSet = true; m_ruleParameters = std::forward<RuleParametersT>(value); }
    template<typename RuleParametersT = Aws::Map<Aws::String, Aws::String>>
    ProfilerRuleConfiguration& WithRuleParameters(RuleParametersT&& value) { SetRuleParameters(std::forward<RuleParametersT>(value)); return *this;}
    template<typename RuleParametersKeyT = Aws::String, typename RuleParametersValueT = Aws::String>
    ProfilerRuleConfiguration& AddRuleParameters(RuleParametersKeyT&& key, RuleParametersValueT&& value) {
      m_ruleParametersHasBeenSet = true; m_ruleParameters.emplace(std::forward<RuleParametersKeyT>(key), std::forward<RuleParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_ruleConfigurationName;
    bool m_ruleConfigurationNameHasBeenSet = false;

    Aws::String m_localPath;
    bool m_localPathHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    Aws::String m_ruleEvaluatorImage;
    bool m_ruleEvaluatorImageHasBeenSet = false;

    ProcessingInstanceType m_instanceType{ProcessingInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_volumeSizeInGB{0};
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_ruleParameters;
    bool m_ruleParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
