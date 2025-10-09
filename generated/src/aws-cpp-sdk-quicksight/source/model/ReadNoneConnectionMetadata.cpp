/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReadNoneConnectionMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ReadNoneConnectionMetadata::ReadNoneConnectionMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

ReadNoneConnectionMetadata& ReadNoneConnectionMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseEndpoint"))
  {
    m_baseEndpoint = jsonValue.GetString("BaseEndpoint");
    m_baseEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadNoneConnectionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_baseEndpointHasBeenSet)
  {
   payload.WithString("BaseEndpoint", m_baseEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
