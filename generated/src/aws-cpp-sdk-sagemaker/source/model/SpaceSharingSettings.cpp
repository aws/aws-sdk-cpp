/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceSharingSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

SpaceSharingSettings::SpaceSharingSettings() : 
    m_sharingType(SharingType::NOT_SET),
    m_sharingTypeHasBeenSet(false)
{
}

SpaceSharingSettings::SpaceSharingSettings(JsonView jsonValue) : 
    m_sharingType(SharingType::NOT_SET),
    m_sharingTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SpaceSharingSettings& SpaceSharingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SharingType"))
  {
    m_sharingType = SharingTypeMapper::GetSharingTypeForName(jsonValue.GetString("SharingType"));

    m_sharingTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SpaceSharingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_sharingTypeHasBeenSet)
  {
   payload.WithString("SharingType", SharingTypeMapper::GetNameForSharingType(m_sharingType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
