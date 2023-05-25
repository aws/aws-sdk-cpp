/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDestinationRequest.h>
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

InputDestinationRequest::InputDestinationRequest() : 
    m_streamNameHasBeenSet(false)
{
}

InputDestinationRequest::InputDestinationRequest(JsonView jsonValue) : 
    m_streamNameHasBeenSet(false)
{
  *this = jsonValue;
}

InputDestinationRequest& InputDestinationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamName"))
  {
    m_streamName = jsonValue.GetString("streamName");

    m_streamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InputDestinationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
