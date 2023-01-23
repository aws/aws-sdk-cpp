/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/UpdateFolderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFolderRequest::UpdateFolderRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentFolderIdHasBeenSet(false),
    m_resourceState(ResourceStateType::NOT_SET),
    m_resourceStateHasBeenSet(false)
{
}

Aws::String UpdateFolderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_parentFolderIdHasBeenSet)
  {
   payload.WithString("ParentFolderId", m_parentFolderId);

  }

  if(m_resourceStateHasBeenSet)
  {
   payload.WithString("ResourceState", ResourceStateTypeMapper::GetNameForResourceStateType(m_resourceState));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFolderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}




