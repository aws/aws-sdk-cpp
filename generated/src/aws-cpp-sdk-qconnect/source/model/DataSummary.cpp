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

DataSummary::DataSummary() : 
    m_detailsHasBeenSet(false),
    m_referenceHasBeenSet(false)
{
}

DataSummary::DataSummary(JsonView jsonValue) : 
    m_detailsHasBeenSet(false),
    m_referenceHasBeenSet(false)
{
  *this = jsonValue;
}

const DataDetails& DataSummary::GetDetails() const{ return *m_details; }
bool DataSummary::DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
void DataSummary::SetDetails(const DataDetails& value) { m_detailsHasBeenSet = true; m_details = Aws::MakeShared<DataDetails>("DataSummary", value); }
void DataSummary::SetDetails(DataDetails&& value) { m_detailsHasBeenSet = true; m_details = Aws::MakeShared<DataDetails>("DataSummary", std::move(value)); }
DataSummary& DataSummary::WithDetails(const DataDetails& value) { SetDetails(value); return *this;}
DataSummary& DataSummary::WithDetails(DataDetails&& value) { SetDetails(std::move(value)); return *this;}

DataSummary& DataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("details"))
  {
    m_details = Aws::MakeShared<DataDetails>("DataSummary", jsonValue.GetObject("details"));

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reference"))
  {
    m_reference = jsonValue.GetObject("reference");

    m_referenceHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_detailsHasBeenSet)
  {
   payload.WithObject("details", m_details->Jsonize());

  }

  if(m_referenceHasBeenSet)
  {
   payload.WithObject("reference", m_reference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
