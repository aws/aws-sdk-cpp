/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FailStepMetadata.h>
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

FailStepMetadata::FailStepMetadata() : 
    m_errorMessageHasBeenSet(false)
{
}

FailStepMetadata::FailStepMetadata(JsonView jsonValue) : 
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

FailStepMetadata& FailStepMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue FailStepMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
