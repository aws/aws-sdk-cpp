/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/EnrollmentFlagsV3.h>
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

EnrollmentFlagsV3::EnrollmentFlagsV3() : 
    m_enableKeyReuseOnNtTokenKeysetStorageFull(false),
    m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet(false),
    m_includeSymmetricAlgorithms(false),
    m_includeSymmetricAlgorithmsHasBeenSet(false),
    m_noSecurityExtension(false),
    m_noSecurityExtensionHasBeenSet(false),
    m_removeInvalidCertificateFromPersonalStore(false),
    m_removeInvalidCertificateFromPersonalStoreHasBeenSet(false),
    m_userInteractionRequired(false),
    m_userInteractionRequiredHasBeenSet(false)
{
}

EnrollmentFlagsV3::EnrollmentFlagsV3(JsonView jsonValue) : 
    m_enableKeyReuseOnNtTokenKeysetStorageFull(false),
    m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet(false),
    m_includeSymmetricAlgorithms(false),
    m_includeSymmetricAlgorithmsHasBeenSet(false),
    m_noSecurityExtension(false),
    m_noSecurityExtensionHasBeenSet(false),
    m_removeInvalidCertificateFromPersonalStore(false),
    m_removeInvalidCertificateFromPersonalStoreHasBeenSet(false),
    m_userInteractionRequired(false),
    m_userInteractionRequiredHasBeenSet(false)
{
  *this = jsonValue;
}

EnrollmentFlagsV3& EnrollmentFlagsV3::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableKeyReuseOnNtTokenKeysetStorageFull"))
  {
    m_enableKeyReuseOnNtTokenKeysetStorageFull = jsonValue.GetBool("EnableKeyReuseOnNtTokenKeysetStorageFull");

    m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeSymmetricAlgorithms"))
  {
    m_includeSymmetricAlgorithms = jsonValue.GetBool("IncludeSymmetricAlgorithms");

    m_includeSymmetricAlgorithmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoSecurityExtension"))
  {
    m_noSecurityExtension = jsonValue.GetBool("NoSecurityExtension");

    m_noSecurityExtensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveInvalidCertificateFromPersonalStore"))
  {
    m_removeInvalidCertificateFromPersonalStore = jsonValue.GetBool("RemoveInvalidCertificateFromPersonalStore");

    m_removeInvalidCertificateFromPersonalStoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserInteractionRequired"))
  {
    m_userInteractionRequired = jsonValue.GetBool("UserInteractionRequired");

    m_userInteractionRequiredHasBeenSet = true;
  }

  return *this;
}

JsonValue EnrollmentFlagsV3::Jsonize() const
{
  JsonValue payload;

  if(m_enableKeyReuseOnNtTokenKeysetStorageFullHasBeenSet)
  {
   payload.WithBool("EnableKeyReuseOnNtTokenKeysetStorageFull", m_enableKeyReuseOnNtTokenKeysetStorageFull);

  }

  if(m_includeSymmetricAlgorithmsHasBeenSet)
  {
   payload.WithBool("IncludeSymmetricAlgorithms", m_includeSymmetricAlgorithms);

  }

  if(m_noSecurityExtensionHasBeenSet)
  {
   payload.WithBool("NoSecurityExtension", m_noSecurityExtension);

  }

  if(m_removeInvalidCertificateFromPersonalStoreHasBeenSet)
  {
   payload.WithBool("RemoveInvalidCertificateFromPersonalStore", m_removeInvalidCertificateFromPersonalStore);

  }

  if(m_userInteractionRequiredHasBeenSet)
  {
   payload.WithBool("UserInteractionRequired", m_userInteractionRequired);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
