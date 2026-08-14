/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TagConflictResolutionStrategy.h>

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
 * <p>Specifies configuration for propagating resource tags from source log groups
 * to centralized destination log groups. The service uses a customer-managed IAM
 * role in the destination account to add, update, and remove tags on destination
 * log groups.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TagPropagationConfiguration">AWS
 * API Reference</a></p>
 */
class TagPropagationConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API TagPropagationConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API TagPropagationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TagPropagationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of a customer-managed IAM role in the destination account. The
   * service assumes this role to propagate tags to destination log groups. You must
   * have <code>iam:PassRole</code> permission on this role.</p>
   */
  inline const Aws::String& GetDestinationRoleArn() const { return m_destinationRoleArn; }
  inline bool DestinationRoleArnHasBeenSet() const { return m_destinationRoleArnHasBeenSet; }
  template <typename DestinationRoleArnT = Aws::String>
  void SetDestinationRoleArn(DestinationRoleArnT&& value) {
    m_destinationRoleArnHasBeenSet = true;
    m_destinationRoleArn = std::forward<DestinationRoleArnT>(value);
  }
  template <typename DestinationRoleArnT = Aws::String>
  TagPropagationConfiguration& WithDestinationRoleArn(DestinationRoleArnT&& value) {
    SetDestinationRoleArn(std::forward<DestinationRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The strategy for resolving conflicts when a tag key exists on both the source
   * and destination log groups. If not specified, defaults to
   * <code>UPDATE_SYNC</code>.</p> <ul> <li> <p> <code>ADD_ONLY</code> – Only adds
   * new tags from the source without modifying existing destination tags.</p> </li>
   * <li> <p> <code>UPDATE_SYNC</code> – Adds new tags and updates existing tags from
   * the source. Does not remove destination tags that are absent from the
   * source.</p> </li> <li> <p> <code>IN_SYNC</code> – Keeps destination tags fully
   * synchronized with source tags, including removing destination tags that do not
   * exist on the source.</p> </li> </ul>
   */
  inline TagConflictResolutionStrategy GetTagConflictResolutionStrategy() const { return m_tagConflictResolutionStrategy; }
  inline bool TagConflictResolutionStrategyHasBeenSet() const { return m_tagConflictResolutionStrategyHasBeenSet; }
  inline void SetTagConflictResolutionStrategy(TagConflictResolutionStrategy value) {
    m_tagConflictResolutionStrategyHasBeenSet = true;
    m_tagConflictResolutionStrategy = value;
  }
  inline TagPropagationConfiguration& WithTagConflictResolutionStrategy(TagConflictResolutionStrategy value) {
    SetTagConflictResolutionStrategy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationRoleArn;

  TagConflictResolutionStrategy m_tagConflictResolutionStrategy{TagConflictResolutionStrategy::NOT_SET};
  bool m_destinationRoleArnHasBeenSet = false;
  bool m_tagConflictResolutionStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
