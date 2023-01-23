/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateAccountCustomizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateAccountCustomizationRequest::UpdateAccountCustomizationRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_accountCustomizationHasBeenSet(false)
{
}

Aws::String UpdateAccountCustomizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountCustomizationHasBeenSet)
  {
   payload.WithObject("AccountCustomization", m_accountCustomization.Jsonize());

  }

  return payload.View().WriteReadable();
}

void UpdateAccountCustomizationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_namespaceHasBeenSet)
    {
      ss << m_namespace;
      uri.AddQueryStringParameter("namespace", ss.str());
      ss.str("");
    }

}



