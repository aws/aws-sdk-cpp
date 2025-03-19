/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MulticastSource.h>
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

MulticastSource::MulticastSource(JsonView jsonValue)
{
  *this = jsonValue;
}

MulticastSource& MulticastSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceIp"))
  {
    m_sourceIp = jsonValue.GetString("sourceIp");
    m_sourceIpHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  return *this;
}

JsonValue MulticastSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIpHasBeenSet)
  {
   payload.WithString("sourceIp", m_sourceIp);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
