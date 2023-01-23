/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ChapInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

ChapInfo::ChapInfo() : 
    m_targetARNHasBeenSet(false),
    m_secretToAuthenticateInitiatorHasBeenSet(false),
    m_initiatorNameHasBeenSet(false),
    m_secretToAuthenticateTargetHasBeenSet(false)
{
}

ChapInfo::ChapInfo(JsonView jsonValue) : 
    m_targetARNHasBeenSet(false),
    m_secretToAuthenticateInitiatorHasBeenSet(false),
    m_initiatorNameHasBeenSet(false),
    m_secretToAuthenticateTargetHasBeenSet(false)
{
  *this = jsonValue;
}

ChapInfo& ChapInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetARN"))
  {
    m_targetARN = jsonValue.GetString("TargetARN");

    m_targetARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretToAuthenticateInitiator"))
  {
    m_secretToAuthenticateInitiator = jsonValue.GetString("SecretToAuthenticateInitiator");

    m_secretToAuthenticateInitiatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitiatorName"))
  {
    m_initiatorName = jsonValue.GetString("InitiatorName");

    m_initiatorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretToAuthenticateTarget"))
  {
    m_secretToAuthenticateTarget = jsonValue.GetString("SecretToAuthenticateTarget");

    m_secretToAuthenticateTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue ChapInfo::Jsonize() const
{
  JsonValue payload;

  if(m_targetARNHasBeenSet)
  {
   payload.WithString("TargetARN", m_targetARN);

  }

  if(m_secretToAuthenticateInitiatorHasBeenSet)
  {
   payload.WithString("SecretToAuthenticateInitiator", m_secretToAuthenticateInitiator);

  }

  if(m_initiatorNameHasBeenSet)
  {
   payload.WithString("InitiatorName", m_initiatorName);

  }

  if(m_secretToAuthenticateTargetHasBeenSet)
  {
   payload.WithString("SecretToAuthenticateTarget", m_secretToAuthenticateTarget);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
