/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class AssociationType
  {
    NOT_SET,
    KNOWLEDGE_BASE
  };

namespace AssociationTypeMapper
{
AWS_QCONNECT_API AssociationType GetAssociationTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForAssociationType(AssociationType value);
} // namespace AssociationTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
