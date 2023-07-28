/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ComponentState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

ComponentState::ComponentState() : 
    m_serviceInstanceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceSpecHasBeenSet(false),
    m_templateFileHasBeenSet(false)
{
}

ComponentState::ComponentState(JsonView jsonValue) : 
    m_serviceInstanceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceSpecHasBeenSet(false),
    m_templateFileHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentState& ComponentState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceInstanceName"))
  {
    m_serviceInstanceName = jsonValue.GetString("serviceInstanceName");

    m_serviceInstanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceSpec"))
  {
    m_serviceSpec = jsonValue.GetString("serviceSpec");

    m_serviceSpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateFile"))
  {
    m_templateFile = jsonValue.GetString("templateFile");

    m_templateFileHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentState::Jsonize() const
{
  JsonValue payload;

  if(m_serviceInstanceNameHasBeenSet)
  {
   payload.WithString("serviceInstanceName", m_serviceInstanceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_serviceSpecHasBeenSet)
  {
   payload.WithString("serviceSpec", m_serviceSpec);

  }

  if(m_templateFileHasBeenSet)
  {
   payload.WithString("templateFile", m_templateFile);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
