/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/FolderConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

FolderConfiguration::FolderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

FolderConfiguration& FolderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = FolderNameMapper::GetFolderNameForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Action"))
  {
    m_action = RetentionActionMapper::GetRetentionActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Period"))
  {
    m_period = jsonValue.GetInteger("Period");
    m_periodHasBeenSet = true;
  }
  return *this;
}

JsonValue FolderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", FolderNameMapper::GetNameForFolderName(m_name));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", RetentionActionMapper::GetNameForRetentionAction(m_action));
  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("Period", m_period);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
