/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/DeleteLensRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteLensRequest::DeleteLensRequest() : 
    m_lensAliasHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_lensStatus(LensStatusType::NOT_SET),
    m_lensStatusHasBeenSet(false)
{
}

Aws::String DeleteLensRequest::SerializePayload() const
{
  return {};
}

void DeleteLensRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientRequestTokenHasBeenSet)
    {
      ss << m_clientRequestToken;
      uri.AddQueryStringParameter("ClientRequestToken", ss.str());
      ss.str("");
    }

    if(m_lensStatusHasBeenSet)
    {
      ss << LensStatusTypeMapper::GetNameForLensStatusType(m_lensStatus);
      uri.AddQueryStringParameter("LensStatus", ss.str());
      ss.str("");
    }

}



