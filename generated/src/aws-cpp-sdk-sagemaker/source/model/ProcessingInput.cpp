/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingInput.h>
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

ProcessingInput::ProcessingInput() : 
    m_inputNameHasBeenSet(false),
    m_appManaged(false),
    m_appManagedHasBeenSet(false),
    m_s3InputHasBeenSet(false),
    m_datasetDefinitionHasBeenSet(false)
{
}

ProcessingInput::ProcessingInput(JsonView jsonValue) : 
    m_inputNameHasBeenSet(false),
    m_appManaged(false),
    m_appManagedHasBeenSet(false),
    m_s3InputHasBeenSet(false),
    m_datasetDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingInput& ProcessingInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputName"))
  {
    m_inputName = jsonValue.GetString("InputName");

    m_inputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppManaged"))
  {
    m_appManaged = jsonValue.GetBool("AppManaged");

    m_appManagedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Input"))
  {
    m_s3Input = jsonValue.GetObject("S3Input");

    m_s3InputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetDefinition"))
  {
    m_datasetDefinition = jsonValue.GetObject("DatasetDefinition");

    m_datasetDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingInput::Jsonize() const
{
  JsonValue payload;

  if(m_inputNameHasBeenSet)
  {
   payload.WithString("InputName", m_inputName);

  }

  if(m_appManagedHasBeenSet)
  {
   payload.WithBool("AppManaged", m_appManaged);

  }

  if(m_s3InputHasBeenSet)
  {
   payload.WithObject("S3Input", m_s3Input.Jsonize());

  }

  if(m_datasetDefinitionHasBeenSet)
  {
   payload.WithObject("DatasetDefinition", m_datasetDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
