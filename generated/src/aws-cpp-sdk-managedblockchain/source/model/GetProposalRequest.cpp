/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/GetProposalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetProposalRequest::GetProposalRequest() : 
    m_networkIdHasBeenSet(false),
    m_proposalIdHasBeenSet(false)
{
}

Aws::String GetProposalRequest::SerializePayload() const
{
  return {};
}




