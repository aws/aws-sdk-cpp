/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails::AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails() : 
    m_dataVolumeKMSKeyIdHasBeenSet(false)
{
}

AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails::AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails(JsonView jsonValue) : 
    m_dataVolumeKMSKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails& AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataVolumeKMSKeyId"))
  {
    m_dataVolumeKMSKeyId = jsonValue.GetString("DataVolumeKMSKeyId");

    m_dataVolumeKMSKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsMskClusterClusterInfoEncryptionInfoEncryptionAtRestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dataVolumeKMSKeyIdHasBeenSet)
  {
   payload.WithString("DataVolumeKMSKeyId", m_dataVolumeKMSKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
