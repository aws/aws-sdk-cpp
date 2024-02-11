/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyDBRecommendationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyDBRecommendationRequest::ModifyDBRecommendationRequest() : 
    m_recommendationIdHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_recommendedActionUpdatesHasBeenSet(false)
{
}

Aws::String ModifyDBRecommendationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBRecommendation&";
  if(m_recommendationIdHasBeenSet)
  {
    ss << "RecommendationId=" << StringUtils::URLEncode(m_recommendationId.c_str()) << "&";
  }

  if(m_localeHasBeenSet)
  {
    ss << "Locale=" << StringUtils::URLEncode(m_locale.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_recommendedActionUpdatesHasBeenSet)
  {
    unsigned recommendedActionUpdatesCount = 1;
    for(auto& item : m_recommendedActionUpdates)
    {
      item.OutputToStream(ss, "RecommendedActionUpdates.member.", recommendedActionUpdatesCount, "");
      recommendedActionUpdatesCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBRecommendationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
