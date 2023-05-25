/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/ChefConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

ChefConfiguration::ChefConfiguration() : 
    m_manageBerkshelf(false),
    m_manageBerkshelfHasBeenSet(false),
    m_berkshelfVersionHasBeenSet(false)
{
}

ChefConfiguration::ChefConfiguration(JsonView jsonValue) : 
    m_manageBerkshelf(false),
    m_manageBerkshelfHasBeenSet(false),
    m_berkshelfVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ChefConfiguration& ChefConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManageBerkshelf"))
  {
    m_manageBerkshelf = jsonValue.GetBool("ManageBerkshelf");

    m_manageBerkshelfHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BerkshelfVersion"))
  {
    m_berkshelfVersion = jsonValue.GetString("BerkshelfVersion");

    m_berkshelfVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ChefConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manageBerkshelfHasBeenSet)
  {
   payload.WithBool("ManageBerkshelf", m_manageBerkshelf);

  }

  if(m_berkshelfVersionHasBeenSet)
  {
   payload.WithString("BerkshelfVersion", m_berkshelfVersion);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
