/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ExecutionStartedEventDetails.h>
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

ExecutionStartedEventDetails::ExecutionStartedEventDetails() : 
    m_inputHasBeenSet(false),
    m_inputDetailsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stateMachineAliasArnHasBeenSet(false),
    m_stateMachineVersionArnHasBeenSet(false)
{
}

ExecutionStartedEventDetails::ExecutionStartedEventDetails(JsonView jsonValue) : 
    m_inputHasBeenSet(false),
    m_inputDetailsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stateMachineAliasArnHasBeenSet(false),
    m_stateMachineVersionArnHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionStartedEventDetails& ExecutionStartedEventDetails::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateMachineAliasArn"))
  {
    m_stateMachineAliasArn = jsonValue.GetString("stateMachineAliasArn");

    m_stateMachineAliasArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateMachineVersionArn"))
  {
    m_stateMachineVersionArn = jsonValue.GetString("stateMachineVersionArn");

    m_stateMachineVersionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionStartedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_inputDetailsHasBeenSet)
  {
   payload.WithObject("inputDetails", m_inputDetails.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_stateMachineAliasArnHasBeenSet)
  {
   payload.WithString("stateMachineAliasArn", m_stateMachineAliasArn);

  }

  if(m_stateMachineVersionArnHasBeenSet)
  {
   payload.WithString("stateMachineVersionArn", m_stateMachineVersionArn);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
