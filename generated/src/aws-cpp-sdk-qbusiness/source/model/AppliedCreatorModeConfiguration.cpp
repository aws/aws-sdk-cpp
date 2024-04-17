/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AppliedCreatorModeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

AppliedCreatorModeConfiguration::AppliedCreatorModeConfiguration() : 
    m_creatorModeControl(CreatorModeControl::NOT_SET),
    m_creatorModeControlHasBeenSet(false)
{
}

AppliedCreatorModeConfiguration::AppliedCreatorModeConfiguration(JsonView jsonValue) : 
    m_creatorModeControl(CreatorModeControl::NOT_SET),
    m_creatorModeControlHasBeenSet(false)
{
  *this = jsonValue;
}

AppliedCreatorModeConfiguration& AppliedCreatorModeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creatorModeControl"))
  {
    m_creatorModeControl = CreatorModeControlMapper::GetCreatorModeControlForName(jsonValue.GetString("creatorModeControl"));

    m_creatorModeControlHasBeenSet = true;
  }

  return *this;
}

JsonValue AppliedCreatorModeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_creatorModeControlHasBeenSet)
  {
   payload.WithString("creatorModeControl", CreatorModeControlMapper::GetNameForCreatorModeControl(m_creatorModeControl));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
