/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateAccessGrantRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateAccessGrantRequest::CreateAccessGrantRequest() : 
    m_accountIdHasBeenSet(false),
    m_accessGrantsLocationIdHasBeenSet(false),
    m_accessGrantsLocationConfigurationHasBeenSet(false),
    m_granteeHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_applicationArnHasBeenSet(false),
    m_s3PrefixType(S3PrefixType::NOT_SET),
    m_s3PrefixTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAccessGrantRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateAccessGrantRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://awss3control.amazonaws.com/doc/2018-08-20/");

  Aws::StringStream ss;
  if(m_accessGrantsLocationIdHasBeenSet)
  {
   XmlNode accessGrantsLocationIdNode = parentNode.CreateChildElement("AccessGrantsLocationId");
   accessGrantsLocationIdNode.SetText(m_accessGrantsLocationId);
  }

  if(m_accessGrantsLocationConfigurationHasBeenSet)
  {
   XmlNode accessGrantsLocationConfigurationNode = parentNode.CreateChildElement("AccessGrantsLocationConfiguration");
   m_accessGrantsLocationConfiguration.AddToNode(accessGrantsLocationConfigurationNode);
  }

  if(m_granteeHasBeenSet)
  {
   XmlNode granteeNode = parentNode.CreateChildElement("Grantee");
   m_grantee.AddToNode(granteeNode);
  }

  if(m_permissionHasBeenSet)
  {
   XmlNode permissionNode = parentNode.CreateChildElement("Permission");
   permissionNode.SetText(PermissionMapper::GetNameForPermission(m_permission));
  }

  if(m_applicationArnHasBeenSet)
  {
   XmlNode applicationArnNode = parentNode.CreateChildElement("ApplicationArn");
   applicationArnNode.SetText(m_applicationArn);
  }

  if(m_s3PrefixTypeHasBeenSet)
  {
   XmlNode s3PrefixTypeNode = parentNode.CreateChildElement("S3PrefixType");
   s3PrefixTypeNode.SetText(S3PrefixTypeMapper::GetNameForS3PrefixType(m_s3PrefixType));
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


Aws::Http::HeaderValueCollection CreateAccessGrantRequest::GetRequestSpecificHeaders() const
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

CreateAccessGrantRequest::EndpointParameters CreateAccessGrantRequest::GetEndpointContextParams() const
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
