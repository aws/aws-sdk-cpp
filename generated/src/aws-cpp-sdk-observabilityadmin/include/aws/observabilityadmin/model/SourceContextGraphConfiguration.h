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
 * <p>Configuration that enables centralization of the context graph for the
 * selected sources. Including this configuration in a rule's source opts the rule
 * into centralizing the context graph for the selected sources.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/SourceContextGraphConfiguration">AWS
 * API Reference</a></p>
 */
class SourceContextGraphConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API SourceContextGraphConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API SourceContextGraphConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API SourceContextGraphConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
