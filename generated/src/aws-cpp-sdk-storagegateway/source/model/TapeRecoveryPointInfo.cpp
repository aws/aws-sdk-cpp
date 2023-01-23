/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/TapeRecoveryPointInfo.h>
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

TapeRecoveryPointInfo::TapeRecoveryPointInfo() : 
    m_tapeARNHasBeenSet(false),
    m_tapeRecoveryPointTimeHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_tapeStatusHasBeenSet(false)
{
}

TapeRecoveryPointInfo::TapeRecoveryPointInfo(JsonView jsonValue) : 
    m_tapeARNHasBeenSet(false),
    m_tapeRecoveryPointTimeHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_tapeStatusHasBeenSet(false)
{
  *this = jsonValue;
}

TapeRecoveryPointInfo& TapeRecoveryPointInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TapeARN"))
  {
    m_tapeARN = jsonValue.GetString("TapeARN");

    m_tapeARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeRecoveryPointTime"))
  {
    m_tapeRecoveryPointTime = jsonValue.GetDouble("TapeRecoveryPointTime");

    m_tapeRecoveryPointTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeSizeInBytes"))
  {
    m_tapeSizeInBytes = jsonValue.GetInt64("TapeSizeInBytes");

    m_tapeSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeStatus"))
  {
    m_tapeStatus = jsonValue.GetString("TapeStatus");

    m_tapeStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue TapeRecoveryPointInfo::Jsonize() const
{
  JsonValue payload;

  if(m_tapeARNHasBeenSet)
  {
   payload.WithString("TapeARN", m_tapeARN);

  }

  if(m_tapeRecoveryPointTimeHasBeenSet)
  {
   payload.WithDouble("TapeRecoveryPointTime", m_tapeRecoveryPointTime.SecondsWithMSPrecision());
  }

  if(m_tapeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("TapeSizeInBytes", m_tapeSizeInBytes);

  }

  if(m_tapeStatusHasBeenSet)
  {
   payload.WithString("TapeStatus", m_tapeStatus);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
