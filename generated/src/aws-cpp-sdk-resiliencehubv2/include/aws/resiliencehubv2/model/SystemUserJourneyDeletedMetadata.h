/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ServiceReference.h>

#include <utility>

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
 * <p>Metadata for a system user journey deleted event.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SystemUserJourneyDeletedMetadata">AWS
 * API Reference</a></p>
 */
class SystemUserJourneyDeletedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API SystemUserJourneyDeletedMetadata() = default;
  AWS_RESILIENCEHUBV2_API SystemUserJourneyDeletedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SystemUserJourneyDeletedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the deleted user journey.</p>
   */
  inline const Aws::String& GetUserJourneyName() const { return m_userJourneyName; }
  inline bool UserJourneyNameHasBeenSet() const { return m_userJourneyNameHasBeenSet; }
  template <typename UserJourneyNameT = Aws::String>
  void SetUserJourneyName(UserJourneyNameT&& value) {
    m_userJourneyNameHasBeenSet = true;
    m_userJourneyName = std::forward<UserJourneyNameT>(value);
  }
  template <typename UserJourneyNameT = Aws::String>
  SystemUserJourneyDeletedMetadata& WithUserJourneyName(UserJourneyNameT&& value) {
    SetUserJourneyName(std::forward<UserJourneyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The services that were associated at the time of deletion.</p>
   */
  inline const Aws::Vector<ServiceReference>& GetAssociatedServicesAtDeletion() const { return m_associatedServicesAtDeletion; }
  inline bool AssociatedServicesAtDeletionHasBeenSet() const { return m_associatedServicesAtDeletionHasBeenSet; }
  template <typename AssociatedServicesAtDeletionT = Aws::Vector<ServiceReference>>
  void SetAssociatedServicesAtDeletion(AssociatedServicesAtDeletionT&& value) {
    m_associatedServicesAtDeletionHasBeenSet = true;
    m_associatedServicesAtDeletion = std::forward<AssociatedServicesAtDeletionT>(value);
  }
  template <typename AssociatedServicesAtDeletionT = Aws::Vector<ServiceReference>>
  SystemUserJourneyDeletedMetadata& WithAssociatedServicesAtDeletion(AssociatedServicesAtDeletionT&& value) {
    SetAssociatedServicesAtDeletion(std::forward<AssociatedServicesAtDeletionT>(value));
    return *this;
  }
  template <typename AssociatedServicesAtDeletionT = ServiceReference>
  SystemUserJourneyDeletedMetadata& AddAssociatedServicesAtDeletion(AssociatedServicesAtDeletionT&& value) {
    m_associatedServicesAtDeletionHasBeenSet = true;
    m_associatedServicesAtDeletion.emplace_back(std::forward<AssociatedServicesAtDeletionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userJourneyName;

  Aws::Vector<ServiceReference> m_associatedServicesAtDeletion;
  bool m_userJourneyNameHasBeenSet = false;
  bool m_associatedServicesAtDeletionHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
