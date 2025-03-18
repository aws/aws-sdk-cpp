/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DeleteAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteAnalysisRequest::SerializePayload() const
{
  return {};
}

void DeleteAnalysisRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_recoveryWindowInDaysHasBeenSet)
    {
      ss << m_recoveryWindowInDays;
      uri.AddQueryStringParameter("recovery-window-in-days", ss.str());
      ss.str("");
    }

    if(m_forceDeleteWithoutRecoveryHasBeenSet)
    {
      ss << m_forceDeleteWithoutRecovery;
      uri.AddQueryStringParameter("force-delete-without-recovery", ss.str());
      ss.str("");
    }

}



