/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/Tool.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

Tool::Tool() : 
    m_streamUI(false),
    m_streamUIHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_streamOutputToCloudWatch(false),
    m_streamOutputToCloudWatchHasBeenSet(false),
    m_exitBehavior(ExitBehavior::NOT_SET),
    m_exitBehaviorHasBeenSet(false)
{
}

Tool::Tool(JsonView jsonValue) : 
    m_streamUI(false),
    m_streamUIHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_streamOutputToCloudWatch(false),
    m_streamOutputToCloudWatchHasBeenSet(false),
    m_exitBehavior(ExitBehavior::NOT_SET),
    m_exitBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

Tool& Tool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamUI"))
  {
    m_streamUI = jsonValue.GetBool("streamUI");

    m_streamUIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    m_command = jsonValue.GetString("command");

    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamOutputToCloudWatch"))
  {
    m_streamOutputToCloudWatch = jsonValue.GetBool("streamOutputToCloudWatch");

    m_streamOutputToCloudWatchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exitBehavior"))
  {
    m_exitBehavior = ExitBehaviorMapper::GetExitBehaviorForName(jsonValue.GetString("exitBehavior"));

    m_exitBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue Tool::Jsonize() const
{
  JsonValue payload;

  if(m_streamUIHasBeenSet)
  {
   payload.WithBool("streamUI", m_streamUI);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_commandHasBeenSet)
  {
   payload.WithString("command", m_command);

  }

  if(m_streamOutputToCloudWatchHasBeenSet)
  {
   payload.WithBool("streamOutputToCloudWatch", m_streamOutputToCloudWatch);

  }

  if(m_exitBehaviorHasBeenSet)
  {
   payload.WithString("exitBehavior", ExitBehaviorMapper::GetNameForExitBehavior(m_exitBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
