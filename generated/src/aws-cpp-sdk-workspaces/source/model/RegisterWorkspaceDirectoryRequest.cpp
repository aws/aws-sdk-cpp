/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/RegisterWorkspaceDirectoryRequest.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RegisterWorkspaceDirectoryRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_directoryIdHasBeenSet) {
    mapSize++;
  }
  if (m_subnetIdsHasBeenSet) {
    mapSize++;
  }
  if (m_enableSelfServiceHasBeenSet) {
    mapSize++;
  }
  if (m_tenancyHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceDirectoryNameHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceDirectoryDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_userIdentityTypeHasBeenSet) {
    mapSize++;
  }
  if (m_idcInstanceArnHasBeenSet) {
    mapSize++;
  }
  if (m_microsoftEntraConfigHasBeenSet) {
    mapSize++;
  }
  if (m_workspaceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_activeDirectoryConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directoryIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DirectoryId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directoryId.c_str()));
  }

  if (m_subnetIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetIds"));
    encoder.WriteArrayStart(m_subnetIds.size());
    for (const auto& item_0 : m_subnetIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_enableSelfServiceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnableSelfService"));
    encoder.WriteBool(m_enableSelfService);
  }

  if (m_tenancyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tenancy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TenancyMapper::GetNameForTenancy(m_tenancy).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_workspaceDirectoryNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceDirectoryName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceDirectoryName.c_str()));
  }

  if (m_workspaceDirectoryDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceDirectoryDescription"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workspaceDirectoryDescription.c_str()));
  }

  if (m_userIdentityTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserIdentityType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(UserIdentityTypeMapper::GetNameForUserIdentityType(m_userIdentityType).c_str()));
  }

  if (m_idcInstanceArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdcInstanceArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_idcInstanceArn.c_str()));
  }

  if (m_microsoftEntraConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MicrosoftEntraConfig"));
    m_microsoftEntraConfig.CborEncode(encoder);
  }

  if (m_workspaceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkspaceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(WorkspaceTypeMapper::GetNameForWorkspaceType(m_workspaceType).c_str()));
  }

  if (m_activeDirectoryConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ActiveDirectoryConfig"));
    m_activeDirectoryConfig.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RegisterWorkspaceDirectoryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
