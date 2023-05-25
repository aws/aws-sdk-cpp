/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FeatureGroupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

FeatureGroupSummary::FeatureGroupSummary() : 
    m_featureGroupNameHasBeenSet(false),
    m_featureGroupArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_featureGroupStatus(FeatureGroupStatus::NOT_SET),
    m_featureGroupStatusHasBeenSet(false),
    m_offlineStoreStatusHasBeenSet(false)
{
}

FeatureGroupSummary::FeatureGroupSummary(JsonView jsonValue) : 
    m_featureGroupNameHasBeenSet(false),
    m_featureGroupArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_featureGroupStatus(FeatureGroupStatus::NOT_SET),
    m_featureGroupStatusHasBeenSet(false),
    m_offlineStoreStatusHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureGroupSummary& FeatureGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");

    m_featureGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureGroupArn"))
  {
    m_featureGroupArn = jsonValue.GetString("FeatureGroupArn");

    m_featureGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureGroupStatus"))
  {
    m_featureGroupStatus = FeatureGroupStatusMapper::GetFeatureGroupStatusForName(jsonValue.GetString("FeatureGroupStatus"));

    m_featureGroupStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfflineStoreStatus"))
  {
    m_offlineStoreStatus = jsonValue.GetObject("OfflineStoreStatus");

    m_offlineStoreStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue FeatureGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  if(m_featureGroupArnHasBeenSet)
  {
   payload.WithString("FeatureGroupArn", m_featureGroupArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_featureGroupStatusHasBeenSet)
  {
   payload.WithString("FeatureGroupStatus", FeatureGroupStatusMapper::GetNameForFeatureGroupStatus(m_featureGroupStatus));
  }

  if(m_offlineStoreStatusHasBeenSet)
  {
   payload.WithObject("OfflineStoreStatus", m_offlineStoreStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
