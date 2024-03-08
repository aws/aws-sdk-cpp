/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensUpgradeSummary.h>
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

LensUpgradeSummary::LensUpgradeSummary() : 
    m_workloadIdHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_currentLensVersionHasBeenSet(false),
    m_latestLensVersionHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

LensUpgradeSummary::LensUpgradeSummary(JsonView jsonValue) : 
    m_workloadIdHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_lensArnHasBeenSet(false),
    m_currentLensVersionHasBeenSet(false),
    m_latestLensVersionHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

LensUpgradeSummary& LensUpgradeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

    m_workloadIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadName"))
  {
    m_workloadName = jsonValue.GetString("WorkloadName");

    m_workloadNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

    m_lensAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

    m_lensArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentLensVersion"))
  {
    m_currentLensVersion = jsonValue.GetString("CurrentLensVersion");

    m_currentLensVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestLensVersion"))
  {
    m_latestLensVersion = jsonValue.GetString("LatestLensVersion");

    m_latestLensVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");

    m_resourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LensUpgradeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_workloadIdHasBeenSet)
  {
   payload.WithString("WorkloadId", m_workloadId);

  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("WorkloadName", m_workloadName);

  }

  if(m_lensAliasHasBeenSet)
  {
   payload.WithString("LensAlias", m_lensAlias);

  }

  if(m_lensArnHasBeenSet)
  {
   payload.WithString("LensArn", m_lensArn);

  }

  if(m_currentLensVersionHasBeenSet)
  {
   payload.WithString("CurrentLensVersion", m_currentLensVersion);

  }

  if(m_latestLensVersionHasBeenSet)
  {
   payload.WithString("LatestLensVersion", m_latestLensVersion);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
