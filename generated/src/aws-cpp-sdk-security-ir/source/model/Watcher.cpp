/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/Watcher.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

Watcher::Watcher(JsonView jsonValue)
{
  *this = jsonValue;
}

Watcher& Watcher::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobTitle"))
  {
    m_jobTitle = jsonValue.GetString("jobTitle");
    m_jobTitleHasBeenSet = true;
  }
  return *this;
}

JsonValue Watcher::Jsonize() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_jobTitleHasBeenSet)
  {
   payload.WithString("jobTitle", m_jobTitle);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
