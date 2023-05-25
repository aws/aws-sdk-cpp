/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexProgramServiceDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MultiplexProgramServiceDescriptor::MultiplexProgramServiceDescriptor() : 
    m_providerNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

MultiplexProgramServiceDescriptor::MultiplexProgramServiceDescriptor(JsonView jsonValue) : 
    m_providerNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexProgramServiceDescriptor& MultiplexProgramServiceDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");

    m_providerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexProgramServiceDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("providerName", m_providerName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
