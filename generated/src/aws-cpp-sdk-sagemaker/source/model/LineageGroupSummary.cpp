/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LineageGroupSummary.h>
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

LineageGroupSummary::LineageGroupSummary() : 
    m_lineageGroupArnHasBeenSet(false),
    m_lineageGroupNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

LineageGroupSummary::LineageGroupSummary(JsonView jsonValue) : 
    m_lineageGroupArnHasBeenSet(false),
    m_lineageGroupNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LineageGroupSummary& LineageGroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LineageGroupArn"))
  {
    m_lineageGroupArn = jsonValue.GetString("LineageGroupArn");

    m_lineageGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineageGroupName"))
  {
    m_lineageGroupName = jsonValue.GetString("LineageGroupName");

    m_lineageGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LineageGroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_lineageGroupArnHasBeenSet)
  {
   payload.WithString("LineageGroupArn", m_lineageGroupArn);

  }

  if(m_lineageGroupNameHasBeenSet)
  {
   payload.WithString("LineageGroupName", m_lineageGroupName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
