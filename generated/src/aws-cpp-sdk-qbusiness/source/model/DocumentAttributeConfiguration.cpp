/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentAttributeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DocumentAttributeConfiguration::DocumentAttributeConfiguration() : 
    m_nameHasBeenSet(false),
    m_search(Status::NOT_SET),
    m_searchHasBeenSet(false),
    m_type(AttributeType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

DocumentAttributeConfiguration::DocumentAttributeConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_search(Status::NOT_SET),
    m_searchHasBeenSet(false),
    m_type(AttributeType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentAttributeConfiguration& DocumentAttributeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("search"))
  {
    m_search = StatusMapper::GetStatusForName(jsonValue.GetString("search"));

    m_searchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = AttributeTypeMapper::GetAttributeTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentAttributeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_searchHasBeenSet)
  {
   payload.WithString("search", StatusMapper::GetNameForStatus(m_search));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AttributeTypeMapper::GetNameForAttributeType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
