/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/qconnect/model/ListModelsRequest.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListModelsRequest::SerializePayload() const { return {}; }

void ListModelsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_aiPromptTypeHasBeenSet) {
    ss << AIPromptTypeMapper::GetNameForAIPromptType(m_aiPromptType);
    uri.AddQueryStringParameter("aiPromptType", ss.str());
    ss.str("");
  }

  if (m_modelLifecycleHasBeenSet) {
    ss << ModelLifecycleMapper::GetNameForModelLifecycle(m_modelLifecycle);
    uri.AddQueryStringParameter("modelLifecycle", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }
}
