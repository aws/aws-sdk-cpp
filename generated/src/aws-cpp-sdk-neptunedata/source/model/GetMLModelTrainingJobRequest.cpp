/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GetMLModelTrainingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetMLModelTrainingJobRequest::GetMLModelTrainingJobRequest() : 
    m_idHasBeenSet(false),
    m_neptuneIamRoleArnHasBeenSet(false)
{
}

Aws::String GetMLModelTrainingJobRequest::SerializePayload() const
{
  return {};
}

void GetMLModelTrainingJobRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_neptuneIamRoleArnHasBeenSet)
    {
      ss << m_neptuneIamRoleArn;
      uri.AddQueryStringParameter("neptuneIamRoleArn", ss.str());
      ss.str("");
    }

}



