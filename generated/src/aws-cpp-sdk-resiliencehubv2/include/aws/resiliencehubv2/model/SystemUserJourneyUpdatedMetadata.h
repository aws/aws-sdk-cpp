/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/UserJourneyChanges.h>

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
 * <p>Metadata for a system user journey updated event.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SystemUserJourneyUpdatedMetadata">AWS
 * API Reference</a></p>
 */
class SystemUserJourneyUpdatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API SystemUserJourneyUpdatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API SystemUserJourneyUpdatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SystemUserJourneyUpdatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the updated user journey.</p>
   */
  inline const Aws::String& GetUserJourneyName() const { return m_userJourneyName; }
  inline bool UserJourneyNameHasBeenSet() const { return m_userJourneyNameHasBeenSet; }
  template <typename UserJourneyNameT = Aws::String>
  void SetUserJourneyName(UserJourneyNameT&& value) {
    m_userJourneyNameHasBeenSet = true;
    m_userJourneyName = std::forward<UserJourneyNameT>(value);
  }
  template <typename UserJourneyNameT = Aws::String>
  SystemUserJourneyUpdatedMetadata& WithUserJourneyName(UserJourneyNameT&& value) {
    SetUserJourneyName(std::forward<UserJourneyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The changes made to the user journey.</p>
   */
  inline const UserJourneyChanges& GetChanges() const { return m_changes; }
  inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }
  template <typename ChangesT = UserJourneyChanges>
  void SetChanges(ChangesT&& value) {
    m_changesHasBeenSet = true;
    m_changes = std::forward<ChangesT>(value);
  }
  template <typename ChangesT = UserJourneyChanges>
  SystemUserJourneyUpdatedMetadata& WithChanges(ChangesT&& value) {
    SetChanges(std::forward<ChangesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userJourneyName;

  UserJourneyChanges m_changes;
  bool m_userJourneyNameHasBeenSet = false;
  bool m_changesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
