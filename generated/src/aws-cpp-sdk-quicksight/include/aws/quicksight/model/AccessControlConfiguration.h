/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The access control settings for a knowledge base. Use this structure to
 * enable or disable document-level access control lists (ACLs) that filter query
 * results based on the permissions from the source data connector.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AccessControlConfiguration">AWS
 * API Reference</a></p>
 */
class AccessControlConfiguration {
 public:
  AWS_QUICKSIGHT_API AccessControlConfiguration() = default;
  AWS_QUICKSIGHT_API AccessControlConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AccessControlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether ACLs are enabled for the knowledge base.</p>
   */
  inline bool GetIsACLEnabled() const { return m_isACLEnabled; }
  inline bool IsACLEnabledHasBeenSet() const { return m_isACLEnabledHasBeenSet; }
  inline void SetIsACLEnabled(bool value) {
    m_isACLEnabledHasBeenSet = true;
    m_isACLEnabled = value;
  }
  inline AccessControlConfiguration& WithIsACLEnabled(bool value) {
    SetIsACLEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_isACLEnabled{false};
  bool m_isACLEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
