/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/SelectRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils;

SelectRequest::SelectRequest() : 
    m_selectExpressionHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false)
{
}

Aws::String SelectRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=Select&";
  if(m_selectExpressionHasBeenSet)
  {
    ss << "SelectExpression=" << StringUtils::URLEncode(m_selectExpression.c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_consistentReadHasBeenSet)
  {
    ss << "ConsistentRead=" << std::boolalpha << m_consistentRead << "&";
  }

  ss << "Version=2009-04-15";
  return ss.str();
}


void  SelectRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
