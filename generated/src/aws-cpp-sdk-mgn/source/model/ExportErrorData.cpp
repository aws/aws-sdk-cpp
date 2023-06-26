/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ExportErrorData.h>
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

ExportErrorData::ExportErrorData() : 
    m_rawErrorHasBeenSet(false)
{
}

ExportErrorData::ExportErrorData(JsonView jsonValue) : 
    m_rawErrorHasBeenSet(false)
{
  *this = jsonValue;
}

ExportErrorData& ExportErrorData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rawError"))
  {
    m_rawError = jsonValue.GetString("rawError");

    m_rawErrorHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportErrorData::Jsonize() const
{
  JsonValue payload;

  if(m_rawErrorHasBeenSet)
  {
   payload.WithString("rawError", m_rawError);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
