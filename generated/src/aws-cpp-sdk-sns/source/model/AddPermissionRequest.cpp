/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/AddPermissionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

Aws::String AddPermissionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AddPermission&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_labelHasBeenSet)
  {
    ss << "Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }

  if(m_aWSAccountIdHasBeenSet)
  {
    if (m_aWSAccountId.empty())
    {
      ss << "AWSAccountId=&";
    }
    else
    {
      unsigned aWSAccountIdCount = 1;
      for(auto& item : m_aWSAccountId)
      {
        ss << "AWSAccountId.member." << aWSAccountIdCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        aWSAccountIdCount++;
      }
    }
  }

  if(m_actionNameHasBeenSet)
  {
    if (m_actionName.empty())
    {
      ss << "ActionName=&";
    }
    else
    {
      unsigned actionNameCount = 1;
      for(auto& item : m_actionName)
      {
        ss << "ActionName.member." << actionNameCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        actionNameCount++;
      }
    }
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  AddPermissionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
