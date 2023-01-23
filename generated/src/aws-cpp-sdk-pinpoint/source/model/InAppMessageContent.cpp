/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/InAppMessageContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

InAppMessageContent::InAppMessageContent() : 
    m_backgroundColorHasBeenSet(false),
    m_bodyConfigHasBeenSet(false),
    m_headerConfigHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_primaryBtnHasBeenSet(false),
    m_secondaryBtnHasBeenSet(false)
{
}

InAppMessageContent::InAppMessageContent(JsonView jsonValue) : 
    m_backgroundColorHasBeenSet(false),
    m_bodyConfigHasBeenSet(false),
    m_headerConfigHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_primaryBtnHasBeenSet(false),
    m_secondaryBtnHasBeenSet(false)
{
  *this = jsonValue;
}

InAppMessageContent& InAppMessageContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackgroundColor"))
  {
    m_backgroundColor = jsonValue.GetString("BackgroundColor");

    m_backgroundColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BodyConfig"))
  {
    m_bodyConfig = jsonValue.GetObject("BodyConfig");

    m_bodyConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeaderConfig"))
  {
    m_headerConfig = jsonValue.GetObject("HeaderConfig");

    m_headerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageUrl"))
  {
    m_imageUrl = jsonValue.GetString("ImageUrl");

    m_imageUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryBtn"))
  {
    m_primaryBtn = jsonValue.GetObject("PrimaryBtn");

    m_primaryBtnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryBtn"))
  {
    m_secondaryBtn = jsonValue.GetObject("SecondaryBtn");

    m_secondaryBtnHasBeenSet = true;
  }

  return *this;
}

JsonValue InAppMessageContent::Jsonize() const
{
  JsonValue payload;

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("BackgroundColor", m_backgroundColor);

  }

  if(m_bodyConfigHasBeenSet)
  {
   payload.WithObject("BodyConfig", m_bodyConfig.Jsonize());

  }

  if(m_headerConfigHasBeenSet)
  {
   payload.WithObject("HeaderConfig", m_headerConfig.Jsonize());

  }

  if(m_imageUrlHasBeenSet)
  {
   payload.WithString("ImageUrl", m_imageUrl);

  }

  if(m_primaryBtnHasBeenSet)
  {
   payload.WithObject("PrimaryBtn", m_primaryBtn.Jsonize());

  }

  if(m_secondaryBtnHasBeenSet)
  {
   payload.WithObject("SecondaryBtn", m_secondaryBtn.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
