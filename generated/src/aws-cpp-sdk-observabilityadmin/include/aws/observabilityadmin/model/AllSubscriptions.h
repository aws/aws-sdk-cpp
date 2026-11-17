/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Selects every Azure subscription that Azure role-based access control (Azure
 * RBAC) allows the connector to read. Subscriptions that the connector can read
 * later are included automatically.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AllSubscriptions">AWS
 * API Reference</a></p>
 */
class AllSubscriptions {
 public:
  AWS_OBSERVABILITYADMIN_API AllSubscriptions() = default;
  AWS_OBSERVABILITYADMIN_API AllSubscriptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AllSubscriptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
