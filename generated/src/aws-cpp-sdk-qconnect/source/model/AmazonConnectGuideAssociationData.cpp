/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AmazonConnectGuideAssociationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

AmazonConnectGuideAssociationData::AmazonConnectGuideAssociationData(JsonView jsonValue)
{
  *this = jsonValue;
}

AmazonConnectGuideAssociationData& AmazonConnectGuideAssociationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowId"))
  {
    m_flowId = jsonValue.GetString("flowId");
    m_flowIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonConnectGuideAssociationData::Jsonize() const
{
  JsonValue payload;

  if(m_flowIdHasBeenSet)
  {
   payload.WithString("flowId", m_flowId);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
