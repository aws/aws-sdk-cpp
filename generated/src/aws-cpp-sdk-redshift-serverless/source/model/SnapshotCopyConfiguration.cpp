/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/SnapshotCopyConfiguration.h>
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

SnapshotCopyConfiguration::SnapshotCopyConfiguration() : 
    m_destinationKmsKeyIdHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_snapshotCopyConfigurationArnHasBeenSet(false),
    m_snapshotCopyConfigurationIdHasBeenSet(false),
    m_snapshotRetentionPeriod(0),
    m_snapshotRetentionPeriodHasBeenSet(false)
{
}

SnapshotCopyConfiguration::SnapshotCopyConfiguration(JsonView jsonValue) : 
    m_destinationKmsKeyIdHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_snapshotCopyConfigurationArnHasBeenSet(false),
    m_snapshotCopyConfigurationIdHasBeenSet(false),
    m_snapshotRetentionPeriod(0),
    m_snapshotRetentionPeriodHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotCopyConfiguration& SnapshotCopyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationKmsKeyId"))
  {
    m_destinationKmsKeyId = jsonValue.GetString("destinationKmsKeyId");

    m_destinationKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationRegion"))
  {
    m_destinationRegion = jsonValue.GetString("destinationRegion");

    m_destinationRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotCopyConfigurationArn"))
  {
    m_snapshotCopyConfigurationArn = jsonValue.GetString("snapshotCopyConfigurationArn");

    m_snapshotCopyConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotCopyConfigurationId"))
  {
    m_snapshotCopyConfigurationId = jsonValue.GetString("snapshotCopyConfigurationId");

    m_snapshotCopyConfigurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotRetentionPeriod"))
  {
    m_snapshotRetentionPeriod = jsonValue.GetInteger("snapshotRetentionPeriod");

    m_snapshotRetentionPeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotCopyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationKmsKeyIdHasBeenSet)
  {
   payload.WithString("destinationKmsKeyId", m_destinationKmsKeyId);

  }

  if(m_destinationRegionHasBeenSet)
  {
   payload.WithString("destinationRegion", m_destinationRegion);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_snapshotCopyConfigurationArnHasBeenSet)
  {
   payload.WithString("snapshotCopyConfigurationArn", m_snapshotCopyConfigurationArn);

  }

  if(m_snapshotCopyConfigurationIdHasBeenSet)
  {
   payload.WithString("snapshotCopyConfigurationId", m_snapshotCopyConfigurationId);

  }

  if(m_snapshotRetentionPeriodHasBeenSet)
  {
   payload.WithInteger("snapshotRetentionPeriod", m_snapshotRetentionPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
