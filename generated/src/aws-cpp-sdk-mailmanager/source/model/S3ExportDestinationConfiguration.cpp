/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/S3ExportDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

S3ExportDestinationConfiguration::S3ExportDestinationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

S3ExportDestinationConfiguration& S3ExportDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Location"))
  {
    m_s3Location = jsonValue.GetString("S3Location");
    m_s3LocationHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ExportDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3LocationHasBeenSet)
  {
   payload.WithString("S3Location", m_s3Location);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
