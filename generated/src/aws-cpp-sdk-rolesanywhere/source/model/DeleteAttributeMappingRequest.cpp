/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/DeleteAttributeMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteAttributeMappingRequest::SerializePayload() const
{
  return {};
}

void DeleteAttributeMappingRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_certificateFieldHasBeenSet)
    {
      ss << CertificateFieldMapper::GetNameForCertificateField(m_certificateField);
      uri.AddQueryStringParameter("certificateField", ss.str());
      ss.str("");
    }

    if(m_specifiersHasBeenSet)
    {
      for(const auto& item : m_specifiers)
      {
        ss << item;
        uri.AddQueryStringParameter("specifiers", ss.str());
        ss.str("");
      }
    }

}



