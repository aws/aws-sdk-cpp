/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AuroraParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AuroraParameters::AuroraParameters() : 
    m_hostHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseHasBeenSet(false)
{
}

AuroraParameters::AuroraParameters(JsonView jsonValue) : 
    m_hostHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_databaseHasBeenSet(false)
{
  *this = jsonValue;
}

AuroraParameters& AuroraParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  return *this;
}

JsonValue AuroraParameters::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
