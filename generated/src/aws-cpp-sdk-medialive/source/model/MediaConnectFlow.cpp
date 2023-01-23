/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MediaConnectFlow.h>
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

MediaConnectFlow::MediaConnectFlow() : 
    m_flowArnHasBeenSet(false)
{
}

MediaConnectFlow::MediaConnectFlow(JsonView jsonValue) : 
    m_flowArnHasBeenSet(false)
{
  *this = jsonValue;
}

MediaConnectFlow& MediaConnectFlow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

    m_flowArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaConnectFlow::Jsonize() const
{
  JsonValue payload;

  if(m_flowArnHasBeenSet)
  {
   payload.WithString("flowArn", m_flowArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
