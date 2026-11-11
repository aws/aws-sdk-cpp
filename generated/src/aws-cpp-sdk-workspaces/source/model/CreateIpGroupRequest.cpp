/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/CreateIpGroupRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateIpGroupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_groupNameHasBeenSet) {
    mapSize++;
  }
  if (m_groupDescHasBeenSet) {
    mapSize++;
  }
  if (m_userRulesHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_groupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_groupName.c_str()));
  }

  if (m_groupDescHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GroupDesc"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_groupDesc.c_str()));
  }

  if (m_userRulesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserRules"));
    encoder.WriteArrayStart(m_userRules.size());
    for (const auto& item_0 : m_userRules) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateIpGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
