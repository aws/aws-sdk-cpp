/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ImportTaskError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ImportTaskError::ImportTaskError() : 
    m_errorDataHasBeenSet(false),
    m_errorDateTimeHasBeenSet(false),
    m_errorType(ImportErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
}

ImportTaskError::ImportTaskError(JsonView jsonValue) : 
    m_errorDataHasBeenSet(false),
    m_errorDateTimeHasBeenSet(false),
    m_errorType(ImportErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ImportTaskError& ImportTaskError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorData"))
  {
    m_errorData = jsonValue.GetObject("errorData");

    m_errorDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorDateTime"))
  {
    m_errorDateTime = jsonValue.GetString("errorDateTime");

    m_errorDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorType"))
  {
    m_errorType = ImportErrorTypeMapper::GetImportErrorTypeForName(jsonValue.GetString("errorType"));

    m_errorTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportTaskError::Jsonize() const
{
  JsonValue payload;

  if(m_errorDataHasBeenSet)
  {
   payload.WithObject("errorData", m_errorData.Jsonize());

  }

  if(m_errorDateTimeHasBeenSet)
  {
   payload.WithString("errorDateTime", m_errorDateTime);

  }

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("errorType", ImportErrorTypeMapper::GetNameForImportErrorType(m_errorType));
  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
