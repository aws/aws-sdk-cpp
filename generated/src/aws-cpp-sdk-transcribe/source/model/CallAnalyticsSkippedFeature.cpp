/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CallAnalyticsSkippedFeature.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

CallAnalyticsSkippedFeature::CallAnalyticsSkippedFeature(JsonView jsonValue)
{
  *this = jsonValue;
}

CallAnalyticsSkippedFeature& CallAnalyticsSkippedFeature::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Feature"))
  {
    m_feature = CallAnalyticsFeatureMapper::GetCallAnalyticsFeatureForName(jsonValue.GetString("Feature"));
    m_featureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReasonCode"))
  {
    m_reasonCode = CallAnalyticsSkippedReasonCodeMapper::GetCallAnalyticsSkippedReasonCodeForName(jsonValue.GetString("ReasonCode"));
    m_reasonCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue CallAnalyticsSkippedFeature::Jsonize() const
{
  JsonValue payload;

  if(m_featureHasBeenSet)
  {
   payload.WithString("Feature", CallAnalyticsFeatureMapper::GetNameForCallAnalyticsFeature(m_feature));
  }

  if(m_reasonCodeHasBeenSet)
  {
   payload.WithString("ReasonCode", CallAnalyticsSkippedReasonCodeMapper::GetNameForCallAnalyticsSkippedReasonCode(m_reasonCode));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
