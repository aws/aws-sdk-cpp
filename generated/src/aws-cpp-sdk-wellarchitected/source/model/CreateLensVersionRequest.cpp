/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/CreateLensVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLensVersionRequest::CreateLensVersionRequest() : 
    m_lensAliasHasBeenSet(false),
    m_lensVersionHasBeenSet(false),
    m_isMajorVersion(false),
    m_isMajorVersionHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String CreateLensVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lensVersionHasBeenSet)
  {
   payload.WithString("LensVersion", m_lensVersion);

  }

  if(m_isMajorVersionHasBeenSet)
  {
   payload.WithBool("IsMajorVersion", m_isMajorVersion);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




