/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DirectQueryDataSourceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

DirectQueryDataSourceType::DirectQueryDataSourceType(JsonView jsonValue)
{
  *this = jsonValue;
}

DirectQueryDataSourceType& DirectQueryDataSourceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLog"))
  {
    m_cloudWatchLog = jsonValue.GetObject("CloudWatchLog");
    m_cloudWatchLogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityLake"))
  {
    m_securityLake = jsonValue.GetObject("SecurityLake");
    m_securityLakeHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectQueryDataSourceType::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogHasBeenSet)
  {
   payload.WithObject("CloudWatchLog", m_cloudWatchLog.Jsonize());

  }

  if(m_securityLakeHasBeenSet)
  {
   payload.WithObject("SecurityLake", m_securityLake.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
