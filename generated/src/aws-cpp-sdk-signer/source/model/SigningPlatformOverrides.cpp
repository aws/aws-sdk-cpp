/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/SigningPlatformOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

SigningPlatformOverrides::SigningPlatformOverrides() : 
    m_signingConfigurationHasBeenSet(false),
    m_signingImageFormat(ImageFormat::NOT_SET),
    m_signingImageFormatHasBeenSet(false)
{
}

SigningPlatformOverrides::SigningPlatformOverrides(JsonView jsonValue) : 
    m_signingConfigurationHasBeenSet(false),
    m_signingImageFormat(ImageFormat::NOT_SET),
    m_signingImageFormatHasBeenSet(false)
{
  *this = jsonValue;
}

SigningPlatformOverrides& SigningPlatformOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("signingConfiguration"))
  {
    m_signingConfiguration = jsonValue.GetObject("signingConfiguration");

    m_signingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingImageFormat"))
  {
    m_signingImageFormat = ImageFormatMapper::GetImageFormatForName(jsonValue.GetString("signingImageFormat"));

    m_signingImageFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue SigningPlatformOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_signingConfigurationHasBeenSet)
  {
   payload.WithObject("signingConfiguration", m_signingConfiguration.Jsonize());

  }

  if(m_signingImageFormatHasBeenSet)
  {
   payload.WithString("signingImageFormat", ImageFormatMapper::GetNameForImageFormat(m_signingImageFormat));
  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
