/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/SourceConnectionDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

SourceConnectionDetail::SourceConnectionDetail() : 
    m_type(SourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_connectionParametersHasBeenSet(false),
    m_lastSyncHasBeenSet(false)
{
}

SourceConnectionDetail::SourceConnectionDetail(JsonView jsonValue) : 
    m_type(SourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_connectionParametersHasBeenSet(false),
    m_lastSyncHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConnectionDetail& SourceConnectionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionParameters"))
  {
    m_connectionParameters = jsonValue.GetObject("ConnectionParameters");

    m_connectionParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSync"))
  {
    m_lastSync = jsonValue.GetObject("LastSync");

    m_lastSyncHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConnectionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SourceTypeMapper::GetNameForSourceType(m_type));
  }

  if(m_connectionParametersHasBeenSet)
  {
   payload.WithObject("ConnectionParameters", m_connectionParameters.Jsonize());

  }

  if(m_lastSyncHasBeenSet)
  {
   payload.WithObject("LastSync", m_lastSync.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
