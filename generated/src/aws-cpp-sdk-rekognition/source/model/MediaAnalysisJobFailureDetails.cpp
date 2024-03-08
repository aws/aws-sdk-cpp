/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/MediaAnalysisJobFailureDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

MediaAnalysisJobFailureDetails::MediaAnalysisJobFailureDetails() : 
    m_code(MediaAnalysisJobFailureCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

MediaAnalysisJobFailureDetails::MediaAnalysisJobFailureDetails(JsonView jsonValue) : 
    m_code(MediaAnalysisJobFailureCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

MediaAnalysisJobFailureDetails& MediaAnalysisJobFailureDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = MediaAnalysisJobFailureCodeMapper::GetMediaAnalysisJobFailureCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaAnalysisJobFailureDetails::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", MediaAnalysisJobFailureCodeMapper::GetNameForMediaAnalysisJobFailureCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
