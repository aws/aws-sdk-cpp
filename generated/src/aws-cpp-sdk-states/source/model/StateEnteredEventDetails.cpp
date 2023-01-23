/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/StateEnteredEventDetails.h>
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

StateEnteredEventDetails::StateEnteredEventDetails() : 
    m_nameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_inputDetailsHasBeenSet(false)
{
}

StateEnteredEventDetails::StateEnteredEventDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_inputDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

StateEnteredEventDetails& StateEnteredEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
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

  return *this;
}

JsonValue StateEnteredEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_inputDetailsHasBeenSet)
  {
   payload.WithObject("inputDetails", m_inputDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
