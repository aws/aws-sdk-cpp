/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateJobRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateJobRequest::CreateJobRequest() : 
    m_accountIdHasBeenSet(false),
    m_confirmationRequired(false),
    m_confirmationRequiredHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_reportHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_manifestHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_manifestGeneratorHasBeenSet(false)
{
}

Aws::String CreateJobRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateJobRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://awss3control.amazonaws.com/doc/2018-08-20/");

  Aws::StringStream ss;
  if(m_confirmationRequiredHasBeenSet)
  {
   XmlNode confirmationRequiredNode = parentNode.CreateChildElement("ConfirmationRequired");
   ss << std::boolalpha << m_confirmationRequired;
   confirmationRequiredNode.SetText(ss.str());
   ss.str("");
  }

  if(m_operationHasBeenSet)
  {
   XmlNode operationNode = parentNode.CreateChildElement("Operation");
   m_operation.AddToNode(operationNode);
  }

  if(m_reportHasBeenSet)
  {
   XmlNode reportNode = parentNode.CreateChildElement("Report");
   m_report.AddToNode(reportNode);
  }

  if(m_clientRequestTokenHasBeenSet)
  {
   XmlNode clientRequestTokenNode = parentNode.CreateChildElement("ClientRequestToken");
   clientRequestTokenNode.SetText(m_clientRequestToken);
  }

  if(m_manifestHasBeenSet)
  {
   XmlNode manifestNode = parentNode.CreateChildElement("Manifest");
   m_manifest.AddToNode(manifestNode);
  }

  if(m_descriptionHasBeenSet)
  {
   XmlNode descriptionNode = parentNode.CreateChildElement("Description");
   descriptionNode.SetText(m_description);
  }

  if(m_priorityHasBeenSet)
  {
   XmlNode priorityNode = parentNode.CreateChildElement("Priority");
   ss << m_priority;
   priorityNode.SetText(ss.str());
   ss.str("");
  }

  if(m_roleArnHasBeenSet)
  {
   XmlNode roleArnNode = parentNode.CreateChildElement("RoleArn");
   roleArnNode.SetText(m_roleArn);
  }

  if(m_tagsHasBeenSet)
  {
   XmlNode tagsParentNode = parentNode.CreateChildElement("Tags");
   for(const auto& item : m_tags)
   {
     XmlNode tagsNode = tagsParentNode.CreateChildElement("S3Tag");
     item.AddToNode(tagsNode);
   }
  }

  if(m_manifestGeneratorHasBeenSet)
  {
   XmlNode manifestGeneratorNode = parentNode.CreateChildElement("ManifestGenerator");
   m_manifestGenerator.AddToNode(manifestGeneratorNode);
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection CreateJobRequest::GetRequestSpecificHeaders() const
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

CreateJobRequest::EndpointParameters CreateJobRequest::GetEndpointContextParams() const
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
