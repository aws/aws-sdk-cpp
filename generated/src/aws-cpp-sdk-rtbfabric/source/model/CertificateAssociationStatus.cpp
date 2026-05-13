/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/CertificateAssociationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace CertificateAssociationStatusMapper {

static const int PENDING_ASSOCIATION_HASH = HashingUtils::HashString("PENDING_ASSOCIATION");
static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
static const int PENDING_DISASSOCIATION_HASH = HashingUtils::HashString("PENDING_DISASSOCIATION");
static const int DISASSOCIATED_HASH = HashingUtils::HashString("DISASSOCIATED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

CertificateAssociationStatus GetCertificateAssociationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_ASSOCIATION_HASH) {
    return CertificateAssociationStatus::PENDING_ASSOCIATION;
  } else if (hashCode == ASSOCIATED_HASH) {
    return CertificateAssociationStatus::ASSOCIATED;
  } else if (hashCode == PENDING_DISASSOCIATION_HASH) {
    return CertificateAssociationStatus::PENDING_DISASSOCIATION;
  } else if (hashCode == DISASSOCIATED_HASH) {
    return CertificateAssociationStatus::DISASSOCIATED;
  } else if (hashCode == FAILED_HASH) {
    return CertificateAssociationStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CertificateAssociationStatus>(hashCode);
  }

  return CertificateAssociationStatus::NOT_SET;
}

Aws::String GetNameForCertificateAssociationStatus(CertificateAssociationStatus enumValue) {
  switch (enumValue) {
    case CertificateAssociationStatus::NOT_SET:
      return {};
    case CertificateAssociationStatus::PENDING_ASSOCIATION:
      return "PENDING_ASSOCIATION";
    case CertificateAssociationStatus::ASSOCIATED:
      return "ASSOCIATED";
    case CertificateAssociationStatus::PENDING_DISASSOCIATION:
      return "PENDING_DISASSOCIATION";
    case CertificateAssociationStatus::DISASSOCIATED:
      return "DISASSOCIATED";
    case CertificateAssociationStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CertificateAssociationStatusMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
