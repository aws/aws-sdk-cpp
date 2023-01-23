/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/PutStorageLensConfigurationRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

PutStorageLensConfigurationRequest::PutStorageLensConfigurationRequest() : 
    m_configIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_storageLensConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutStorageLensConfigurationRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("PutStorageLensConfigurationRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://awss3control.amazonaws.com/doc/2018-08-20/");

  Aws::StringStream ss;
  if(m_storageLensConfigurationHasBeenSet)
  {
   XmlNode storageLensConfigurationNode = parentNode.CreateChildElement("StorageLensConfiguration");
   m_storageLensConfiguration.AddToNode(storageLensConfigurationNode);
  }

  if(m_tagsHasBeenSet)
  {
   XmlNode tagsParentNode = parentNode.CreateChildElement("Tags");
   for(const auto& item : m_tags)
   {
     XmlNode tagsNode = tagsParentNode.CreateChildElement("Tag");
     item.AddToNode(tagsNode);
   }
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection PutStorageLensConfigurationRequest::GetRequestSpecificHeaders() const
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

PutStorageLensConfigurationRequest::EndpointParameters PutStorageLensConfigurationRequest::GetEndpointContextParams() const
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
