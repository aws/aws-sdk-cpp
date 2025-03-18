/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ArchivingOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ArchivingOptions::ArchivingOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

ArchivingOptions& ArchivingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArchiveArn"))
  {
    m_archiveArn = jsonValue.GetString("ArchiveArn");
    m_archiveArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ArchivingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_archiveArnHasBeenSet)
  {
   payload.WithString("ArchiveArn", m_archiveArn);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
