/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/GetRevisionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRevisionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_blockAddressHasBeenSet)
  {
   payload.WithObject("BlockAddress", m_blockAddress.Jsonize());

  }

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("DocumentId", m_documentId);

  }

  if(m_digestTipAddressHasBeenSet)
  {
   payload.WithObject("DigestTipAddress", m_digestTipAddress.Jsonize());

  }

  return payload.View().WriteReadable();
}




