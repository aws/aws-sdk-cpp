/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>

namespace Aws {
namespace RedshiftDataAPIService {
namespace Model {
enum class SessionStatusString { NOT_SET, AVAILABLE, BUSY, CLOSED };

namespace SessionStatusStringMapper {
AWS_REDSHIFTDATAAPISERVICE_API SessionStatusString GetSessionStatusStringForName(const Aws::String& name);

AWS_REDSHIFTDATAAPISERVICE_API Aws::String GetNameForSessionStatusString(SessionStatusString value);
}  // namespace SessionStatusStringMapper
}  // namespace Model
}  // namespace RedshiftDataAPIService
}  // namespace Aws
