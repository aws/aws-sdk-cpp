/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class DocumentHashType
  {
    NOT_SET,
    Sha256,
    Sha1
  };

namespace DocumentHashTypeMapper
{
AWS_SSM_API DocumentHashType GetDocumentHashTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentHashType(DocumentHashType value);
} // namespace DocumentHashTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
