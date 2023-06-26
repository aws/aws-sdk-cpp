/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DisassociateDataShareConsumerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DisassociateDataShareConsumerRequest::DisassociateDataShareConsumerRequest() : 
    m_dataShareArnHasBeenSet(false),
    m_disassociateEntireAccount(false),
    m_disassociateEntireAccountHasBeenSet(false),
    m_consumerArnHasBeenSet(false),
    m_consumerRegionHasBeenSet(false)
{
}

Aws::String DisassociateDataShareConsumerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisassociateDataShareConsumer&";
  if(m_dataShareArnHasBeenSet)
  {
    ss << "DataShareArn=" << StringUtils::URLEncode(m_dataShareArn.c_str()) << "&";
  }

  if(m_disassociateEntireAccountHasBeenSet)
  {
    ss << "DisassociateEntireAccount=" << std::boolalpha << m_disassociateEntireAccount << "&";
  }

  if(m_consumerArnHasBeenSet)
  {
    ss << "ConsumerArn=" << StringUtils::URLEncode(m_consumerArn.c_str()) << "&";
  }

  if(m_consumerRegionHasBeenSet)
  {
    ss << "ConsumerRegion=" << StringUtils::URLEncode(m_consumerRegion.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DisassociateDataShareConsumerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
