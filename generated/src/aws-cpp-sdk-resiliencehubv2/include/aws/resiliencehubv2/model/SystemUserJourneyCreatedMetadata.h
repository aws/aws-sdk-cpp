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
 * <p>Metadata for a system user journey created event.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SystemUserJourneyCreatedMetadata">AWS
 * API Reference</a></p>
 */
class SystemUserJourneyCreatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API SystemUserJourneyCreatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API SystemUserJourneyCreatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SystemUserJourneyCreatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the created user journey.</p>
   */
  inline const Aws::String& GetUserJourneyName() const { return m_userJourneyName; }
  inline bool UserJourneyNameHasBeenSet() const { return m_userJourneyNameHasBeenSet; }
  template <typename UserJourneyNameT = Aws::String>
  void SetUserJourneyName(UserJourneyNameT&& value) {
    m_userJourneyNameHasBeenSet = true;
    m_userJourneyName = std::forward<UserJourneyNameT>(value);
  }
  template <typename UserJourneyNameT = Aws::String>
  SystemUserJourneyCreatedMetadata& WithUserJourneyName(UserJourneyNameT&& value) {
    SetUserJourneyName(std::forward<UserJourneyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The services associated with the created user journey.</p>
   */
  inline const Aws::Vector<ServiceReference>& GetAssociatedServices() const { return m_associatedServices; }
  inline bool AssociatedServicesHasBeenSet() const { return m_associatedServicesHasBeenSet; }
  template <typename AssociatedServicesT = Aws::Vector<ServiceReference>>
  void SetAssociatedServices(AssociatedServicesT&& value) {
    m_associatedServicesHasBeenSet = true;
    m_associatedServices = std::forward<AssociatedServicesT>(value);
  }
  template <typename AssociatedServicesT = Aws::Vector<ServiceReference>>
  SystemUserJourneyCreatedMetadata& WithAssociatedServices(AssociatedServicesT&& value) {
    SetAssociatedServices(std::forward<AssociatedServicesT>(value));
    return *this;
  }
  template <typename AssociatedServicesT = ServiceReference>
  SystemUserJourneyCreatedMetadata& AddAssociatedServices(AssociatedServicesT&& value) {
    m_associatedServicesHasBeenSet = true;
    m_associatedServices.emplace_back(std::forward<AssociatedServicesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userJourneyName;

  Aws::Vector<ServiceReference> m_associatedServices;
  bool m_userJourneyNameHasBeenSet = false;
  bool m_associatedServicesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
