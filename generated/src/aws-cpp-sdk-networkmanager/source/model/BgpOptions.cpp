/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/BgpOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

BgpOptions::BgpOptions() : 
    m_peerAsn(0),
    m_peerAsnHasBeenSet(false)
{
}

BgpOptions::BgpOptions(JsonView jsonValue) : 
    m_peerAsn(0),
    m_peerAsnHasBeenSet(false)
{
  *this = jsonValue;
}

BgpOptions& BgpOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PeerAsn"))
  {
    m_peerAsn = jsonValue.GetInt64("PeerAsn");

    m_peerAsnHasBeenSet = true;
  }

  return *this;
}

JsonValue BgpOptions::Jsonize() const
{
  JsonValue payload;

  if(m_peerAsnHasBeenSet)
  {
   payload.WithInt64("PeerAsn", m_peerAsn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
