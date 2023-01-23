/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelArtifacts.h>
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

ModelArtifacts::ModelArtifacts() : 
    m_s3ModelArtifactsHasBeenSet(false)
{
}

ModelArtifacts::ModelArtifacts(JsonView jsonValue) : 
    m_s3ModelArtifactsHasBeenSet(false)
{
  *this = jsonValue;
}

ModelArtifacts& ModelArtifacts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ModelArtifacts"))
  {
    m_s3ModelArtifacts = jsonValue.GetString("S3ModelArtifacts");

    m_s3ModelArtifactsHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelArtifacts::Jsonize() const
{
  JsonValue payload;

  if(m_s3ModelArtifactsHasBeenSet)
  {
   payload.WithString("S3ModelArtifacts", m_s3ModelArtifacts);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
