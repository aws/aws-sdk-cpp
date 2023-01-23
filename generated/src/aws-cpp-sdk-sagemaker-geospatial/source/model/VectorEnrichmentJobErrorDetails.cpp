/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobErrorDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

VectorEnrichmentJobErrorDetails::VectorEnrichmentJobErrorDetails() : 
    m_errorMessageHasBeenSet(false),
    m_errorType(VectorEnrichmentJobErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
}

VectorEnrichmentJobErrorDetails::VectorEnrichmentJobErrorDetails(JsonView jsonValue) : 
    m_errorMessageHasBeenSet(false),
    m_errorType(VectorEnrichmentJobErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

VectorEnrichmentJobErrorDetails& VectorEnrichmentJobErrorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorType"))
  {
    m_errorType = VectorEnrichmentJobErrorTypeMapper::GetVectorEnrichmentJobErrorTypeForName(jsonValue.GetString("ErrorType"));

    m_errorTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorEnrichmentJobErrorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("ErrorType", VectorEnrichmentJobErrorTypeMapper::GetNameForVectorEnrichmentJobErrorType(m_errorType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
