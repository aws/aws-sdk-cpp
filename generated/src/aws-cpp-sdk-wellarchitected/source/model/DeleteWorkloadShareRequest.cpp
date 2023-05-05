/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/DeleteWorkloadShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteWorkloadShareRequest::DeleteWorkloadShareRequest() : 
    m_shareIdHasBeenSet(false),
    m_workloadIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String DeleteWorkloadShareRequest::SerializePayload() const
{
  return {};
}

void DeleteWorkloadShareRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientRequestTokenHasBeenSet)
    {
      ss << m_clientRequestToken;
      uri.AddQueryStringParameter("ClientRequestToken", ss.str());
      ss.str("");
    }

}



