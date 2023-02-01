/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/PostCallAnalyticsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

PostCallAnalyticsSettings::PostCallAnalyticsSettings() : 
    m_outputLocationHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_contentRedactionOutput(ContentRedactionOutput::NOT_SET),
    m_contentRedactionOutputHasBeenSet(false),
    m_outputEncryptionKMSKeyIdHasBeenSet(false)
{
}

PostCallAnalyticsSettings::PostCallAnalyticsSettings(JsonView jsonValue) : 
    m_outputLocationHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_contentRedactionOutput(ContentRedactionOutput::NOT_SET),
    m_contentRedactionOutputHasBeenSet(false),
    m_outputEncryptionKMSKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

PostCallAnalyticsSettings& PostCallAnalyticsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputLocation"))
  {
    m_outputLocation = jsonValue.GetString("OutputLocation");

    m_outputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("DataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentRedactionOutput"))
  {
    m_contentRedactionOutput = ContentRedactionOutputMapper::GetContentRedactionOutputForName(jsonValue.GetString("ContentRedactionOutput"));

    m_contentRedactionOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputEncryptionKMSKeyId"))
  {
    m_outputEncryptionKMSKeyId = jsonValue.GetString("OutputEncryptionKMSKeyId");

    m_outputEncryptionKMSKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PostCallAnalyticsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_outputLocationHasBeenSet)
  {
   payload.WithString("OutputLocation", m_outputLocation);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_contentRedactionOutputHasBeenSet)
  {
   payload.WithString("ContentRedactionOutput", ContentRedactionOutputMapper::GetNameForContentRedactionOutput(m_contentRedactionOutput));
  }

  if(m_outputEncryptionKMSKeyIdHasBeenSet)
  {
   payload.WithString("OutputEncryptionKMSKeyId", m_outputEncryptionKMSKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
