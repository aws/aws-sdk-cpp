/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ExportErrorDetailsOutput.h>
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

ExportErrorDetailsOutput::ExportErrorDetailsOutput() : 
    m_messageHasBeenSet(false),
    m_type(ExportErrorType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ExportErrorDetailsOutput::ExportErrorDetailsOutput(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_type(ExportErrorType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ExportErrorDetailsOutput& ExportErrorDetailsOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ExportErrorTypeMapper::GetExportErrorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportErrorDetailsOutput::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ExportErrorTypeMapper::GetNameForExportErrorType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
