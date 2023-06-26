/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/DeleteLedgerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLedgerRequest::DeleteLedgerRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String DeleteLedgerRequest::SerializePayload() const
{
  return {};
}




