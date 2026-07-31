/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/DeleteTestSourcesRequest.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteTestSourcesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_testIdHasBeenSet) {
    payload.WithString("testId", m_testId);
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_testSourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> testSourcesJsonList(m_testSources.size());
    for (unsigned testSourcesIndex = 0; testSourcesIndex < testSourcesJsonList.GetLength(); ++testSourcesIndex) {
      testSourcesJsonList[testSourcesIndex].AsObject(m_testSources[testSourcesIndex].Jsonize());
    }
    payload.WithArray("testSources", std::move(testSourcesJsonList));
  }

  return payload.View().WriteReadable();
}
