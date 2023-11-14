/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ExecutionRedrivenEventDetails.h>
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

ExecutionRedrivenEventDetails::ExecutionRedrivenEventDetails() : 
    m_redriveCount(0),
    m_redriveCountHasBeenSet(false)
{
}

ExecutionRedrivenEventDetails::ExecutionRedrivenEventDetails(JsonView jsonValue) : 
    m_redriveCount(0),
    m_redriveCountHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionRedrivenEventDetails& ExecutionRedrivenEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("redriveCount"))
  {
    m_redriveCount = jsonValue.GetInteger("redriveCount");

    m_redriveCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionRedrivenEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_redriveCountHasBeenSet)
  {
   payload.WithInteger("redriveCount", m_redriveCount);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
