/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingOutput.h>
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

ProcessingOutput::ProcessingOutput() : 
    m_outputNameHasBeenSet(false),
    m_s3OutputHasBeenSet(false),
    m_featureStoreOutputHasBeenSet(false),
    m_appManaged(false),
    m_appManagedHasBeenSet(false)
{
}

ProcessingOutput::ProcessingOutput(JsonView jsonValue) : 
    m_outputNameHasBeenSet(false),
    m_s3OutputHasBeenSet(false),
    m_featureStoreOutputHasBeenSet(false),
    m_appManaged(false),
    m_appManagedHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingOutput& ProcessingOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputName"))
  {
    m_outputName = jsonValue.GetString("OutputName");

    m_outputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Output"))
  {
    m_s3Output = jsonValue.GetObject("S3Output");

    m_s3OutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureStoreOutput"))
  {
    m_featureStoreOutput = jsonValue.GetObject("FeatureStoreOutput");

    m_featureStoreOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppManaged"))
  {
    m_appManaged = jsonValue.GetBool("AppManaged");

    m_appManagedHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputNameHasBeenSet)
  {
   payload.WithString("OutputName", m_outputName);

  }

  if(m_s3OutputHasBeenSet)
  {
   payload.WithObject("S3Output", m_s3Output.Jsonize());

  }

  if(m_featureStoreOutputHasBeenSet)
  {
   payload.WithObject("FeatureStoreOutput", m_featureStoreOutput.Jsonize());

  }

  if(m_appManagedHasBeenSet)
  {
   payload.WithBool("AppManaged", m_appManaged);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
