/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/AppValidationOutput.h>
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

AppValidationOutput::AppValidationOutput() : 
    m_ssmOutputHasBeenSet(false)
{
}

AppValidationOutput::AppValidationOutput(JsonView jsonValue) : 
    m_ssmOutputHasBeenSet(false)
{
  *this = jsonValue;
}

AppValidationOutput& AppValidationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ssmOutput"))
  {
    m_ssmOutput = jsonValue.GetObject("ssmOutput");

    m_ssmOutputHasBeenSet = true;
  }

  return *this;
}

JsonValue AppValidationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_ssmOutputHasBeenSet)
  {
   payload.WithObject("ssmOutput", m_ssmOutput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
