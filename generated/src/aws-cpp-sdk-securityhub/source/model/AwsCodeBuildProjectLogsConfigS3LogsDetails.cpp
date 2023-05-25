/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCodeBuildProjectLogsConfigS3LogsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCodeBuildProjectLogsConfigS3LogsDetails::AwsCodeBuildProjectLogsConfigS3LogsDetails() : 
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsCodeBuildProjectLogsConfigS3LogsDetails::AwsCodeBuildProjectLogsConfigS3LogsDetails(JsonView jsonValue) : 
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCodeBuildProjectLogsConfigS3LogsDetails& AwsCodeBuildProjectLogsConfigS3LogsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionDisabled"))
  {
    m_encryptionDisabled = jsonValue.GetBool("EncryptionDisabled");

    m_encryptionDisabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCodeBuildProjectLogsConfigS3LogsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionDisabledHasBeenSet)
  {
   payload.WithBool("EncryptionDisabled", m_encryptionDisabled);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
