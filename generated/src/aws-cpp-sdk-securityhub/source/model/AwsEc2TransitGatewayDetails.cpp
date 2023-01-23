/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2TransitGatewayDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2TransitGatewayDetails::AwsEc2TransitGatewayDetails() : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultRouteTablePropagationHasBeenSet(false),
    m_autoAcceptSharedAttachmentsHasBeenSet(false),
    m_defaultRouteTableAssociationHasBeenSet(false),
    m_transitGatewayCidrBlocksHasBeenSet(false),
    m_associationDefaultRouteTableIdHasBeenSet(false),
    m_propagationDefaultRouteTableIdHasBeenSet(false),
    m_vpnEcmpSupportHasBeenSet(false),
    m_dnsSupportHasBeenSet(false),
    m_multicastSupportHasBeenSet(false),
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false)
{
}

AwsEc2TransitGatewayDetails::AwsEc2TransitGatewayDetails(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultRouteTablePropagationHasBeenSet(false),
    m_autoAcceptSharedAttachmentsHasBeenSet(false),
    m_defaultRouteTableAssociationHasBeenSet(false),
    m_transitGatewayCidrBlocksHasBeenSet(false),
    m_associationDefaultRouteTableIdHasBeenSet(false),
    m_propagationDefaultRouteTableIdHasBeenSet(false),
    m_vpnEcmpSupportHasBeenSet(false),
    m_dnsSupportHasBeenSet(false),
    m_multicastSupportHasBeenSet(false),
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2TransitGatewayDetails& AwsEc2TransitGatewayDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultRouteTablePropagation"))
  {
    m_defaultRouteTablePropagation = jsonValue.GetString("DefaultRouteTablePropagation");

    m_defaultRouteTablePropagationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoAcceptSharedAttachments"))
  {
    m_autoAcceptSharedAttachments = jsonValue.GetString("AutoAcceptSharedAttachments");

    m_autoAcceptSharedAttachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultRouteTableAssociation"))
  {
    m_defaultRouteTableAssociation = jsonValue.GetString("DefaultRouteTableAssociation");

    m_defaultRouteTableAssociationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitGatewayCidrBlocks"))
  {
    Aws::Utils::Array<JsonView> transitGatewayCidrBlocksJsonList = jsonValue.GetArray("TransitGatewayCidrBlocks");
    for(unsigned transitGatewayCidrBlocksIndex = 0; transitGatewayCidrBlocksIndex < transitGatewayCidrBlocksJsonList.GetLength(); ++transitGatewayCidrBlocksIndex)
    {
      m_transitGatewayCidrBlocks.push_back(transitGatewayCidrBlocksJsonList[transitGatewayCidrBlocksIndex].AsString());
    }
    m_transitGatewayCidrBlocksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationDefaultRouteTableId"))
  {
    m_associationDefaultRouteTableId = jsonValue.GetString("AssociationDefaultRouteTableId");

    m_associationDefaultRouteTableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropagationDefaultRouteTableId"))
  {
    m_propagationDefaultRouteTableId = jsonValue.GetString("PropagationDefaultRouteTableId");

    m_propagationDefaultRouteTableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpnEcmpSupport"))
  {
    m_vpnEcmpSupport = jsonValue.GetString("VpnEcmpSupport");

    m_vpnEcmpSupportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsSupport"))
  {
    m_dnsSupport = jsonValue.GetString("DnsSupport");

    m_dnsSupportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MulticastSupport"))
  {
    m_multicastSupport = jsonValue.GetString("MulticastSupport");

    m_multicastSupportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AmazonSideAsn"))
  {
    m_amazonSideAsn = jsonValue.GetInteger("AmazonSideAsn");

    m_amazonSideAsnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2TransitGatewayDetails::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_defaultRouteTablePropagationHasBeenSet)
  {
   payload.WithString("DefaultRouteTablePropagation", m_defaultRouteTablePropagation);

  }

  if(m_autoAcceptSharedAttachmentsHasBeenSet)
  {
   payload.WithString("AutoAcceptSharedAttachments", m_autoAcceptSharedAttachments);

  }

  if(m_defaultRouteTableAssociationHasBeenSet)
  {
   payload.WithString("DefaultRouteTableAssociation", m_defaultRouteTableAssociation);

  }

  if(m_transitGatewayCidrBlocksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transitGatewayCidrBlocksJsonList(m_transitGatewayCidrBlocks.size());
   for(unsigned transitGatewayCidrBlocksIndex = 0; transitGatewayCidrBlocksIndex < transitGatewayCidrBlocksJsonList.GetLength(); ++transitGatewayCidrBlocksIndex)
   {
     transitGatewayCidrBlocksJsonList[transitGatewayCidrBlocksIndex].AsString(m_transitGatewayCidrBlocks[transitGatewayCidrBlocksIndex]);
   }
   payload.WithArray("TransitGatewayCidrBlocks", std::move(transitGatewayCidrBlocksJsonList));

  }

  if(m_associationDefaultRouteTableIdHasBeenSet)
  {
   payload.WithString("AssociationDefaultRouteTableId", m_associationDefaultRouteTableId);

  }

  if(m_propagationDefaultRouteTableIdHasBeenSet)
  {
   payload.WithString("PropagationDefaultRouteTableId", m_propagationDefaultRouteTableId);

  }

  if(m_vpnEcmpSupportHasBeenSet)
  {
   payload.WithString("VpnEcmpSupport", m_vpnEcmpSupport);

  }

  if(m_dnsSupportHasBeenSet)
  {
   payload.WithString("DnsSupport", m_dnsSupport);

  }

  if(m_multicastSupportHasBeenSet)
  {
   payload.WithString("MulticastSupport", m_multicastSupport);

  }

  if(m_amazonSideAsnHasBeenSet)
  {
   payload.WithInteger("AmazonSideAsn", m_amazonSideAsn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
