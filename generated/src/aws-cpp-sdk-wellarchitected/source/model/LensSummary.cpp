/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensSummary.h>
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

LensSummary::LensSummary() : 
    m_lensArnHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_lensNameHasBeenSet(false),
    m_lensType(LensType::NOT_SET),
    m_lensTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_lensVersionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_lensStatus(LensStatus::NOT_SET),
    m_lensStatusHasBeenSet(false)
{
}

LensSummary::LensSummary(JsonView jsonValue) : 
    m_lensArnHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_lensNameHasBeenSet(false),
    m_lensType(LensType::NOT_SET),
    m_lensTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_lensVersionHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_lensStatus(LensStatus::NOT_SET),
    m_lensStatusHasBeenSet(false)
{
  *this = jsonValue;
}

LensSummary& LensSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

    m_lensArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

    m_lensAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensName"))
  {
    m_lensName = jsonValue.GetString("LensName");

    m_lensNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensType"))
  {
    m_lensType = LensTypeMapper::GetLensTypeForName(jsonValue.GetString("LensType"));

    m_lensTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("LensVersion"))
  {
    m_lensVersion = jsonValue.GetString("LensVersion");

    m_lensVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensStatus"))
  {
    m_lensStatus = LensStatusMapper::GetLensStatusForName(jsonValue.GetString("LensStatus"));

    m_lensStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue LensSummary::Jsonize() const
{
  JsonValue payload;

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_lensAliasHasBeenSet)
  {
   payload.WithString("LensAlias", m_lensAlias);

  }

  if(m_lensNameHasBeenSet)
  {
   payload.WithString("LensName", m_lensName);

  }

  if(m_lensTypeHasBeenSet)
  {
   payload.WithString("LensType", LensTypeMapper::GetNameForLensType(m_lensType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_lensVersionHasBeenSet)
  {
   payload.WithString("LensVersion", m_lensVersion);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_lensStatusHasBeenSet)
  {
   payload.WithString("LensStatus", LensStatusMapper::GetNameForLensStatus(m_lensStatus));
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
