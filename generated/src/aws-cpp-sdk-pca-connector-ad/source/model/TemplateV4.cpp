/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/TemplateV4.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

TemplateV4::TemplateV4() : 
    m_certificateValidityHasBeenSet(false),
    m_enrollmentFlagsHasBeenSet(false),
    m_extensionsHasBeenSet(false),
    m_generalFlagsHasBeenSet(false),
    m_hashAlgorithm(HashAlgorithm::NOT_SET),
    m_hashAlgorithmHasBeenSet(false),
    m_privateKeyAttributesHasBeenSet(false),
    m_privateKeyFlagsHasBeenSet(false),
    m_subjectNameFlagsHasBeenSet(false),
    m_supersededTemplatesHasBeenSet(false)
{
}

TemplateV4::TemplateV4(JsonView jsonValue) : 
    m_certificateValidityHasBeenSet(false),
    m_enrollmentFlagsHasBeenSet(false),
    m_extensionsHasBeenSet(false),
    m_generalFlagsHasBeenSet(false),
    m_hashAlgorithm(HashAlgorithm::NOT_SET),
    m_hashAlgorithmHasBeenSet(false),
    m_privateKeyAttributesHasBeenSet(false),
    m_privateKeyFlagsHasBeenSet(false),
    m_subjectNameFlagsHasBeenSet(false),
    m_supersededTemplatesHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateV4& TemplateV4::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateValidity"))
  {
    m_certificateValidity = jsonValue.GetObject("CertificateValidity");

    m_certificateValidityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnrollmentFlags"))
  {
    m_enrollmentFlags = jsonValue.GetObject("EnrollmentFlags");

    m_enrollmentFlagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Extensions"))
  {
    m_extensions = jsonValue.GetObject("Extensions");

    m_extensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeneralFlags"))
  {
    m_generalFlags = jsonValue.GetObject("GeneralFlags");

    m_generalFlagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HashAlgorithm"))
  {
    m_hashAlgorithm = HashAlgorithmMapper::GetHashAlgorithmForName(jsonValue.GetString("HashAlgorithm"));

    m_hashAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateKeyAttributes"))
  {
    m_privateKeyAttributes = jsonValue.GetObject("PrivateKeyAttributes");

    m_privateKeyAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateKeyFlags"))
  {
    m_privateKeyFlags = jsonValue.GetObject("PrivateKeyFlags");

    m_privateKeyFlagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubjectNameFlags"))
  {
    m_subjectNameFlags = jsonValue.GetObject("SubjectNameFlags");

    m_subjectNameFlagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupersededTemplates"))
  {
    Aws::Utils::Array<JsonView> supersededTemplatesJsonList = jsonValue.GetArray("SupersededTemplates");
    for(unsigned supersededTemplatesIndex = 0; supersededTemplatesIndex < supersededTemplatesJsonList.GetLength(); ++supersededTemplatesIndex)
    {
      m_supersededTemplates.push_back(supersededTemplatesJsonList[supersededTemplatesIndex].AsString());
    }
    m_supersededTemplatesHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateV4::Jsonize() const
{
  JsonValue payload;

  if(m_certificateValidityHasBeenSet)
  {
   payload.WithObject("CertificateValidity", m_certificateValidity.Jsonize());

  }

  if(m_enrollmentFlagsHasBeenSet)
  {
   payload.WithObject("EnrollmentFlags", m_enrollmentFlags.Jsonize());

  }

  if(m_extensionsHasBeenSet)
  {
   payload.WithObject("Extensions", m_extensions.Jsonize());

  }

  if(m_generalFlagsHasBeenSet)
  {
   payload.WithObject("GeneralFlags", m_generalFlags.Jsonize());

  }

  if(m_hashAlgorithmHasBeenSet)
  {
   payload.WithString("HashAlgorithm", HashAlgorithmMapper::GetNameForHashAlgorithm(m_hashAlgorithm));
  }

  if(m_privateKeyAttributesHasBeenSet)
  {
   payload.WithObject("PrivateKeyAttributes", m_privateKeyAttributes.Jsonize());

  }

  if(m_privateKeyFlagsHasBeenSet)
  {
   payload.WithObject("PrivateKeyFlags", m_privateKeyFlags.Jsonize());

  }

  if(m_subjectNameFlagsHasBeenSet)
  {
   payload.WithObject("SubjectNameFlags", m_subjectNameFlags.Jsonize());

  }

  if(m_supersededTemplatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supersededTemplatesJsonList(m_supersededTemplates.size());
   for(unsigned supersededTemplatesIndex = 0; supersededTemplatesIndex < supersededTemplatesJsonList.GetLength(); ++supersededTemplatesIndex)
   {
     supersededTemplatesJsonList[supersededTemplatesIndex].AsString(m_supersededTemplates[supersededTemplatesIndex]);
   }
   payload.WithArray("SupersededTemplates", std::move(supersededTemplatesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
