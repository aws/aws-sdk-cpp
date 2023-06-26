/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/GetSpeechSynthesisTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSpeechSynthesisTaskRequest::GetSpeechSynthesisTaskRequest() : 
    m_taskIdHasBeenSet(false)
{
}

Aws::String GetSpeechSynthesisTaskRequest::SerializePayload() const
{
  return {};
}




