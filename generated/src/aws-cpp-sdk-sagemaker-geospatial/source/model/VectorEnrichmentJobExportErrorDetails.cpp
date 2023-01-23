/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobExportErrorDetails.h>
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

VectorEnrichmentJobExportErrorDetails::VectorEnrichmentJobExportErrorDetails() : 
    m_messageHasBeenSet(false),
    m_type(VectorEnrichmentJobExportErrorType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

VectorEnrichmentJobExportErrorDetails::VectorEnrichmentJobExportErrorDetails(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_type(VectorEnrichmentJobExportErrorType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

VectorEnrichmentJobExportErrorDetails& VectorEnrichmentJobExportErrorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = VectorEnrichmentJobExportErrorTypeMapper::GetVectorEnrichmentJobExportErrorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorEnrichmentJobExportErrorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", VectorEnrichmentJobExportErrorTypeMapper::GetNameForVectorEnrichmentJobExportErrorType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
