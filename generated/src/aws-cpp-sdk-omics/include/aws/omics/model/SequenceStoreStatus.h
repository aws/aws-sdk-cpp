/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class SequenceStoreStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    FAILED
  };

namespace SequenceStoreStatusMapper
{
AWS_OMICS_API SequenceStoreStatus GetSequenceStoreStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForSequenceStoreStatus(SequenceStoreStatus value);
} // namespace SequenceStoreStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
