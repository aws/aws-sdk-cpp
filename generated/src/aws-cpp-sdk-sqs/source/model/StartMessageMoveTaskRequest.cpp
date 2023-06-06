/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/StartMessageMoveTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SQS::Model;
using namespace Aws::Utils;

StartMessageMoveTaskRequest::StartMessageMoveTaskRequest() : 
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_maxNumberOfMessagesPerSecond(0),
    m_maxNumberOfMessagesPerSecondHasBeenSet(false)
{
}

Aws::String StartMessageMoveTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartMessageMoveTask&";
  if(m_sourceArnHasBeenSet)
  {
    ss << "SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_destinationArnHasBeenSet)
  {
    ss << "DestinationArn=" << StringUtils::URLEncode(m_destinationArn.c_str()) << "&";
  }

  if(m_maxNumberOfMessagesPerSecondHasBeenSet)
  {
    ss << "MaxNumberOfMessagesPerSecond=" << m_maxNumberOfMessagesPerSecond << "&";
  }

  ss << "Version=2012-11-05";
  return ss.str();
}


void  StartMessageMoveTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
