/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

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
 * <p>Represents a system associated with a service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/AssociatedSystem">AWS
 * API Reference</a></p>
 */
class AssociatedSystem {
 public:
  AWS_RESILIENCEHUBV2_API AssociatedSystem() = default;
  AWS_RESILIENCEHUBV2_API AssociatedSystem(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API AssociatedSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetSystemArn() const { return m_systemArn; }
  inline bool SystemArnHasBeenSet() const { return m_systemArnHasBeenSet; }
  template <typename SystemArnT = Aws::String>
  void SetSystemArn(SystemArnT&& value) {
    m_systemArnHasBeenSet = true;
    m_systemArn = std::forward<SystemArnT>(value);
  }
  template <typename SystemArnT = Aws::String>
  AssociatedSystem& WithSystemArn(SystemArnT&& value) {
    SetSystemArn(std::forward<SystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSystemName() const { return m_systemName; }
  inline bool SystemNameHasBeenSet() const { return m_systemNameHasBeenSet; }
  template <typename SystemNameT = Aws::String>
  void SetSystemName(SystemNameT&& value) {
    m_systemNameHasBeenSet = true;
    m_systemName = std::forward<SystemNameT>(value);
  }
  template <typename SystemNameT = Aws::String>
  AssociatedSystem& WithSystemName(SystemNameT&& value) {
    SetSystemName(std::forward<SystemNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of user journey identifiers that associate this system with the
   * service.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUserJourneyIds() const { return m_userJourneyIds; }
  inline bool UserJourneyIdsHasBeenSet() const { return m_userJourneyIdsHasBeenSet; }
  template <typename UserJourneyIdsT = Aws::Vector<Aws::String>>
  void SetUserJourneyIds(UserJourneyIdsT&& value) {
    m_userJourneyIdsHasBeenSet = true;
    m_userJourneyIds = std::forward<UserJourneyIdsT>(value);
  }
  template <typename UserJourneyIdsT = Aws::Vector<Aws::String>>
  AssociatedSystem& WithUserJourneyIds(UserJourneyIdsT&& value) {
    SetUserJourneyIds(std::forward<UserJourneyIdsT>(value));
    return *this;
  }
  template <typename UserJourneyIdsT = Aws::String>
  AssociatedSystem& AddUserJourneyIds(UserJourneyIdsT&& value) {
    m_userJourneyIdsHasBeenSet = true;
    m_userJourneyIds.emplace_back(std::forward<UserJourneyIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemArn;

  Aws::String m_systemName;

  Aws::Vector<Aws::String> m_userJourneyIds;
  bool m_systemArnHasBeenSet = false;
  bool m_systemNameHasBeenSet = false;
  bool m_userJourneyIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
