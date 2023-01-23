/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateBucketRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateBucketRequest::CreateBucketRequest() : 
    m_aCL(BucketCannedACL::NOT_SET),
    m_aCLHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_createBucketConfigurationHasBeenSet(false),
    m_grantFullControlHasBeenSet(false),
    m_grantReadHasBeenSet(false),
    m_grantReadACPHasBeenSet(false),
    m_grantWriteHasBeenSet(false),
    m_grantWriteACPHasBeenSet(false),
    m_objectLockEnabledForBucket(false),
    m_objectLockEnabledForBucketHasBeenSet(false),
    m_outpostIdHasBeenSet(false)
{
}

Aws::String CreateBucketRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateBucketConfiguration");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://awss3control.amazonaws.com/doc/2018-08-20/");

  m_createBucketConfiguration.AddToNode(parentNode);
  if(parentNode.HasChildren())
  {
    return payloadDoc.ConvertToString();
  }

  return {};
}


Aws::Http::HeaderValueCollection CreateBucketRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_aCLHasBeenSet)
  {
    headers.emplace("x-amz-acl", BucketCannedACLMapper::GetNameForBucketCannedACL(m_aCL));
  }

  if(m_grantFullControlHasBeenSet)
  {
    ss << m_grantFullControl;
    headers.emplace("x-amz-grant-full-control",  ss.str());
    ss.str("");
  }

  if(m_grantReadHasBeenSet)
  {
    ss << m_grantRead;
    headers.emplace("x-amz-grant-read",  ss.str());
    ss.str("");
  }

  if(m_grantReadACPHasBeenSet)
  {
    ss << m_grantReadACP;
    headers.emplace("x-amz-grant-read-acp",  ss.str());
    ss.str("");
  }

  if(m_grantWriteHasBeenSet)
  {
    ss << m_grantWrite;
    headers.emplace("x-amz-grant-write",  ss.str());
    ss.str("");
  }

  if(m_grantWriteACPHasBeenSet)
  {
    ss << m_grantWriteACP;
    headers.emplace("x-amz-grant-write-acp",  ss.str());
    ss.str("");
  }

  if(m_objectLockEnabledForBucketHasBeenSet)
  {
    ss << std::boolalpha << m_objectLockEnabledForBucket;
    headers.emplace("x-amz-bucket-object-lock-enabled", ss.str());
    ss.str("");
  }

  if(m_outpostIdHasBeenSet)
  {
    ss << m_outpostId;
    headers.emplace("x-amz-outpost-id",  ss.str());
    ss.str("");
  }

  return headers;
}

CreateBucketRequest::EndpointParameters CreateBucketRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (BucketHasBeenSet()) {
        parameters.emplace_back(Aws::String("Bucket"), this->GetBucket(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    if (OutpostIdHasBeenSet()) {
        parameters.emplace_back(Aws::String("OutpostId"), this->GetOutpostId(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}
