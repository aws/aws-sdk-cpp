/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/GenerativeDataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

DataDetails::DataDetails() : 
    m_contentDataHasBeenSet(false),
    m_generativeDataHasBeenSet(false),
    m_sourceContentDataHasBeenSet(false)
{
}

DataDetails::DataDetails(JsonView jsonValue) : 
    m_contentDataHasBeenSet(false),
    m_generativeDataHasBeenSet(false),
    m_sourceContentDataHasBeenSet(false)
{
  *this = jsonValue;
}

const GenerativeDataDetails& DataDetails::GetGenerativeData() const{ return *m_generativeData; }
bool DataDetails::GenerativeDataHasBeenSet() const { return m_generativeDataHasBeenSet; }
void DataDetails::SetGenerativeData(const GenerativeDataDetails& value) { m_generativeDataHasBeenSet = true; m_generativeData = Aws::MakeShared<GenerativeDataDetails>("DataDetails", value); }
void DataDetails::SetGenerativeData(GenerativeDataDetails&& value) { m_generativeDataHasBeenSet = true; m_generativeData = Aws::MakeShared<GenerativeDataDetails>("DataDetails", std::move(value)); }
DataDetails& DataDetails::WithGenerativeData(const GenerativeDataDetails& value) { SetGenerativeData(value); return *this;}
DataDetails& DataDetails::WithGenerativeData(GenerativeDataDetails&& value) { SetGenerativeData(std::move(value)); return *this;}

DataDetails& DataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contentData"))
  {
    m_contentData = jsonValue.GetObject("contentData");

    m_contentDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generativeData"))
  {
    m_generativeData = Aws::MakeShared<GenerativeDataDetails>("DataDetails", jsonValue.GetObject("generativeData"));

    m_generativeDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceContentData"))
  {
    m_sourceContentData = jsonValue.GetObject("sourceContentData");

    m_sourceContentDataHasBeenSet = true;
  }

  return *this;
}

JsonValue DataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_contentDataHasBeenSet)
  {
   payload.WithObject("contentData", m_contentData.Jsonize());

  }

  if(m_generativeDataHasBeenSet)
  {
   payload.WithObject("generativeData", m_generativeData->Jsonize());

  }

  if(m_sourceContentDataHasBeenSet)
  {
   payload.WithObject("sourceContentData", m_sourceContentData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
