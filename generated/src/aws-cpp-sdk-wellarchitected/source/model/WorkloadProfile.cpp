/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

WorkloadProfile::WorkloadProfile() : 
    m_profileArnHasBeenSet(false),
    m_profileVersionHasBeenSet(false)
{
}

WorkloadProfile::WorkloadProfile(JsonView jsonValue) : 
    m_profileArnHasBeenSet(false),
    m_profileVersionHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadProfile& WorkloadProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileArn"))
  {
    m_profileArn = jsonValue.GetString("ProfileArn");

    m_profileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileVersion"))
  {
    m_profileVersion = jsonValue.GetString("ProfileVersion");

    m_profileVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadProfile::Jsonize() const
{
  JsonValue payload;

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("ProfileArn", m_profileArn);

  }

  if(m_profileVersionHasBeenSet)
  {
   payload.WithString("ProfileVersion", m_profileVersion);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
