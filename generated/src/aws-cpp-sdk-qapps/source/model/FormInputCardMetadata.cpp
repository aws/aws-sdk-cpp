/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/FormInputCardMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

FormInputCardMetadata::FormInputCardMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

FormInputCardMetadata& FormInputCardMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("schema"))
  {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  return *this;
}

JsonValue FormInputCardMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_schemaHasBeenSet)
  {
    if(!m_schema.View().IsNull())
    {
       payload.WithObject("schema", JsonValue(m_schema.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
