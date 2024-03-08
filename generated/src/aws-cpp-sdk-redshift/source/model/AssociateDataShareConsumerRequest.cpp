/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AssociateDataShareConsumerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

AssociateDataShareConsumerRequest::AssociateDataShareConsumerRequest() : 
    m_dataShareArnHasBeenSet(false),
    m_associateEntireAccount(false),
    m_associateEntireAccountHasBeenSet(false),
    m_consumerArnHasBeenSet(false),
    m_consumerRegionHasBeenSet(false),
    m_allowWrites(false),
    m_allowWritesHasBeenSet(false)
{
}

Aws::String AssociateDataShareConsumerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateDataShareConsumer&";
  if(m_dataShareArnHasBeenSet)
  {
    ss << "DataShareArn=" << StringUtils::URLEncode(m_dataShareArn.c_str()) << "&";
  }

  if(m_associateEntireAccountHasBeenSet)
  {
    ss << "AssociateEntireAccount=" << std::boolalpha << m_associateEntireAccount << "&";
  }

  if(m_consumerArnHasBeenSet)
  {
    ss << "ConsumerArn=" << StringUtils::URLEncode(m_consumerArn.c_str()) << "&";
  }

  if(m_consumerRegionHasBeenSet)
  {
    ss << "ConsumerRegion=" << StringUtils::URLEncode(m_consumerRegion.c_str()) << "&";
  }

  if(m_allowWritesHasBeenSet)
  {
    ss << "AllowWrites=" << std::boolalpha << m_allowWrites << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  AssociateDataShareConsumerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
