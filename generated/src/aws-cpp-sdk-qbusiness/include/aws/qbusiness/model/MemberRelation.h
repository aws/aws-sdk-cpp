/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class MemberRelation { NOT_SET, AND, OR };

namespace MemberRelationMapper {
AWS_QBUSINESS_API MemberRelation GetMemberRelationForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForMemberRelation(MemberRelation value);
}  // namespace MemberRelationMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
