﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProjectVersionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ProjectVersionDescription::ProjectVersionDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectVersionDescription& ProjectVersionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectVersionArn"))
  {
    m_projectVersionArn = jsonValue.GetString("ProjectVersionArn");
    m_projectVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");
    m_creationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinInferenceUnits"))
  {
    m_minInferenceUnits = jsonValue.GetInteger("MinInferenceUnits");
    m_minInferenceUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProjectVersionStatusMapper::GetProjectVersionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillableTrainingTimeInSeconds"))
  {
    m_billableTrainingTimeInSeconds = jsonValue.GetInt64("BillableTrainingTimeInSeconds");
    m_billableTrainingTimeInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingEndTimestamp"))
  {
    m_trainingEndTimestamp = jsonValue.GetDouble("TrainingEndTimestamp");
    m_trainingEndTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingDataResult"))
  {
    m_trainingDataResult = jsonValue.GetObject("TrainingDataResult");
    m_trainingDataResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TestingDataResult"))
  {
    m_testingDataResult = jsonValue.GetObject("TestingDataResult");
    m_testingDataResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationResult"))
  {
    m_evaluationResult = jsonValue.GetObject("EvaluationResult");
    m_evaluationResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManifestSummary"))
  {
    m_manifestSummary = jsonValue.GetObject("ManifestSummary");
    m_manifestSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxInferenceUnits"))
  {
    m_maxInferenceUnits = jsonValue.GetInteger("MaxInferenceUnits");
    m_maxInferenceUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceProjectVersionArn"))
  {
    m_sourceProjectVersionArn = jsonValue.GetString("SourceProjectVersionArn");
    m_sourceProjectVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionDescription"))
  {
    m_versionDescription = jsonValue.GetString("VersionDescription");
    m_versionDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Feature"))
  {
    m_feature = CustomizationFeatureMapper::GetCustomizationFeatureForName(jsonValue.GetString("Feature"));
    m_featureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseModelVersion"))
  {
    m_baseModelVersion = jsonValue.GetString("BaseModelVersion");
    m_baseModelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FeatureConfig"))
  {
    m_featureConfig = jsonValue.GetObject("FeatureConfig");
    m_featureConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectVersionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_projectVersionArnHasBeenSet)
  {
   payload.WithString("ProjectVersionArn", m_projectVersionArn);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_minInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("MinInferenceUnits", m_minInferenceUnits);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProjectVersionStatusMapper::GetNameForProjectVersionStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_billableTrainingTimeInSecondsHasBeenSet)
  {
   payload.WithInt64("BillableTrainingTimeInSeconds", m_billableTrainingTimeInSeconds);

  }

  if(m_trainingEndTimestampHasBeenSet)
  {
   payload.WithDouble("TrainingEndTimestamp", m_trainingEndTimestamp.SecondsWithMSPrecision());
  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_trainingDataResultHasBeenSet)
  {
   payload.WithObject("TrainingDataResult", m_trainingDataResult.Jsonize());

  }

  if(m_testingDataResultHasBeenSet)
  {
   payload.WithObject("TestingDataResult", m_testingDataResult.Jsonize());

  }

  if(m_evaluationResultHasBeenSet)
  {
   payload.WithObject("EvaluationResult", m_evaluationResult.Jsonize());

  }

  if(m_manifestSummaryHasBeenSet)
  {
   payload.WithObject("ManifestSummary", m_manifestSummary.Jsonize());

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_maxInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("MaxInferenceUnits", m_maxInferenceUnits);

  }

  if(m_sourceProjectVersionArnHasBeenSet)
  {
   payload.WithString("SourceProjectVersionArn", m_sourceProjectVersionArn);

  }

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

  }

  if(m_featureHasBeenSet)
  {
   payload.WithString("Feature", CustomizationFeatureMapper::GetNameForCustomizationFeature(m_feature));
  }

  if(m_baseModelVersionHasBeenSet)
  {
   payload.WithString("BaseModelVersion", m_baseModelVersion);

  }

  if(m_featureConfigHasBeenSet)
  {
   payload.WithObject("FeatureConfig", m_featureConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
