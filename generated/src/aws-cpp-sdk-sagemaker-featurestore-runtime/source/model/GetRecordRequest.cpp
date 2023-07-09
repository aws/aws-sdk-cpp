/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/GetRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetRecordRequest::GetRecordRequest() : 
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifierValueAsStringHasBeenSet(false),
    m_featureNamesHasBeenSet(false),
    m_expirationTimeResponse(ExpirationTimeResponse::NOT_SET),
    m_expirationTimeResponseHasBeenSet(false)
{
}

Aws::String GetRecordRequest::SerializePayload() const
{
  return {};
}

void GetRecordRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_recordIdentifierValueAsStringHasBeenSet)
    {
      ss << m_recordIdentifierValueAsString;
      uri.AddQueryStringParameter("RecordIdentifierValueAsString", ss.str());
      ss.str("");
    }

    if(m_featureNamesHasBeenSet)
    {
      for(const auto& item : m_featureNames)
      {
        ss << item;
        uri.AddQueryStringParameter("FeatureName", ss.str());
        ss.str("");
      }
    }

    if(m_expirationTimeResponseHasBeenSet)
    {
      ss << ExpirationTimeResponseMapper::GetNameForExpirationTimeResponse(m_expirationTimeResponse);
      uri.AddQueryStringParameter("ExpirationTimeResponse", ss.str());
      ss.str("");
    }

}



