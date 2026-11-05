/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <smithy/client/schema/Schema.h>

#include <memory>

namespace smithy {
namespace schema {
namespace fuzz {

const Aws::Vector<std::shared_ptr<const Schema>>& FuzzSchemas();

std::shared_ptr<const Schema> FindFuzzSchema(const Aws::String& id);

std::shared_ptr<const Schema> DocumentHolderSchema();

}  // namespace fuzz
}  // namespace schema
}  // namespace smithy
