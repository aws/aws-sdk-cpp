/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformOutput.h>
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

TransformOutput::TransformOutput() : 
    m_s3OutputPathHasBeenSet(false),
    m_acceptHasBeenSet(false),
    m_assembleWith(AssemblyType::NOT_SET),
    m_assembleWithHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

TransformOutput::TransformOutput(JsonView jsonValue) : 
    m_s3OutputPathHasBeenSet(false),
    m_acceptHasBeenSet(false),
    m_assembleWith(AssemblyType::NOT_SET),
    m_assembleWithHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

TransformOutput& TransformOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Accept"))
  {
    m_accept = jsonValue.GetString("Accept");

    m_acceptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssembleWith"))
  {
    m_assembleWith = AssemblyTypeMapper::GetAssemblyTypeForName(jsonValue.GetString("AssembleWith"));

    m_assembleWithHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformOutput::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  if(m_acceptHasBeenSet)
  {
   payload.WithString("Accept", m_accept);

  }

  if(m_assembleWithHasBeenSet)
  {
   payload.WithString("AssembleWith", AssemblyTypeMapper::GetNameForAssemblyType(m_assembleWith));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
