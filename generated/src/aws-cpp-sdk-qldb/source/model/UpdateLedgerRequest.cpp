/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/UpdateLedgerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLedgerRequest::UpdateLedgerRequest() : 
    m_nameHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_kmsKeyHasBeenSet(false)
{
}

Aws::String UpdateLedgerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("DeletionProtection", m_deletionProtection);

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  return payload.View().WriteReadable();
}




