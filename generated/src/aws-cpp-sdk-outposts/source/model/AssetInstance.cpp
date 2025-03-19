/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/AssetInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

AssetInstance::AssetInstance(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetInstance& AssetInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssetId"))
  {
    m_assetId = jsonValue.GetString("AssetId");
    m_assetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsServiceName"))
  {
    m_awsServiceName = AWSServiceNameMapper::GetAWSServiceNameForName(jsonValue.GetString("AwsServiceName"));
    m_awsServiceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetInstance::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("AssetId", m_assetId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_awsServiceNameHasBeenSet)
  {
   payload.WithString("AwsServiceName", AWSServiceNameMapper::GetNameForAWSServiceName(m_awsServiceName));
  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
