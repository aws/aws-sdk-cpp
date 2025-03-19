/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/ExemptionCertificate.h>
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

ExemptionCertificate::ExemptionCertificate(JsonView jsonValue)
{
  *this = jsonValue;
}

ExemptionCertificate& ExemptionCertificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("documentFile"))
  {
    m_documentFile = HashingUtils::Base64Decode(jsonValue.GetString("documentFile"));
    m_documentFileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentName"))
  {
    m_documentName = jsonValue.GetString("documentName");
    m_documentNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ExemptionCertificate::Jsonize() const
{
  JsonValue payload;

  if(m_documentFileHasBeenSet)
  {
   payload.WithString("documentFile", HashingUtils::Base64Encode(m_documentFile));
  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("documentName", m_documentName);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
