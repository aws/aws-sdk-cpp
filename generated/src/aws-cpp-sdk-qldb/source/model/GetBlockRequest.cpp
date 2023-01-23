/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/GetBlockRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBlockRequest::GetBlockRequest() : 
    m_nameHasBeenSet(false),
    m_blockAddressHasBeenSet(false),
    m_digestTipAddressHasBeenSet(false)
{
}

Aws::String GetBlockRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_blockAddressHasBeenSet)
  {
   payload.WithObject("BlockAddress", m_blockAddress.Jsonize());

  }

  if(m_digestTipAddressHasBeenSet)
  {
   payload.WithObject("DigestTipAddress", m_digestTipAddress.Jsonize());

  }

  return payload.View().WriteReadable();
}




