/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/SubmitMultiRegionAccessPointRoutesRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

SubmitMultiRegionAccessPointRoutesRequest::SubmitMultiRegionAccessPointRoutesRequest() : 
    m_accountIdHasBeenSet(false),
    m_mrapHasBeenSet(false),
    m_routeUpdatesHasBeenSet(false)
{
}

Aws::String SubmitMultiRegionAccessPointRoutesRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("SubmitMultiRegionAccessPointRoutesRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://awss3control.amazonaws.com/doc/2018-08-20/");

  Aws::StringStream ss;
  if(m_routeUpdatesHasBeenSet)
  {
   XmlNode routeUpdatesParentNode = parentNode.CreateChildElement("RouteUpdates");
   for(const auto& item : m_routeUpdates)
   {
     XmlNode routeUpdatesNode = routeUpdatesParentNode.CreateChildElement("Route");
     item.AddToNode(routeUpdatesNode);
   }
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection SubmitMultiRegionAccessPointRoutesRequest::GetRequestSpecificHeaders() const
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

SubmitMultiRegionAccessPointRoutesRequest::EndpointParameters SubmitMultiRegionAccessPointRoutesRequest::GetEndpointContextParams() const
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
