/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterMetadata.h>
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

ClusterMetadata::ClusterMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterMetadata& ClusterMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EksRoleAccessEntries"))
  {
    Aws::Utils::Array<JsonView> eksRoleAccessEntriesJsonList = jsonValue.GetArray("EksRoleAccessEntries");
    for(unsigned eksRoleAccessEntriesIndex = 0; eksRoleAccessEntriesIndex < eksRoleAccessEntriesJsonList.GetLength(); ++eksRoleAccessEntriesIndex)
    {
      m_eksRoleAccessEntries.push_back(eksRoleAccessEntriesJsonList[eksRoleAccessEntriesIndex].AsString());
    }
    m_eksRoleAccessEntriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SlrAccessEntry"))
  {
    m_slrAccessEntry = jsonValue.GetString("SlrAccessEntry");
    m_slrAccessEntryHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  if(m_eksRoleAccessEntriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eksRoleAccessEntriesJsonList(m_eksRoleAccessEntries.size());
   for(unsigned eksRoleAccessEntriesIndex = 0; eksRoleAccessEntriesIndex < eksRoleAccessEntriesJsonList.GetLength(); ++eksRoleAccessEntriesIndex)
   {
     eksRoleAccessEntriesJsonList[eksRoleAccessEntriesIndex].AsString(m_eksRoleAccessEntries[eksRoleAccessEntriesIndex]);
   }
   payload.WithArray("EksRoleAccessEntries", std::move(eksRoleAccessEntriesJsonList));

  }

  if(m_slrAccessEntryHasBeenSet)
  {
   payload.WithString("SlrAccessEntry", m_slrAccessEntry);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
