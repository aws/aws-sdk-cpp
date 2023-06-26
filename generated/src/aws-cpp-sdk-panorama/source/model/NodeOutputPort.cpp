/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeOutputPort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

NodeOutputPort::NodeOutputPort() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(PortType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

NodeOutputPort::NodeOutputPort(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(PortType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

NodeOutputPort& NodeOutputPort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PortTypeMapper::GetPortTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeOutputPort::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PortTypeMapper::GetNameForPortType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
