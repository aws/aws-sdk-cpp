/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/DescribeApplicationsRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String DescribeApplicationsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_applicationIdsHasBeenSet) {
    mapSize++;
  }
  if (m_computeTypeNamesHasBeenSet) {
    mapSize++;
  }
  if (m_licenseTypeHasBeenSet) {
    mapSize++;
  }
  if (m_operatingSystemNamesHasBeenSet) {
    mapSize++;
  }
  if (m_ownerHasBeenSet) {
    mapSize++;
  }
  if (m_maxResultsHasBeenSet) {
    mapSize++;
  }
  if (m_nextTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_applicationIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ApplicationIds"));
    encoder.WriteArrayStart(m_applicationIds.size());
    for (const auto& item_0 : m_applicationIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_computeTypeNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComputeTypeNames"));
    encoder.WriteArrayStart(m_computeTypeNames.size());
    for (const auto& item_0 : m_computeTypeNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ComputeMapper::GetNameForCompute(item_0).c_str()));
    }
  }

  if (m_licenseTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LicenseType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        WorkSpaceApplicationLicenseTypeMapper::GetNameForWorkSpaceApplicationLicenseType(m_licenseType).c_str()));
  }

  if (m_operatingSystemNamesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OperatingSystemNames"));
    encoder.WriteArrayStart(m_operatingSystemNames.size());
    for (const auto& item_0 : m_operatingSystemNames) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(OperatingSystemNameMapper::GetNameForOperatingSystemName(item_0).c_str()));
    }
  }

  if (m_ownerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Owner"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_owner.c_str()));
  }

  if (m_maxResultsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxResults"));
    (m_maxResults >= 0) ? encoder.WriteUInt(m_maxResults) : encoder.WriteNegInt(m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NextToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nextToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection DescribeApplicationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
