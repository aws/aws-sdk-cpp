﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/EligibleDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

EligibleDataSource::EligibleDataSource() : 
    m_indexIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false)
{
}

EligibleDataSource::EligibleDataSource(JsonView jsonValue)
  : EligibleDataSource()
{
  *this = jsonValue;
}

EligibleDataSource& EligibleDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("indexId"))
  {
    m_indexId = jsonValue.GetString("indexId");

    m_indexIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("dataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EligibleDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("indexId", m_indexId);

  }

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("dataSourceId", m_dataSourceId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
