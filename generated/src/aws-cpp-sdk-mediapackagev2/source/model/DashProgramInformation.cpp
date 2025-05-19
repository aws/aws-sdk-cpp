/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashProgramInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

DashProgramInformation::DashProgramInformation(JsonView jsonValue)
{
  *this = jsonValue;
}

DashProgramInformation& DashProgramInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Copyright"))
  {
    m_copyright = jsonValue.GetString("Copyright");
    m_copyrightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = jsonValue.GetString("LanguageCode");
    m_languageCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MoreInformationUrl"))
  {
    m_moreInformationUrl = jsonValue.GetString("MoreInformationUrl");
    m_moreInformationUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue DashProgramInformation::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_copyrightHasBeenSet)
  {
   payload.WithString("Copyright", m_copyright);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", m_languageCode);

  }

  if(m_moreInformationUrlHasBeenSet)
  {
   payload.WithString("MoreInformationUrl", m_moreInformationUrl);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
