/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

OutputLocationRef::OutputLocationRef() : 
    m_destinationRefIdHasBeenSet(false)
{
}

OutputLocationRef::OutputLocationRef(JsonView jsonValue) : 
    m_destinationRefIdHasBeenSet(false)
{
  *this = jsonValue;
}

OutputLocationRef& OutputLocationRef::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationRefId"))
  {
    m_destinationRefId = jsonValue.GetString("destinationRefId");

    m_destinationRefIdHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputLocationRef::Jsonize() const
{
  JsonValue payload;

  if(m_destinationRefIdHasBeenSet)
  {
   payload.WithString("destinationRefId", m_destinationRefId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
