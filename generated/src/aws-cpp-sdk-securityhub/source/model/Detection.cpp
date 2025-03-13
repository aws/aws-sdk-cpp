/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Detection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Detection::Detection(JsonView jsonValue)
{
  *this = jsonValue;
}

Detection& Detection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Sequence"))
  {
    m_sequence = jsonValue.GetObject("Sequence");
    m_sequenceHasBeenSet = true;
  }
  return *this;
}

JsonValue Detection::Jsonize() const
{
  JsonValue payload;

  if(m_sequenceHasBeenSet)
  {
   payload.WithObject("Sequence", m_sequence.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
