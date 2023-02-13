/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/DependentService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

DependentService::DependentService() : 
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false),
    m_serviceVersionHasBeenSet(false)
{
}

DependentService::DependentService(JsonView jsonValue) : 
    m_serviceName(ServiceName::NOT_SET),
    m_serviceNameHasBeenSet(false),
    m_serviceVersionHasBeenSet(false)
{
  *this = jsonValue;
}

DependentService& DependentService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = ServiceNameMapper::GetServiceNameForName(jsonValue.GetString("ServiceName"));

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceVersion"))
  {
    m_serviceVersion = jsonValue.GetObject("ServiceVersion");

    m_serviceVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue DependentService::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", ServiceNameMapper::GetNameForServiceName(m_serviceName));
  }

  if(m_serviceVersionHasBeenSet)
  {
   payload.WithObject("ServiceVersion", m_serviceVersion.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
