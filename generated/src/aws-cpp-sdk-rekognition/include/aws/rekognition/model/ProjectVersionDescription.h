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
    AWS_REKOGNITION_API ProjectVersionDescription() = default;
    AWS_REKOGNITION_API ProjectVersionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProjectVersionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project version. </p>
     */
    inline const Aws::String& GetProjectVersionArn() const { return m_projectVersionArn; }
    inline bool ProjectVersionArnHasBeenSet() const { return m_projectVersionArnHasBeenSet; }
    template<typename ProjectVersionArnT = Aws::String>
    void SetProjectVersionArn(ProjectVersionArnT&& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = std::forward<ProjectVersionArnT>(value); }
    template<typename ProjectVersionArnT = Aws::String>
    ProjectVersionDescription& WithProjectVersionArn(ProjectVersionArnT&& value) { SetProjectVersionArn(std::forward<ProjectVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix datetime for the date and time that training started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    ProjectVersionDescription& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of inference units used by the model. Applies only to
     * Custom Labels projects. For more information, see
     * <a>StartProjectVersion</a>.</p>
     */
    inline int GetMinInferenceUnits() const { return m_minInferenceUnits; }
    inline bool MinInferenceUnitsHasBeenSet() const { return m_minInferenceUnitsHasBeenSet; }
    inline void SetMinInferenceUnits(int value) { m_minInferenceUnitsHasBeenSet = true; m_minInferenceUnits = value; }
    inline ProjectVersionDescription& WithMinInferenceUnits(int value) { SetMinInferenceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the model version.</p>
     */
    inline ProjectVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProjectVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProjectVersionDescription& WithStatus(ProjectVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ProjectVersionDescription& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, that you were billed for a successful training of
     * the model version. This value is only returned if the model version has been
     * successfully trained.</p>
     */
    inline long long GetBillableTrainingTimeInSeconds() const { return m_billableTrainingTimeInSeconds; }
    inline bool BillableTrainingTimeInSecondsHasBeenSet() const { return m_billableTrainingTimeInSecondsHasBeenSet; }
    inline void SetBillableTrainingTimeInSeconds(long long value) { m_billableTrainingTimeInSecondsHasBeenSet = true; m_billableTrainingTimeInSeconds = value; }
    inline ProjectVersionDescription& WithBillableTrainingTimeInSeconds(long long value) { SetBillableTrainingTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix date and time that training of the model ended.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTimestamp() const { return m_trainingEndTimestamp; }
    inline bool TrainingEndTimestampHasBeenSet() const { return m_trainingEndTimestampHasBeenSet; }
    template<typename TrainingEndTimestampT = Aws::Utils::DateTime>
    void SetTrainingEndTimestamp(TrainingEndTimestampT&& value) { m_trainingEndTimestampHasBeenSet = true; m_trainingEndTimestamp = std::forward<TrainingEndTimestampT>(value); }
    template<typename TrainingEndTimestampT = Aws::Utils::DateTime>
    ProjectVersionDescription& WithTrainingEndTimestamp(TrainingEndTimestampT&& value) { SetTrainingEndTimestamp(std::forward<TrainingEndTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where training results are saved.</p>
     */
    inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = OutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfig>
    ProjectVersionDescription& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the training results.</p>
     */
    inline const TrainingDataResult& GetTrainingDataResult() const { return m_trainingDataResult; }
    inline bool TrainingDataResultHasBeenSet() const { return m_trainingDataResultHasBeenSet; }
    template<typename TrainingDataResultT = TrainingDataResult>
    void SetTrainingDataResult(TrainingDataResultT&& value) { m_trainingDataResultHasBeenSet = true; m_trainingDataResult = std::forward<TrainingDataResultT>(value); }
    template<typename TrainingDataResultT = TrainingDataResult>
    ProjectVersionDescription& WithTrainingDataResult(TrainingDataResultT&& value) { SetTrainingDataResult(std::forward<TrainingDataResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the testing results.</p>
     */
    inline const TestingDataResult& GetTestingDataResult() const { return m_testingDataResult; }
    inline bool TestingDataResultHasBeenSet() const { return m_testingDataResultHasBeenSet; }
    template<typename TestingDataResultT = TestingDataResult>
    void SetTestingDataResult(TestingDataResultT&& value) { m_testingDataResultHasBeenSet = true; m_testingDataResult = std::forward<TestingDataResultT>(value); }
    template<typename TestingDataResultT = TestingDataResult>
    ProjectVersionDescription& WithTestingDataResult(TestingDataResultT&& value) { SetTestingDataResult(std::forward<TestingDataResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training results. <code>EvaluationResult</code> is only returned if
     * training is successful.</p>
     */
    inline const EvaluationResult& GetEvaluationResult() const { return m_evaluationResult; }
    inline bool EvaluationResultHasBeenSet() const { return m_evaluationResultHasBeenSet; }
    template<typename EvaluationResultT = EvaluationResult>
    void SetEvaluationResult(EvaluationResultT&& value) { m_evaluationResultHasBeenSet = true; m_evaluationResult = std::forward<EvaluationResultT>(value); }
    template<typename EvaluationResultT = EvaluationResult>
    ProjectVersionDescription& WithEvaluationResult(EvaluationResultT&& value) { SetEvaluationResult(std::forward<EvaluationResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the summary manifest. The summary manifest provides aggregate
     * data validation results for the training and test datasets.</p>
     */
    inline const GroundTruthManifest& GetManifestSummary() const { return m_manifestSummary; }
    inline bool ManifestSummaryHasBeenSet() const { return m_manifestSummaryHasBeenSet; }
    template<typename ManifestSummaryT = GroundTruthManifest>
    void SetManifestSummary(ManifestSummaryT&& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = std::forward<ManifestSummaryT>(value); }
    template<typename ManifestSummaryT = GroundTruthManifest>
    ProjectVersionDescription& WithManifestSummary(ManifestSummaryT&& value) { SetManifestSummary(std::forward<ManifestSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ProjectVersionDescription& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of inference units Amazon Rekognition uses to auto-scale
     * the model. Applies only to Custom Labels projects. For more information, see
     * <a>StartProjectVersion</a>.</p>
     */
    inline int GetMaxInferenceUnits() const { return m_maxInferenceUnits; }
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
    inline const Aws::String& GetSourceProjectVersionArn() const { return m_sourceProjectVersionArn; }
    inline bool SourceProjectVersionArnHasBeenSet() const { return m_sourceProjectVersionArnHasBeenSet; }
    template<typename SourceProjectVersionArnT = Aws::String>
    void SetSourceProjectVersionArn(SourceProjectVersionArnT&& value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn = std::forward<SourceProjectVersionArnT>(value); }
    template<typename SourceProjectVersionArnT = Aws::String>
    ProjectVersionDescription& WithSourceProjectVersionArn(SourceProjectVersionArnT&& value) { SetSourceProjectVersionArn(std::forward<SourceProjectVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-provided description of the project version.</p>
     */
    inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    template<typename VersionDescriptionT = Aws::String>
    void SetVersionDescription(VersionDescriptionT&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::forward<VersionDescriptionT>(value); }
    template<typename VersionDescriptionT = Aws::String>
    ProjectVersionDescription& WithVersionDescription(VersionDescriptionT&& value) { SetVersionDescription(std::forward<VersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature that was customized.</p>
     */
    inline CustomizationFeature GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(CustomizationFeature value) { m_featureHasBeenSet = true; m_feature = value; }
    inline ProjectVersionDescription& WithFeature(CustomizationFeature value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base detection model version used to create the project version.</p>
     */
    inline const Aws::String& GetBaseModelVersion() const { return m_baseModelVersion; }
    inline bool BaseModelVersionHasBeenSet() const { return m_baseModelVersionHasBeenSet; }
    template<typename BaseModelVersionT = Aws::String>
    void SetBaseModelVersion(BaseModelVersionT&& value) { m_baseModelVersionHasBeenSet = true; m_baseModelVersion = std::forward<BaseModelVersionT>(value); }
    template<typename BaseModelVersionT = Aws::String>
    ProjectVersionDescription& WithBaseModelVersion(BaseModelVersionT&& value) { SetBaseModelVersion(std::forward<BaseModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feature specific configuration that was applied during training.</p>
     */
    inline const CustomizationFeatureConfig& GetFeatureConfig() const { return m_featureConfig; }
    inline bool FeatureConfigHasBeenSet() const { return m_featureConfigHasBeenSet; }
    template<typename FeatureConfigT = CustomizationFeatureConfig>
    void SetFeatureConfig(FeatureConfigT&& value) { m_featureConfigHasBeenSet = true; m_featureConfig = std::forward<FeatureConfigT>(value); }
    template<typename FeatureConfigT = CustomizationFeatureConfig>
    ProjectVersionDescription& WithFeatureConfig(FeatureConfigT&& value) { SetFeatureConfig(std::forward<FeatureConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectVersionArn;
    bool m_projectVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    int m_minInferenceUnits{0};
    bool m_minInferenceUnitsHasBeenSet = false;

    ProjectVersionStatus m_status{ProjectVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_billableTrainingTimeInSeconds{0};
    bool m_billableTrainingTimeInSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTimestamp{};
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

    int m_maxInferenceUnits{0};
    bool m_maxInferenceUnitsHasBeenSet = false;

    Aws::String m_sourceProjectVersionArn;
    bool m_sourceProjectVersionArnHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    CustomizationFeature m_feature{CustomizationFeature::NOT_SET};
    bool m_featureHasBeenSet = false;

    Aws::String m_baseModelVersion;
    bool m_baseModelVersionHasBeenSet = false;

    CustomizationFeatureConfig m_featureConfig;
    bool m_featureConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
