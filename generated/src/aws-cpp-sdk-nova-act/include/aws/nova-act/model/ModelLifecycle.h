/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ModelStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>Lifecycle information for an AI model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ModelLifecycle">AWS
 * API Reference</a></p>
 */
class ModelLifecycle {
 public:
  AWS_NOVAACT_API ModelLifecycle() = default;
  AWS_NOVAACT_API ModelLifecycle(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API ModelLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current lifecycle status of the model.</p>
   */
  inline ModelStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ModelStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ModelLifecycle& WithStatus(ModelStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  ModelStatus m_status{ModelStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
