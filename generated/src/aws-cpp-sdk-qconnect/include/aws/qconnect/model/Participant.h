/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class Participant { NOT_SET, CUSTOMER, AGENT, BOT };

namespace ParticipantMapper {
AWS_QCONNECT_API Participant GetParticipantForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForParticipant(Participant value);
}  // namespace ParticipantMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
