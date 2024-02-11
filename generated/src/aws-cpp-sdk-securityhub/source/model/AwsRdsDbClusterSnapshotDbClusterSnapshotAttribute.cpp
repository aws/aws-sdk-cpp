/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute.h>
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

AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute::AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute() : 
    m_attributeNameHasBeenSet(false),
    m_attributeValuesHasBeenSet(false)
{
}

AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute::AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute(JsonView jsonValue) : 
    m_attributeNameHasBeenSet(false),
    m_attributeValuesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute& AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeValues"))
  {
    Aws::Utils::Array<JsonView> attributeValuesJsonList = jsonValue.GetArray("AttributeValues");
    for(unsigned attributeValuesIndex = 0; attributeValuesIndex < attributeValuesJsonList.GetLength(); ++attributeValuesIndex)
    {
      m_attributeValues.push_back(attributeValuesJsonList[attributeValuesIndex].AsString());
    }
    m_attributeValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbClusterSnapshotDbClusterSnapshotAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_attributeValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeValuesJsonList(m_attributeValues.size());
   for(unsigned attributeValuesIndex = 0; attributeValuesIndex < attributeValuesJsonList.GetLength(); ++attributeValuesIndex)
   {
     attributeValuesJsonList[attributeValuesIndex].AsString(m_attributeValues[attributeValuesIndex]);
   }
   payload.WithArray("AttributeValues", std::move(attributeValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
