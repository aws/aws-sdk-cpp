/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/DataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

DataSummary::DataSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSummary& DataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reference"))
  {
    m_reference = jsonValue.GetObject("reference");
    m_referenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("details"))
  {
    m_details = Aws::MakeShared<DataDetails>("DataSummary", jsonValue.GetObject("details"));
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_referenceHasBeenSet)
  {
   payload.WithObject("reference", m_reference.Jsonize());

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("details", m_details->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
