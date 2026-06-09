/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Metadata for a service input sources updated event.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceInputSourcesUpdatedMetadata">AWS
 * API Reference</a></p>
 */
class ServiceInputSourcesUpdatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API ServiceInputSourcesUpdatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API ServiceInputSourcesUpdatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceInputSourcesUpdatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
