/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/DeleteAccessControlApplicationRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteAccessControlApplicationRequest::SerializePayload() const { return {}; }

void DeleteAccessControlApplicationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_applicationIdHasBeenSet) {
    ss << m_applicationId;
    uri.AddQueryStringParameter("ApplicationId", ss.str());
    ss.str("");
  }

  if (m_idcApplicationArnHasBeenSet) {
    ss << m_idcApplicationArn;
    uri.AddQueryStringParameter("IdcApplicationArn", ss.str());
    ss.str("");
  }
}
