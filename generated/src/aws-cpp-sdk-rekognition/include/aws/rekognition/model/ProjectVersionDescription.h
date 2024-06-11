/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rekognition/model/ProjectVersionStatus.h>
#include <aws/rekognition/model/OutputConfig.h>
#include <aws/rekognition/model/TrainingDataResult.h>
#include <aws/rekognition/model/TestingDataResult.h>
#include <aws/rekognition/model/EvaluationResult.h>
#include <aws/rekognition/model/GroundTruthManifest.h>
#include <aws/rekognition/model/CustomizationFeature.h>
#include <aws/rekognition/model/CustomizationFeatureConfig.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>A description of a version of a Amazon Rekognition project
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProjectVersionDescription">AWS
   * API Reference</a></p>
   */
  class ProjectVersionDescription
  {
  public:
    AWS_REKOGNITION_API ProjectVersionDescription();
    AWS_REKOGNITION_API ProjectVersionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProjectVersionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project version. </p>
     */
    inline const Aws::String& GetProjectVersionArn() const{ return m_projectVersionArn; }
    inline bool ProjectVersionArnHasBeenSet() const { return m_projectVersionArnHasBeenSet; }
    inline void SetProjectVersionArn(const Aws::String& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = value; }
    inline void SetProjectVersionArn(Aws::String&& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = std::move(value); }
    inline void SetProjectVersionArn(const char* value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn.assign(value); }
    inline ProjectVersionDescription& WithProjectVersionArn(const Aws::String& value) { SetProjectVersionArn(value); return *this;}
    inline ProjectVersionDescription& WithProjectVersionArn(Aws::String&& value) { SetProjectVersionArn(std::move(value)); return *this;}
    inline ProjectVersionDescription& WithProjectVersionArn(const char* value) { SetProjectVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix datetime for the date and time that training started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline ProjectVersionDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline ProjectVersionDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of inference units used by the model. Applies only to
     * Custom Labels projects. For more information, see
     * <a>StartProjectVersion</a>.</p>
     */
    inline int GetMinInferenceUnits() const{ return m_minInferenceUnits; }
    inline bool MinInferenceUnitsHasBeenSet() const { return m_minInferenceUnitsHasBeenSet; }
    inline void SetMinInferenceUnits(int value) { m_minInferenceUnitsHasBeenSet = true; m_minInferenceUnits = value; }
    inline ProjectVersionDescription& WithMinInferenceUnits(int value) { SetMinInferenceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the model version.</p>
     */
    inline const ProjectVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProjectVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProjectVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProjectVersionDescription& WithStatus(const ProjectVersionStatus& value) { SetStatus(value); return *this;}
    inline ProjectVersionDescription& WithStatus(ProjectVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ProjectVersionDescription& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ProjectVersionDescription& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ProjectVersionDescription& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, that you were billed for a successful training of
     * the model version. This value is only returned if the model version has been
     * successfully trained.</p>
     */
    inline long long GetBillableTrainingTimeInSeconds() const{ return m_billableTrainingTimeInSeconds; }
    inline bool BillableTrainingTimeInSecondsHasBeenSet() const { return m_billableTrainingTimeInSecondsHasBeenSet; }
    inline void SetBillableTrainingTimeInSeconds(long long value) { m_billableTrainingTimeInSecondsHasBeenSet = true; m_billableTrainingTimeInSeconds = value; }
    inline ProjectVersionDescription& WithBillableTrainingTimeInSeconds(long long value) { SetBillableTrainingTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix date and time that training of the model ended.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTimestamp() const{ return m_trainingEndTimestamp; }
    inline bool TrainingEndTimestampHasBeenSet() const { return m_trainingEndTimestampHasBeenSet; }
    inline void SetTrainingEndTimestamp(const Aws::Utils::DateTime& value) { m_trainingEndTimestampHasBeenSet = true; m_trainingEndTimestamp = value; }
    inline void SetTrainingEndTimestamp(Aws::Utils::DateTime&& value) { m_trainingEndTimestampHasBeenSet = true; m_trainingEndTimestamp = std::move(value); }
    inline ProjectVersionDescription& WithTrainingEndTimestamp(const Aws::Utils::DateTime& value) { SetTrainingEndTimestamp(value); return *this;}
    inline ProjectVersionDescription& WithTrainingEndTimestamp(Aws::Utils::DateTime&& value) { SetTrainingEndTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where training results are saved.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline ProjectVersionDescription& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}
    inline ProjectVersionDescription& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the training results.</p>
     */
    inline const TrainingDataResult& GetTrainingDataResult() const{ return m_trainingDataResult; }
    inline bool TrainingDataResultHasBeenSet() const { return m_trainingDataResultHasBeenSet; }
    inline void SetTrainingDataResult(const TrainingDataResult& value) { m_trainingDataResultHasBeenSet = true; m_trainingDataResult = value; }
    inline void SetTrainingDataResult(TrainingDataResult&& value) { m_trainingDataResultHasBeenSet = true; m_trainingDataResult = std::move(value); }
    inline ProjectVersionDescription& WithTrainingDataResult(const TrainingDataResult& value) { SetTrainingDataResult(value); return *this;}
    inline ProjectVersionDescription& WithTrainingDataResult(TrainingDataResult&& value) { SetTrainingDataResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the testing results.</p>
     */
    inline const TestingDataResult& GetTestingDataResult() const{ return m_testingDataResult; }
    inline bool TestingDataResultHasBeenSet() const { return m_testingDataResultHasBeenSet; }
    inline void SetTestingDataResult(const TestingDataResult& value) { m_testingDataResultHasBeenSet = true; m_testingDataResult = value; }
    inline void SetTestingDataResult(TestingDataResult&& value) { m_testingDataResultHasBeenSet = true; m_testingDataResult = std::move(value); }
    inline ProjectVersionDescription& WithTestingDataResult(const TestingDataResult& value) { SetTestingDataResult(value); return *this;}
    inline ProjectVersionDescription& WithTestingDataResult(TestingDataResult&& value) { SetTestingDataResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training results. <code>EvaluationResult</code> is only returned if
     * training is successful.</p>
     */
    inline const EvaluationResult& GetEvaluationResult() const{ return m_evaluationResult; }
    inline bool EvaluationResultHasBeenSet() const { return m_evaluationResultHasBeenSet; }
    inline void SetEvaluationResult(const EvaluationResult& value) { m_evaluationResultHasBeenSet = true; m_evaluationResult = value; }
    inline void SetEvaluationResult(EvaluationResult&& value) { m_evaluationResultHasBeenSet = true; m_evaluationResult = std::move(value); }
    inline ProjectVersionDescription& WithEvaluationResult(const EvaluationResult& value) { SetEvaluationResult(value); return *this;}
    inline ProjectVersionDescription& WithEvaluationResult(EvaluationResult&& value) { SetEvaluationResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the summary manifest. The summary manifest provides aggregate
     * data validation results for the training and test datasets.</p>
     */
    inline const GroundTruthManifest& GetManifestSummary() const{ return m_manifestSummary; }
    inline bool ManifestSummaryHasBeenSet() const { return m_manifestSummaryHasBeenSet; }
    inline void SetManifestSummary(const GroundTruthManifest& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = value; }
    inline void SetManifestSummary(GroundTruthManifest&& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = std::move(value); }
    inline ProjectVersionDescription& WithManifestSummary(const GroundTruthManifest& value) { SetManifestSummary(value); return *this;}
    inline ProjectVersionDescription& WithManifestSummary(GroundTruthManifest&& value) { SetManifestSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ProjectVersionDescription& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ProjectVersionDescription& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ProjectVersionDescription& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of inference units Amazon Rekognition uses to auto-scale
     * the model. Applies only to Custom Labels projects. For more information, see
     * <a>StartProjectVersion</a>.</p>
     */
    inline int GetMaxInferenceUnits() const{ return m_maxInferenceUnits; }
    inline bool MaxInferenceUnitsHasBeenSet() const { return m_maxInferenceUnitsHasBeenSet; }
    inline void SetMaxInferenceUnits(int value) { m_maxInferenceUnitsHasBeenSet = true; m_maxInferenceUnits = value; }
    inline ProjectVersionDescription& WithMaxInferenceUnits(int value) { SetMaxInferenceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the model version was copied from a different project,
     * <code>SourceProjectVersionArn</code> contains the ARN of the source model
     * version. </p>
     */
    inline const Aws::String& GetSourceProjectVersionArn() const{ return m_sourceProjectVersionArn; }
    inline bool SourceProjectVersionArnHasBeenSet() const { return m_sourceProjectVersionArnHasBeenSet; }
    inline void SetSourceProjectVersionArn(const Aws::String& value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn = value; }
    inline void SetSourceProjectVersionArn(Aws::String&& value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn = std::move(value); }
    inline void SetSourceProjectVersionArn(const char* value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn.assign(value); }
    inline ProjectVersionDescription& WithSourceProjectVersionArn(const Aws::String& value) { SetSourceProjectVersionArn(value); return *this;}
    inline ProjectVersionDescription& WithSourceProjectVersionArn(Aws::String&& value) { SetSourceProjectVersionArn(std::move(value)); return *this;}
    inline ProjectVersionDescription& WithSourceProjectVersionArn(const char* value) { SetSourceProjectVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-provided description of the project version.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline ProjectVersionDescription& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline ProjectVersionDescription& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline ProjectVersionDescription& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature that was customized.</p>
     */
    inline const CustomizationFeature& GetFeature() const{ return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(const CustomizationFeature& value) { m_featureHasBeenSet = true; m_feature = value; }
    inline void SetFeature(CustomizationFeature&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }
    inline ProjectVersionDescription& WithFeature(const CustomizationFeature& value) { SetFeature(value); return *this;}
    inline ProjectVersionDescription& WithFeature(CustomizationFeature&& value) { SetFeature(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base detection model version used to create the project version.</p>
     */
    inline const Aws::String& GetBaseModelVersion() const{ return m_baseModelVersion; }
    inline bool BaseModelVersionHasBeenSet() const { return m_baseModelVersionHasBeenSet; }
    inline void SetBaseModelVersion(const Aws::String& value) { m_baseModelVersionHasBeenSet = true; m_baseModelVersion = value; }
    inline void SetBaseModelVersion(Aws::String&& value) { m_baseModelVersionHasBeenSet = true; m_baseModelVersion = std::move(value); }
    inline void SetBaseModelVersion(const char* value) { m_baseModelVersionHasBeenSet = true; m_baseModelVersion.assign(value); }
    inline ProjectVersionDescription& WithBaseModelVersion(const Aws::String& value) { SetBaseModelVersion(value); return *this;}
    inline ProjectVersionDescription& WithBaseModelVersion(Aws::String&& value) { SetBaseModelVersion(std::move(value)); return *this;}
    inline ProjectVersionDescription& WithBaseModelVersion(const char* value) { SetBaseModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feature specific configuration that was applied during training.</p>
     */
    inline const CustomizationFeatureConfig& GetFeatureConfig() const{ return m_featureConfig; }
    inline bool FeatureConfigHasBeenSet() const { return m_featureConfigHasBeenSet; }
    inline void SetFeatureConfig(const CustomizationFeatureConfig& value) { m_featureConfigHasBeenSet = true; m_featureConfig = value; }
    inline void SetFeatureConfig(CustomizationFeatureConfig&& value) { m_featureConfigHasBeenSet = true; m_featureConfig = std::move(value); }
    inline ProjectVersionDescription& WithFeatureConfig(const CustomizationFeatureConfig& value) { SetFeatureConfig(value); return *this;}
    inline ProjectVersionDescription& WithFeatureConfig(CustomizationFeatureConfig&& value) { SetFeatureConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectVersionArn;
    bool m_projectVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    int m_minInferenceUnits;
    bool m_minInferenceUnitsHasBeenSet = false;

    ProjectVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_billableTrainingTimeInSeconds;
    bool m_billableTrainingTimeInSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTimestamp;
    bool m_trainingEndTimestampHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    TrainingDataResult m_trainingDataResult;
    bool m_trainingDataResultHasBeenSet = false;

    TestingDataResult m_testingDataResult;
    bool m_testingDataResultHasBeenSet = false;

    EvaluationResult m_evaluationResult;
    bool m_evaluationResultHasBeenSet = false;

    GroundTruthManifest m_manifestSummary;
    bool m_manifestSummaryHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    int m_maxInferenceUnits;
    bool m_maxInferenceUnitsHasBeenSet = false;

    Aws::String m_sourceProjectVersionArn;
    bool m_sourceProjectVersionArnHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    CustomizationFeature m_feature;
    bool m_featureHasBeenSet = false;

    Aws::String m_baseModelVersion;
    bool m_baseModelVersionHasBeenSet = false;

    CustomizationFeatureConfig m_featureConfig;
    bool m_featureConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
