/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrainingJobDefinition.h>
#include <aws/sagemaker/model/TransformJobDefinition.h>
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
   * <p>Defines a training job and a batch transform job that SageMaker runs to
   * validate your algorithm.</p> <p>The data provided in the validation profile is
   * made available to your buyers on Amazon Web Services Marketplace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmValidationProfile">AWS
   * API Reference</a></p>
   */
  class AlgorithmValidationProfile
  {
  public:
    AWS_SAGEMAKER_API AlgorithmValidationProfile() = default;
    AWS_SAGEMAKER_API AlgorithmValidationProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AlgorithmValidationProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the profile for the algorithm. The name must have 1 to 63
     * characters. Valid characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    AlgorithmValidationProfile& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TrainingJobDefinition</code> object that describes the training job
     * that SageMaker runs to validate your algorithm.</p>
     */
    inline const TrainingJobDefinition& GetTrainingJobDefinition() const { return m_trainingJobDefinition; }
    inline bool TrainingJobDefinitionHasBeenSet() const { return m_trainingJobDefinitionHasBeenSet; }
    template<typename TrainingJobDefinitionT = TrainingJobDefinition>
    void SetTrainingJobDefinition(TrainingJobDefinitionT&& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = std::forward<TrainingJobDefinitionT>(value); }
    template<typename TrainingJobDefinitionT = TrainingJobDefinition>
    AlgorithmValidationProfile& WithTrainingJobDefinition(TrainingJobDefinitionT&& value) { SetTrainingJobDefinition(std::forward<TrainingJobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TransformJobDefinition</code> object that describes the transform
     * job that SageMaker runs to validate your algorithm.</p>
     */
    inline const TransformJobDefinition& GetTransformJobDefinition() const { return m_transformJobDefinition; }
    inline bool TransformJobDefinitionHasBeenSet() const { return m_transformJobDefinitionHasBeenSet; }
    template<typename TransformJobDefinitionT = TransformJobDefinition>
    void SetTransformJobDefinition(TransformJobDefinitionT&& value) { m_transformJobDefinitionHasBeenSet = true; m_transformJobDefinition = std::forward<TransformJobDefinitionT>(value); }
    template<typename TransformJobDefinitionT = TransformJobDefinition>
    AlgorithmValidationProfile& WithTransformJobDefinition(TransformJobDefinitionT&& value) { SetTransformJobDefinition(std::forward<TransformJobDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    TrainingJobDefinition m_trainingJobDefinition;
    bool m_trainingJobDefinitionHasBeenSet = false;

    TransformJobDefinition m_transformJobDefinition;
    bool m_transformJobDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
