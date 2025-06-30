/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AthenaParameters.h>
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

AthenaParameters::AthenaParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

AthenaParameters& AthenaParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkGroup"))
  {
    m_workGroup = jsonValue.GetString("WorkGroup");
    m_workGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityCenterConfiguration"))
  {
    m_identityCenterConfiguration = jsonValue.GetObject("IdentityCenterConfiguration");
    m_identityCenterConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AthenaParameters::Jsonize() const
{
  JsonValue payload;

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_identityCenterConfigurationHasBeenSet)
  {
   payload.WithObject("IdentityCenterConfiguration", m_identityCenterConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
