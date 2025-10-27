/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>

namespace Aws {
namespace MedicalImaging {
namespace Model {
enum class DatastoreStatus { NOT_SET, CREATING, CREATE_FAILED, ACTIVE, DELETING, DELETED };

namespace DatastoreStatusMapper {
AWS_MEDICALIMAGING_API DatastoreStatus GetDatastoreStatusForName(const Aws::String& name);

AWS_MEDICALIMAGING_API Aws::String GetNameForDatastoreStatus(DatastoreStatus value);
}  // namespace DatastoreStatusMapper
}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
