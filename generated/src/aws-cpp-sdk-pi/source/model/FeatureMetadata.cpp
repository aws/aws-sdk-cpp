/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/FeatureMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

FeatureMetadata::FeatureMetadata() : 
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

FeatureMetadata::FeatureMetadata(JsonView jsonValue) : 
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureMetadata& FeatureMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue FeatureMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", FeatureStatusMapper::GetNameForFeatureStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
