/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

namespace Aws {
namespace VPCLattice {
namespace Model {
enum class ListenerProtocol { NOT_SET, HTTP, HTTPS, TLS_PASSTHROUGH };

namespace ListenerProtocolMapper {
AWS_VPCLATTICE_API ListenerProtocol GetListenerProtocolForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForListenerProtocol(ListenerProtocol value);
}  // namespace ListenerProtocolMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
