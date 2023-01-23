/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GetRecommenderConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRecommenderConfigurationRequest::GetRecommenderConfigurationRequest() : 
    m_recommenderIdHasBeenSet(false)
{
}

Aws::String GetRecommenderConfigurationRequest::SerializePayload() const
{
  return {};
}




