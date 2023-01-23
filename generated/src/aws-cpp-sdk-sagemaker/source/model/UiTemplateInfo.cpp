/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UiTemplateInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

UiTemplateInfo::UiTemplateInfo() : 
    m_urlHasBeenSet(false),
    m_contentSha256HasBeenSet(false)
{
}

UiTemplateInfo::UiTemplateInfo(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_contentSha256HasBeenSet(false)
{
  *this = jsonValue;
}

UiTemplateInfo& UiTemplateInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentSha256"))
  {
    m_contentSha256 = jsonValue.GetString("ContentSha256");

    m_contentSha256HasBeenSet = true;
  }

  return *this;
}

JsonValue UiTemplateInfo::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_contentSha256HasBeenSet)
  {
   payload.WithString("ContentSha256", m_contentSha256);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
