/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-guiconnect/model/ConnectionRecordingPreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMGuiConnect
{
namespace Model
{

ConnectionRecordingPreferences::ConnectionRecordingPreferences(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectionRecordingPreferences& ConnectionRecordingPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KMSKeyArn"))
  {
    m_kMSKeyArn = jsonValue.GetString("KMSKeyArn");
    m_kMSKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordingDestinations"))
  {
    m_recordingDestinations = jsonValue.GetObject("RecordingDestinations");
    m_recordingDestinationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionRecordingPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_kMSKeyArnHasBeenSet)
  {
   payload.WithString("KMSKeyArn", m_kMSKeyArn);

  }

  if(m_recordingDestinationsHasBeenSet)
  {
   payload.WithObject("RecordingDestinations", m_recordingDestinations.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMGuiConnect
} // namespace Aws
