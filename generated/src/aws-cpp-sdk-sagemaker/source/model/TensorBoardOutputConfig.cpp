/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TensorBoardOutputConfig.h>
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

TensorBoardOutputConfig::TensorBoardOutputConfig() : 
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false)
{
}

TensorBoardOutputConfig::TensorBoardOutputConfig(JsonView jsonValue) : 
    m_localPathHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false)
{
  *this = jsonValue;
}

TensorBoardOutputConfig& TensorBoardOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");

    m_localPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  return *this;
}

JsonValue TensorBoardOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
