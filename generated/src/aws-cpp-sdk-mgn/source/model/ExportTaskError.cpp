/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ExportTaskError.h>
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

ExportTaskError::ExportTaskError() : 
    m_errorDataHasBeenSet(false),
    m_errorDateTimeHasBeenSet(false)
{
}

ExportTaskError::ExportTaskError(JsonView jsonValue) : 
    m_errorDataHasBeenSet(false),
    m_errorDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExportTaskError& ExportTaskError::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ExportTaskError::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
