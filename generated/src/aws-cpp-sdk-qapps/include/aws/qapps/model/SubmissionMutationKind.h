/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QApps
{
namespace Model
{
  enum class SubmissionMutationKind
  {
    NOT_SET,
    edit,
    delete_,
    add
  };

namespace SubmissionMutationKindMapper
{
AWS_QAPPS_API SubmissionMutationKind GetSubmissionMutationKindForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForSubmissionMutationKind(SubmissionMutationKind value);
} // namespace SubmissionMutationKindMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
