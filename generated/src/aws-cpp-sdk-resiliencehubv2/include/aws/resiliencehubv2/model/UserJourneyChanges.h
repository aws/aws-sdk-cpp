/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ServiceReferenceChanges.h>
#include <aws/resiliencehubv2/model/StringChange.h>

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
 * <p>Describes changes made to a user journey.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/UserJourneyChanges">AWS
 * API Reference</a></p>
 */
class UserJourneyChanges {
 public:
  AWS_RESILIENCEHUBV2_API UserJourneyChanges() = default;
  AWS_RESILIENCEHUBV2_API UserJourneyChanges(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API UserJourneyChanges& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Changes to the user journey description.</p>
   */
  inline const StringChange& GetJourneyDescription() const { return m_journeyDescription; }
  inline bool JourneyDescriptionHasBeenSet() const { return m_journeyDescriptionHasBeenSet; }
  template <typename JourneyDescriptionT = StringChange>
  void SetJourneyDescription(JourneyDescriptionT&& value) {
    m_journeyDescriptionHasBeenSet = true;
    m_journeyDescription = std::forward<JourneyDescriptionT>(value);
  }
  template <typename JourneyDescriptionT = StringChange>
  UserJourneyChanges& WithJourneyDescription(JourneyDescriptionT&& value) {
    SetJourneyDescription(std::forward<JourneyDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Changes to the services associated with the user journey.</p>
   */
  inline const ServiceReferenceChanges& GetAssociatedServices() const { return m_associatedServices; }
  inline bool AssociatedServicesHasBeenSet() const { return m_associatedServicesHasBeenSet; }
  template <typename AssociatedServicesT = ServiceReferenceChanges>
  void SetAssociatedServices(AssociatedServicesT&& value) {
    m_associatedServicesHasBeenSet = true;
    m_associatedServices = std::forward<AssociatedServicesT>(value);
  }
  template <typename AssociatedServicesT = ServiceReferenceChanges>
  UserJourneyChanges& WithAssociatedServices(AssociatedServicesT&& value) {
    SetAssociatedServices(std::forward<AssociatedServicesT>(value));
    return *this;
  }
  ///@}
 private:
  StringChange m_journeyDescription;

  ServiceReferenceChanges m_associatedServices;
  bool m_journeyDescriptionHasBeenSet = false;
  bool m_associatedServicesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
