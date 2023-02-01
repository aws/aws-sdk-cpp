/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardExportArtifacts.h>
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

ModelCardExportArtifacts::ModelCardExportArtifacts() : 
    m_s3ExportArtifactsHasBeenSet(false)
{
}

ModelCardExportArtifacts::ModelCardExportArtifacts(JsonView jsonValue) : 
    m_s3ExportArtifactsHasBeenSet(false)
{
  *this = jsonValue;
}

ModelCardExportArtifacts& ModelCardExportArtifacts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ExportArtifacts"))
  {
    m_s3ExportArtifacts = jsonValue.GetString("S3ExportArtifacts");

    m_s3ExportArtifactsHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelCardExportArtifacts::Jsonize() const
{
  JsonValue payload;

  if(m_s3ExportArtifactsHasBeenSet)
  {
   payload.WithString("S3ExportArtifacts", m_s3ExportArtifacts);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
