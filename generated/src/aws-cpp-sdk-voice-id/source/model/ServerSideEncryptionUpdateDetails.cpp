/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ServerSideEncryptionUpdateDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

ServerSideEncryptionUpdateDetails::ServerSideEncryptionUpdateDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ServerSideEncryptionUpdateDetails& ServerSideEncryptionUpdateDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OldKmsKeyId"))
  {
    m_oldKmsKeyId = jsonValue.GetString("OldKmsKeyId");
    m_oldKmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateStatus"))
  {
    m_updateStatus = ServerSideEncryptionUpdateStatusMapper::GetServerSideEncryptionUpdateStatusForName(jsonValue.GetString("UpdateStatus"));
    m_updateStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerSideEncryptionUpdateDetails::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_oldKmsKeyIdHasBeenSet)
  {
   payload.WithString("OldKmsKeyId", m_oldKmsKeyId);

  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("UpdateStatus", ServerSideEncryptionUpdateStatusMapper::GetNameForServerSideEncryptionUpdateStatus(m_updateStatus));
  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
