/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

DocumentParameter::DocumentParameter() : 
    m_nameHasBeenSet(false),
    m_type(DocumentParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

DocumentParameter::DocumentParameter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(DocumentParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentParameter& DocumentParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = DocumentParameterTypeMapper::GetDocumentParameterTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentParameter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DocumentParameterTypeMapper::GetNameForDocumentParameterType(m_type));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
