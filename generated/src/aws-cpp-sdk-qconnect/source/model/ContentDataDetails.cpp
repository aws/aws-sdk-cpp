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

ContentDataDetails::ContentDataDetails() : 
    m_rankingDataHasBeenSet(false),
    m_textDataHasBeenSet(false)
{
}

ContentDataDetails::ContentDataDetails(JsonView jsonValue) : 
    m_rankingDataHasBeenSet(false),
    m_textDataHasBeenSet(false)
{
  *this = jsonValue;
}

ContentDataDetails& ContentDataDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rankingData"))
  {
    m_rankingData = jsonValue.GetObject("rankingData");

    m_rankingDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("textData"))
  {
    m_textData = jsonValue.GetObject("textData");

    m_textDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentDataDetails::Jsonize() const
{
  JsonValue payload;

  if(m_rankingDataHasBeenSet)
  {
   payload.WithObject("rankingData", m_rankingData.Jsonize());

  }

  if(m_textDataHasBeenSet)
  {
   payload.WithObject("textData", m_textData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
