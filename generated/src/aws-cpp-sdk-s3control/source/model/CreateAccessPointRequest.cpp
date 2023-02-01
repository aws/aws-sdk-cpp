/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateAccessPointRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateAccessPointRequest::CreateAccessPointRequest() : 
    m_accountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_publicAccessBlockConfigurationHasBeenSet(false),
    m_bucketAccountIdHasBeenSet(false)
{
}

Aws::String CreateAccessPointRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateAccessPointRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://awss3control.amazonaws.com/doc/2018-08-20/");

  Aws::StringStream ss;
  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

  if(m_vpcConfigurationHasBeenSet)
  {
   XmlNode vpcConfigurationNode = parentNode.CreateChildElement("VpcConfiguration");
   m_vpcConfiguration.AddToNode(vpcConfigurationNode);
  }

  if(m_publicAccessBlockConfigurationHasBeenSet)
  {
   XmlNode publicAccessBlockConfigurationNode = parentNode.CreateChildElement("PublicAccessBlockConfiguration");
   m_publicAccessBlockConfiguration.AddToNode(publicAccessBlockConfigurationNode);
  }

  if(m_bucketAccountIdHasBeenSet)
  {
   XmlNode bucketAccountIdNode = parentNode.CreateChildElement("BucketAccountId");
   bucketAccountIdNode.SetText(m_bucketAccountId);
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection CreateAccessPointRequest::GetRequestSpecificHeaders() const
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

CreateAccessPointRequest::EndpointParameters CreateAccessPointRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("RequiresAccountId"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    // Operation context parameters
    if (AccountIdHasBeenSet()) {
        parameters.emplace_back(Aws::String("AccountId"), this->GetAccountId(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    if (BucketHasBeenSet()) {
        parameters.emplace_back(Aws::String("Bucket"), this->GetBucket(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}
