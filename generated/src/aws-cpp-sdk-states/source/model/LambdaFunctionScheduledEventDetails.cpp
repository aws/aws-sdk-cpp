/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/LambdaFunctionScheduledEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

LambdaFunctionScheduledEventDetails::LambdaFunctionScheduledEventDetails() : 
    m_resourceHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_inputDetailsHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_taskCredentialsHasBeenSet(false)
{
}

LambdaFunctionScheduledEventDetails::LambdaFunctionScheduledEventDetails(JsonView jsonValue) : 
    m_resourceHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_inputDetailsHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_taskCredentialsHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionScheduledEventDetails& LambdaFunctionScheduledEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputDetails"))
  {
    m_inputDetails = jsonValue.GetObject("inputDetails");

    m_inputDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInt64("timeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskCredentials"))
  {
    m_taskCredentials = jsonValue.GetObject("taskCredentials");

    m_taskCredentialsHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionScheduledEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_inputDetailsHasBeenSet)
  {
   payload.WithObject("inputDetails", m_inputDetails.Jsonize());

  }

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInt64("timeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_taskCredentialsHasBeenSet)
  {
   payload.WithObject("taskCredentials", m_taskCredentials.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
