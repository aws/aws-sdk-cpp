/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ContentFeedbackData.h>
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

ContentFeedbackData::ContentFeedbackData() : 
    m_generativeContentFeedbackDataHasBeenSet(false)
{
}

ContentFeedbackData::ContentFeedbackData(JsonView jsonValue) : 
    m_generativeContentFeedbackDataHasBeenSet(false)
{
  *this = jsonValue;
}

ContentFeedbackData& ContentFeedbackData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("generativeContentFeedbackData"))
  {
    m_generativeContentFeedbackData = jsonValue.GetObject("generativeContentFeedbackData");

    m_generativeContentFeedbackDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentFeedbackData::Jsonize() const
{
  JsonValue payload;

  if(m_generativeContentFeedbackDataHasBeenSet)
  {
   payload.WithObject("generativeContentFeedbackData", m_generativeContentFeedbackData.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
