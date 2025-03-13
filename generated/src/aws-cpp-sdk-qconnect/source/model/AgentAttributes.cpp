/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AgentAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

AgentAttributes::AgentAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentAttributes& AgentAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("firstName"))
  {
    m_firstName = jsonValue.GetString("firstName");
    m_firstNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastName"))
  {
    m_lastName = jsonValue.GetString("lastName");
    m_lastNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("firstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("lastName", m_lastName);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
