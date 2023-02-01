/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardExportOutputConfig.h>
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

ModelCardExportOutputConfig::ModelCardExportOutputConfig() : 
    m_s3OutputPathHasBeenSet(false)
{
}

ModelCardExportOutputConfig::ModelCardExportOutputConfig(JsonView jsonValue) : 
    m_s3OutputPathHasBeenSet(false)
{
  *this = jsonValue;
}

ModelCardExportOutputConfig& ModelCardExportOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelCardExportOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
