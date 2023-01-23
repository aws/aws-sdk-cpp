/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/GetLexiconRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetLexiconRequest::GetLexiconRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String GetLexiconRequest::SerializePayload() const
{
  return {};
}




