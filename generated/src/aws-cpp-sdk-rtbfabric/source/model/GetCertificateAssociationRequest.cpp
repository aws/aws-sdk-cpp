/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rtbfabric/model/GetCertificateAssociationRequest.h>

#include <utility>

using namespace Aws::RTBFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetCertificateAssociationRequest::SerializePayload() const { return {}; }

void GetCertificateAssociationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_acmCertificateArnHasBeenSet) {
    ss << m_acmCertificateArn;
    uri.AddQueryStringParameter("acmCertificateArn", ss.str());
    ss.str("");
  }
}
