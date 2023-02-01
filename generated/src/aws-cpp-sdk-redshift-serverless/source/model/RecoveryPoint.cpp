/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/RecoveryPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

RecoveryPoint::RecoveryPoint() : 
    m_namespaceArnHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_recoveryPointCreateTimeHasBeenSet(false),
    m_recoveryPointIdHasBeenSet(false),
    m_totalSizeInMegaBytes(0.0),
    m_totalSizeInMegaBytesHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
}

RecoveryPoint::RecoveryPoint(JsonView jsonValue) : 
    m_namespaceArnHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_recoveryPointCreateTimeHasBeenSet(false),
    m_recoveryPointIdHasBeenSet(false),
    m_totalSizeInMegaBytes(0.0),
    m_totalSizeInMegaBytesHasBeenSet(false),
    m_workgroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryPoint& RecoveryPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespaceArn"))
  {
    m_namespaceArn = jsonValue.GetString("namespaceArn");

    m_namespaceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recoveryPointCreateTime"))
  {
    m_recoveryPointCreateTime = jsonValue.GetString("recoveryPointCreateTime");

    m_recoveryPointCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recoveryPointId"))
  {
    m_recoveryPointId = jsonValue.GetString("recoveryPointId");

    m_recoveryPointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalSizeInMegaBytes"))
  {
    m_totalSizeInMegaBytes = jsonValue.GetDouble("totalSizeInMegaBytes");

    m_totalSizeInMegaBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupName"))
  {
    m_workgroupName = jsonValue.GetString("workgroupName");

    m_workgroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryPoint::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceArnHasBeenSet)
  {
   payload.WithString("namespaceArn", m_namespaceArn);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_recoveryPointCreateTimeHasBeenSet)
  {
   payload.WithString("recoveryPointCreateTime", m_recoveryPointCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_recoveryPointIdHasBeenSet)
  {
   payload.WithString("recoveryPointId", m_recoveryPointId);

  }

  if(m_totalSizeInMegaBytesHasBeenSet)
  {
   payload.WithDouble("totalSizeInMegaBytes", m_totalSizeInMegaBytes);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
