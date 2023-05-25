/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomActionURLOperation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

CustomActionURLOperation::CustomActionURLOperation() : 
    m_uRLTemplateHasBeenSet(false),
    m_uRLTarget(URLTargetConfiguration::NOT_SET),
    m_uRLTargetHasBeenSet(false)
{
}

CustomActionURLOperation::CustomActionURLOperation(JsonView jsonValue) : 
    m_uRLTemplateHasBeenSet(false),
    m_uRLTarget(URLTargetConfiguration::NOT_SET),
    m_uRLTargetHasBeenSet(false)
{
  *this = jsonValue;
}

CustomActionURLOperation& CustomActionURLOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("URLTemplate"))
  {
    m_uRLTemplate = jsonValue.GetString("URLTemplate");

    m_uRLTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("URLTarget"))
  {
    m_uRLTarget = URLTargetConfigurationMapper::GetURLTargetConfigurationForName(jsonValue.GetString("URLTarget"));

    m_uRLTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomActionURLOperation::Jsonize() const
{
  JsonValue payload;

  if(m_uRLTemplateHasBeenSet)
  {
   payload.WithString("URLTemplate", m_uRLTemplate);

  }

  if(m_uRLTargetHasBeenSet)
  {
   payload.WithString("URLTarget", URLTargetConfigurationMapper::GetNameForURLTargetConfiguration(m_uRLTarget));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
