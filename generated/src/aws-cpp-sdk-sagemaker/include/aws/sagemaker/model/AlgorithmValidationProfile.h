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
    AWS_SAGEMAKER_API AlgorithmValidationProfile();
    AWS_SAGEMAKER_API AlgorithmValidationProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AlgorithmValidationProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the profile for the algorithm. The name must have 1 to 63
     * characters. Valid characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of the profile for the algorithm. The name must have 1 to 63
     * characters. Valid characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The name of the profile for the algorithm. The name must have 1 to 63
     * characters. Valid characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The name of the profile for the algorithm. The name must have 1 to 63
     * characters. Valid characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The name of the profile for the algorithm. The name must have 1 to 63
     * characters. Valid characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The name of the profile for the algorithm. The name must have 1 to 63
     * characters. Valid characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline AlgorithmValidationProfile& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of the profile for the algorithm. The name must have 1 to 63
     * characters. Valid characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline AlgorithmValidationProfile& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile for the algorithm. The name must have 1 to 63
     * characters. Valid characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline AlgorithmValidationProfile& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The <code>TrainingJobDefinition</code> object that describes the training job
     * that SageMaker runs to validate your algorithm.</p>
     */
    inline const TrainingJobDefinition& GetTrainingJobDefinition() const{ return m_trainingJobDefinition; }

    /**
     * <p>The <code>TrainingJobDefinition</code> object that describes the training job
     * that SageMaker runs to validate your algorithm.</p>
     */
    inline bool TrainingJobDefinitionHasBeenSet() const { return m_trainingJobDefinitionHasBeenSet; }

    /**
     * <p>The <code>TrainingJobDefinition</code> object that describes the training job
     * that SageMaker runs to validate your algorithm.</p>
     */
    inline void SetTrainingJobDefinition(const TrainingJobDefinition& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = value; }

    /**
     * <p>The <code>TrainingJobDefinition</code> object that describes the training job
     * that SageMaker runs to validate your algorithm.</p>
     */
    inline void SetTrainingJobDefinition(TrainingJobDefinition&& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = std::move(value); }

    /**
     * <p>The <code>TrainingJobDefinition</code> object that describes the training job
     * that SageMaker runs to validate your algorithm.</p>
     */
    inline AlgorithmValidationProfile& WithTrainingJobDefinition(const TrainingJobDefinition& value) { SetTrainingJobDefinition(value); return *this;}

    /**
     * <p>The <code>TrainingJobDefinition</code> object that describes the training job
     * that SageMaker runs to validate your algorithm.</p>
     */
    inline AlgorithmValidationProfile& WithTrainingJobDefinition(TrainingJobDefinition&& value) { SetTrainingJobDefinition(std::move(value)); return *this;}


    /**
     * <p>The <code>TransformJobDefinition</code> object that describes the transform
     * job that SageMaker runs to validate your algorithm.</p>
     */
    inline const TransformJobDefinition& GetTransformJobDefinition() const{ return m_transformJobDefinition; }

    /**
     * <p>The <code>TransformJobDefinition</code> object that describes the transform
     * job that SageMaker runs to validate your algorithm.</p>
     */
    inline bool TransformJobDefinitionHasBeenSet() const { return m_transformJobDefinitionHasBeenSet; }

    /**
     * <p>The <code>TransformJobDefinition</code> object that describes the transform
     * job that SageMaker runs to validate your algorithm.</p>
     */
    inline void SetTransformJobDefinition(const TransformJobDefinition& value) { m_transformJobDefinitionHasBeenSet = true; m_transformJobDefinition = value; }

    /**
     * <p>The <code>TransformJobDefinition</code> object that describes the transform
     * job that SageMaker runs to validate your algorithm.</p>
     */
    inline void SetTransformJobDefinition(TransformJobDefinition&& value) { m_transformJobDefinitionHasBeenSet = true; m_transformJobDefinition = std::move(value); }

    /**
     * <p>The <code>TransformJobDefinition</code> object that describes the transform
     * job that SageMaker runs to validate your algorithm.</p>
     */
    inline AlgorithmValidationProfile& WithTransformJobDefinition(const TransformJobDefinition& value) { SetTransformJobDefinition(value); return *this;}

    /**
     * <p>The <code>TransformJobDefinition</code> object that describes the transform
     * job that SageMaker runs to validate your algorithm.</p>
     */
    inline AlgorithmValidationProfile& WithTransformJobDefinition(TransformJobDefinition&& value) { SetTransformJobDefinition(std::move(value)); return *this;}

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
