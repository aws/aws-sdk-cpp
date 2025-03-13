/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/SendAction.h>
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

SendAction::SendAction(JsonView jsonValue)
{
  *this = jsonValue;
}

SendAction& SendAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionFailurePolicy"))
  {
    m_actionFailurePolicy = ActionFailurePolicyMapper::GetActionFailurePolicyForName(jsonValue.GetString("ActionFailurePolicy"));
    m_actionFailurePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SendAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionFailurePolicyHasBeenSet)
  {
   payload.WithString("ActionFailurePolicy", ActionFailurePolicyMapper::GetNameForActionFailurePolicy(m_actionFailurePolicy));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
