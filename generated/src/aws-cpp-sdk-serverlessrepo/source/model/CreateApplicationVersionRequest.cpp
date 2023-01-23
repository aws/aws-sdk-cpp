/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/CreateApplicationVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationVersionRequest::CreateApplicationVersionRequest() : 
    m_applicationIdHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_sourceCodeArchiveUrlHasBeenSet(false),
    m_sourceCodeUrlHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_templateUrlHasBeenSet(false)
{
}

Aws::String CreateApplicationVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceCodeArchiveUrlHasBeenSet)
  {
   payload.WithString("sourceCodeArchiveUrl", m_sourceCodeArchiveUrl);

  }

  if(m_sourceCodeUrlHasBeenSet)
  {
   payload.WithString("sourceCodeUrl", m_sourceCodeUrl);

  }

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  if(m_templateUrlHasBeenSet)
  {
   payload.WithString("templateUrl", m_templateUrl);

  }

  return payload.View().WriteReadable();
}




