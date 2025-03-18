/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RestoreAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String RestoreAnalysisRequest::SerializePayload() const
{
  return {};
}

void RestoreAnalysisRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_restoreToFoldersHasBeenSet)
    {
      ss << m_restoreToFolders;
      uri.AddQueryStringParameter("restore-to-folders", ss.str());
      ss.str("");
    }

}



