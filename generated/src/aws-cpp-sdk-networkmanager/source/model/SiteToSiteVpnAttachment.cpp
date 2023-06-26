/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/SiteToSiteVpnAttachment.h>
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

SiteToSiteVpnAttachment::SiteToSiteVpnAttachment() : 
    m_attachmentHasBeenSet(false),
    m_vpnConnectionArnHasBeenSet(false)
{
}

SiteToSiteVpnAttachment::SiteToSiteVpnAttachment(JsonView jsonValue) : 
    m_attachmentHasBeenSet(false),
    m_vpnConnectionArnHasBeenSet(false)
{
  *this = jsonValue;
}

SiteToSiteVpnAttachment& SiteToSiteVpnAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");

    m_attachmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpnConnectionArn"))
  {
    m_vpnConnectionArn = jsonValue.GetString("VpnConnectionArn");

    m_vpnConnectionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SiteToSiteVpnAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  if(m_vpnConnectionArnHasBeenSet)
  {
   payload.WithString("VpnConnectionArn", m_vpnConnectionArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
