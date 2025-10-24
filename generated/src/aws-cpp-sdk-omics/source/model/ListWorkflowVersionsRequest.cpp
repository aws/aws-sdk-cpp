﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/omics/model/ListWorkflowVersionsRequest.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListWorkflowVersionsRequest::SerializePayload() const { return {}; }

void ListWorkflowVersionsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_typeHasBeenSet) {
    ss << WorkflowTypeMapper::GetNameForWorkflowType(m_type);
    uri.AddQueryStringParameter("type", ss.str());
    ss.str("");
  }

  if (m_workflowOwnerIdHasBeenSet) {
    ss << m_workflowOwnerId;
    uri.AddQueryStringParameter("workflowOwnerId", ss.str());
    ss.str("");
  }

  if (m_startingTokenHasBeenSet) {
    ss << m_startingToken;
    uri.AddQueryStringParameter("startingToken", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }
}
