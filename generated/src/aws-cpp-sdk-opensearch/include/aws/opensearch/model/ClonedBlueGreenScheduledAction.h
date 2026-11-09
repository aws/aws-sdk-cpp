/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ClonedBlueGreenScheduledActionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>An action that the service takes automatically at a scheduled time during a
 * cloned blue/green upgrade.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ClonedBlueGreenScheduledAction">AWS
 * API Reference</a></p>
 */
class ClonedBlueGreenScheduledAction {
 public:
  AWS_OPENSEARCHSERVICE_API ClonedBlueGreenScheduledAction() = default;
  AWS_OPENSEARCHSERVICE_API ClonedBlueGreenScheduledAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API ClonedBlueGreenScheduledAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The action that the service takes.</p>
   */
  inline ClonedBlueGreenScheduledActionType GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ClonedBlueGreenScheduledActionType value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ClonedBlueGreenScheduledAction& WithAction(ClonedBlueGreenScheduledActionType value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the service takes the action.</p>
   */
  inline const Aws::Utils::DateTime& GetScheduledTime() const { return m_scheduledTime; }
  inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }
  template <typename ScheduledTimeT = Aws::Utils::DateTime>
  void SetScheduledTime(ScheduledTimeT&& value) {
    m_scheduledTimeHasBeenSet = true;
    m_scheduledTime = std::forward<ScheduledTimeT>(value);
  }
  template <typename ScheduledTimeT = Aws::Utils::DateTime>
  ClonedBlueGreenScheduledAction& WithScheduledTime(ScheduledTimeT&& value) {
    SetScheduledTime(std::forward<ScheduledTimeT>(value));
    return *this;
  }
  ///@}
 private:
  ClonedBlueGreenScheduledActionType m_action{ClonedBlueGreenScheduledActionType::NOT_SET};

  Aws::Utils::DateTime m_scheduledTime{};
  bool m_actionHasBeenSet = false;
  bool m_scheduledTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
