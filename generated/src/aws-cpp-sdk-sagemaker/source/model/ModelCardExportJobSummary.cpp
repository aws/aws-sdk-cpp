/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardExportJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ModelCardExportJobSummary::ModelCardExportJobSummary() : 
    m_modelCardExportJobNameHasBeenSet(false),
    m_modelCardExportJobArnHasBeenSet(false),
    m_status(ModelCardExportJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_modelCardNameHasBeenSet(false),
    m_modelCardVersion(0),
    m_modelCardVersionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false)
{
}

ModelCardExportJobSummary::ModelCardExportJobSummary(JsonView jsonValue) : 
    m_modelCardExportJobNameHasBeenSet(false),
    m_modelCardExportJobArnHasBeenSet(false),
    m_status(ModelCardExportJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_modelCardNameHasBeenSet(false),
    m_modelCardVersion(0),
    m_modelCardVersionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ModelCardExportJobSummary& ModelCardExportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModelCardExportJobName"))
  {
    m_modelCardExportJobName = jsonValue.GetString("ModelCardExportJobName");

    m_modelCardExportJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCardExportJobArn"))
  {
    m_modelCardExportJobArn = jsonValue.GetString("ModelCardExportJobArn");

    m_modelCardExportJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelCardExportJobStatusMapper::GetModelCardExportJobStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCardName"))
  {
    m_modelCardName = jsonValue.GetString("ModelCardName");

    m_modelCardNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCardVersion"))
  {
    m_modelCardVersion = jsonValue.GetInteger("ModelCardVersion");

    m_modelCardVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("LastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelCardExportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelCardExportJobNameHasBeenSet)
  {
   payload.WithString("ModelCardExportJobName", m_modelCardExportJobName);

  }

  if(m_modelCardExportJobArnHasBeenSet)
  {
   payload.WithString("ModelCardExportJobArn", m_modelCardExportJobArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ModelCardExportJobStatusMapper::GetNameForModelCardExportJobStatus(m_status));
  }

  if(m_modelCardNameHasBeenSet)
  {
   payload.WithString("ModelCardName", m_modelCardName);

  }

  if(m_modelCardVersionHasBeenSet)
  {
   payload.WithInteger("ModelCardVersion", m_modelCardVersion);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithDouble("LastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
