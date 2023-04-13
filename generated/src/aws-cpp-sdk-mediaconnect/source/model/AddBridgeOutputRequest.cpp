/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddBridgeOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

AddBridgeOutputRequest::AddBridgeOutputRequest() : 
    m_networkOutputHasBeenSet(false)
{
}

AddBridgeOutputRequest::AddBridgeOutputRequest(JsonView jsonValue) : 
    m_networkOutputHasBeenSet(false)
{
  *this = jsonValue;
}

AddBridgeOutputRequest& AddBridgeOutputRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkOutput"))
  {
    m_networkOutput = jsonValue.GetObject("networkOutput");

    m_networkOutputHasBeenSet = true;
  }

  return *this;
}

JsonValue AddBridgeOutputRequest::Jsonize() const
{
  JsonValue payload;

  if(m_networkOutputHasBeenSet)
  {
   payload.WithObject("networkOutput", m_networkOutput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
