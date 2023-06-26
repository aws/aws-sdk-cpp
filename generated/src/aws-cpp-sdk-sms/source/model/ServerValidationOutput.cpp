/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ServerValidationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ServerValidationOutput::ServerValidationOutput() : 
    m_serverHasBeenSet(false)
{
}

ServerValidationOutput::ServerValidationOutput(JsonView jsonValue) : 
    m_serverHasBeenSet(false)
{
  *this = jsonValue;
}

ServerValidationOutput& ServerValidationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("server"))
  {
    m_server = jsonValue.GetObject("server");

    m_serverHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerValidationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_serverHasBeenSet)
  {
   payload.WithObject("server", m_server.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
