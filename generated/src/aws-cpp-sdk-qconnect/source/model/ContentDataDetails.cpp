/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ContentDataDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

ContentDataDetails::ContentDataDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentDataDetails& ContentDataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textData"))
  {
    m_textData = jsonValue.GetObject("textData");
    m_textDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rankingData"))
  {
    m_rankingData = jsonValue.GetObject("rankingData");
    m_rankingDataHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentDataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_textDataHasBeenSet)
  {
   payload.WithObject("textData", m_textData.Jsonize());

  }

  if(m_rankingDataHasBeenSet)
  {
   payload.WithObject("rankingData", m_rankingData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
