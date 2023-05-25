/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/PutAccessPointPolicyForObjectLambdaRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

PutAccessPointPolicyForObjectLambdaRequest::PutAccessPointPolicyForObjectLambdaRequest() : 
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String PutAccessPointPolicyForObjectLambdaRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("PutAccessPointPolicyForObjectLambdaRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://awss3control.amazonaws.com/doc/2018-08-20/");

  Aws::StringStream ss;
  if(m_policyHasBeenSet)
  {
   XmlNode policyNode = parentNode.CreateChildElement("Policy");
   policyNode.SetText(m_policy);
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection PutAccessPointPolicyForObjectLambdaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accountIdHasBeenSet)
  {
    ss << m_accountId;
    headers.emplace("x-amz-account-id",  ss.str());
    ss.str("");
  }

  return headers;
}

PutAccessPointPolicyForObjectLambdaRequest::EndpointParameters PutAccessPointPolicyForObjectLambdaRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("RequiresAccountId"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    // Operation context parameters
    if (AccountIdHasBeenSet()) {
        parameters.emplace_back(Aws::String("AccountId"), this->GetAccountId(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}
