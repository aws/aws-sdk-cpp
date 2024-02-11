/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ProfileSummary.h>
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

ProfileSummary::ProfileSummary() : 
    m_profileArnHasBeenSet(false),
    m_profileVersionHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_profileDescriptionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

ProfileSummary::ProfileSummary(JsonView jsonValue) : 
    m_profileArnHasBeenSet(false),
    m_profileVersionHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_profileDescriptionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileSummary& ProfileSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ProfileName"))
  {
    m_profileName = jsonValue.GetString("ProfileName");

    m_profileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileDescription"))
  {
    m_profileDescription = jsonValue.GetString("ProfileDescription");

    m_profileDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileSummary::Jsonize() const
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

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("ProfileName", m_profileName);

  }

  if(m_profileDescriptionHasBeenSet)
  {
   payload.WithString("ProfileDescription", m_profileDescription);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
