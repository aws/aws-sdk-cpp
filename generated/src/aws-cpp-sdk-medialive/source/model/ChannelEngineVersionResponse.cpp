/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ChannelEngineVersionResponse.h>
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

ChannelEngineVersionResponse::ChannelEngineVersionResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelEngineVersionResponse& ChannelEngineVersionResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expirationDate"))
  {
    m_expirationDate = jsonValue.GetString("expirationDate");
    m_expirationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelEngineVersionResponse::Jsonize() const
{
  JsonValue payload;

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("expirationDate", m_expirationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
