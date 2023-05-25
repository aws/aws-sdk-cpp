/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobStepMetadata.h>
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

AutoMLJobStepMetadata::AutoMLJobStepMetadata() : 
    m_arnHasBeenSet(false)
{
}

AutoMLJobStepMetadata::AutoMLJobStepMetadata(JsonView jsonValue) : 
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLJobStepMetadata& AutoMLJobStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLJobStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
