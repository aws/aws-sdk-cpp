/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/TaxRegistrationDocFile.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

TaxRegistrationDocFile::TaxRegistrationDocFile(JsonView jsonValue)
{
  *this = jsonValue;
}

TaxRegistrationDocFile& TaxRegistrationDocFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileContent"))
  {
    m_fileContent = HashingUtils::Base64Decode(jsonValue.GetString("fileContent"));
    m_fileContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");
    m_fileNameHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxRegistrationDocFile::Jsonize() const
{
  JsonValue payload;

  if(m_fileContentHasBeenSet)
  {
   payload.WithString("fileContent", HashingUtils::Base64Encode(m_fileContent));
  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
