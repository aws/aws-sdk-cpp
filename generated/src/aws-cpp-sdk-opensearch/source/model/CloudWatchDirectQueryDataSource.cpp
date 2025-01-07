﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CloudWatchDirectQueryDataSource.h>
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

CloudWatchDirectQueryDataSource::CloudWatchDirectQueryDataSource() : 
    m_roleArnHasBeenSet(false)
{
}

CloudWatchDirectQueryDataSource::CloudWatchDirectQueryDataSource(JsonView jsonValue)
  : CloudWatchDirectQueryDataSource()
{
  *this = jsonValue;
}

CloudWatchDirectQueryDataSource& CloudWatchDirectQueryDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchDirectQueryDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
