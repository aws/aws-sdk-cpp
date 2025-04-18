/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/DataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/GenerativeDataDetails.h>
#include <aws/qconnect/model/GenerativeChunkDataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

DataDetails::DataDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

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
  if(jsonValue.ValueExists("intentDetectedData"))
  {
    m_intentDetectedData = jsonValue.GetObject("intentDetectedData");
    m_intentDetectedDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceContentData"))
  {
    m_sourceContentData = jsonValue.GetObject("sourceContentData");
    m_sourceContentDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("generativeChunkData"))
  {
    m_generativeChunkData = Aws::MakeShared<GenerativeChunkDataDetails>("DataDetails", jsonValue.GetObject("generativeChunkData"));
    m_generativeChunkDataHasBeenSet = true;
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

  if(m_intentDetectedDataHasBeenSet)
  {
   payload.WithObject("intentDetectedData", m_intentDetectedData.Jsonize());

  }

  if(m_sourceContentDataHasBeenSet)
  {
   payload.WithObject("sourceContentData", m_sourceContentData.Jsonize());

  }

  if(m_generativeChunkDataHasBeenSet)
  {
   payload.WithObject("generativeChunkData", m_generativeChunkData->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
