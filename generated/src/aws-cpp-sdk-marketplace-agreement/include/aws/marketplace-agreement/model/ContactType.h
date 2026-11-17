/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
namespace Model {
enum class ContactType { NOT_SET, ACCEPTOR };

namespace ContactTypeMapper {
AWS_AGREEMENTSERVICE_API ContactType GetContactTypeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForContactType(ContactType value);
}  // namespace ContactTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
