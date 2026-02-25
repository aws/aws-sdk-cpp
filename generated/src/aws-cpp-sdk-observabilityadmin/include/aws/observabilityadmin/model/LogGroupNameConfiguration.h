/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

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
 * <p>Configuration that specifies a naming pattern for destination log groups
 * created during centralization. The pattern supports static text and dynamic
 * variables that are replaced with source attributes when log groups are
 * created.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/LogGroupNameConfiguration">AWS
 * API Reference</a></p>
 */
class LogGroupNameConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API LogGroupNameConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API LogGroupNameConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API LogGroupNameConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pattern used to generate destination log group names during
   * centralization. The pattern can contain static text and dynamic variables that
   * are replaced with source attributes. If a variable cannot be resolved, it
   * inherits the value from its parent variable in the hierarchy. The pattern must
   * be between 1 and 512 characters.</p> <p>Supported variables:</p> <ul> <li> <p>
   * <b>${source.logGroup}</b> — The original log group name from the source
   * account.</p> </li> <li> <p> <b>${source.accountId}</b> — The AWS account ID
   * where the log originated.</p> </li> <li> <p> <b>${source.region}</b> — The AWS
   * Region where the log originated.</p> </li> <li> <p> <b>${source.org.id}</b> —
   * The AWS Organization ID of the source account.</p> </li> <li> <p>
   * <b>${source.org.ouId}</b> — The organizational unit ID of the source
   * account.</p> </li> <li> <p> <b>${source.org.rootId}</b> — The organization Root
   * ID.</p> </li> <li> <p> <b>${source.org.path}</b> — The organizational path from
   * account to root.</p> </li> </ul>
   */
  inline const Aws::String& GetLogGroupNamePattern() const { return m_logGroupNamePattern; }
  inline bool LogGroupNamePatternHasBeenSet() const { return m_logGroupNamePatternHasBeenSet; }
  template <typename LogGroupNamePatternT = Aws::String>
  void SetLogGroupNamePattern(LogGroupNamePatternT&& value) {
    m_logGroupNamePatternHasBeenSet = true;
    m_logGroupNamePattern = std::forward<LogGroupNamePatternT>(value);
  }
  template <typename LogGroupNamePatternT = Aws::String>
  LogGroupNameConfiguration& WithLogGroupNamePattern(LogGroupNamePatternT&& value) {
    SetLogGroupNamePattern(std::forward<LogGroupNamePatternT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupNamePattern;
  bool m_logGroupNamePatternHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
