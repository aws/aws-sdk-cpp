/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/ListFlowOperationsRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String ListFlowOperationsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_firewallArnHasBeenSet) {
    mapSize++;
  }
  if (m_availabilityZoneHasBeenSet) {
    mapSize++;
  }
  if (m_availabilityZoneIdHasBeenSet) {
    mapSize++;
  }
  if (m_vpcEndpointAssociationArnHasBeenSet) {
    mapSize++;
  }
  if (m_vpcEndpointIdHasBeenSet) {
    mapSize++;
  }
  if (m_flowOperationTypeHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_firewallArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallArn.c_str()));
  }

  if (m_availabilityZoneHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailabilityZone"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_availabilityZone.c_str()));
  }

  if (m_availabilityZoneIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailabilityZoneId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_availabilityZoneId.c_str()));
  }

  if (m_vpcEndpointAssociationArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcEndpointAssociationArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vpcEndpointAssociationArn.c_str()));
  }

  if (m_vpcEndpointIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcEndpointId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vpcEndpointId.c_str()));
  }

  if (m_flowOperationTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FlowOperationType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FlowOperationTypeMapper::GetNameForFlowOperationType(m_flowOperationType).c_str()));
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection ListFlowOperationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
