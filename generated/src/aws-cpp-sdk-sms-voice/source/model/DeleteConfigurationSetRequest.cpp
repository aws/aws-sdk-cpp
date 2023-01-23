/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/DeleteConfigurationSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConfigurationSetRequest::DeleteConfigurationSetRequest() : 
    m_configurationSetNameHasBeenSet(false)
{
}

Aws::String DeleteConfigurationSetRequest::SerializePayload() const
{
  return {};
}




