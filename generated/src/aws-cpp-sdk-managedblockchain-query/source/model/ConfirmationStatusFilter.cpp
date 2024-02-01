/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ConfirmationStatusFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

ConfirmationStatusFilter::ConfirmationStatusFilter() : 
    m_includeHasBeenSet(false)
{
}

ConfirmationStatusFilter::ConfirmationStatusFilter(JsonView jsonValue) : 
    m_includeHasBeenSet(false)
{
  *this = jsonValue;
}

ConfirmationStatusFilter& ConfirmationStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("include"))
  {
    Aws::Utils::Array<JsonView> includeJsonList = jsonValue.GetArray("include");
    for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
    {
      m_include.push_back(ConfirmationStatusMapper::GetConfirmationStatusForName(includeJsonList[includeIndex].AsString()));
    }
    m_includeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfirmationStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_includeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
   for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
   {
     includeJsonList[includeIndex].AsString(ConfirmationStatusMapper::GetNameForConfirmationStatus(m_include[includeIndex]));
   }
   payload.WithArray("include", std::move(includeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
