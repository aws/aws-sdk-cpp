/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class CredentialType
  {
    NOT_SET,
    ADMIN
  };

namespace CredentialTypeMapper
{
AWS_SSMSAP_API CredentialType GetCredentialTypeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForCredentialType(CredentialType value);
} // namespace CredentialTypeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
