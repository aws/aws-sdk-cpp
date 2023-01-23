/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrialComponentArtifact.h>
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

TrialComponentArtifact::TrialComponentArtifact() : 
    m_mediaTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

TrialComponentArtifact::TrialComponentArtifact(JsonView jsonValue) : 
    m_mediaTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

TrialComponentArtifact& TrialComponentArtifact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaType"))
  {
    m_mediaType = jsonValue.GetString("MediaType");

    m_mediaTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialComponentArtifact::Jsonize() const
{
  JsonValue payload;

  if(m_mediaTypeHasBeenSet)
  {
   payload.WithString("MediaType", m_mediaType);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
