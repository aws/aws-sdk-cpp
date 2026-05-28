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
 * <p>Metadata for a system service associated event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SystemServiceAssociatedMetadata">AWS
 * API Reference</a></p>
 */
class SystemServiceAssociatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API SystemServiceAssociatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API SystemServiceAssociatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SystemServiceAssociatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the associated service.</p>
   */
  inline const Aws::String& GetServiceName() const { return m_serviceName; }
  inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
  template <typename ServiceNameT = Aws::String>
  void SetServiceName(ServiceNameT&& value) {
    m_serviceNameHasBeenSet = true;
    m_serviceName = std::forward<ServiceNameT>(value);
  }
  template <typename ServiceNameT = Aws::String>
  SystemServiceAssociatedMetadata& WithServiceName(ServiceNameT&& value) {
    SetServiceName(std::forward<ServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  SystemServiceAssociatedMetadata& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user journeys linking the service to the system.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUserJourneys() const { return m_userJourneys; }
  inline bool UserJourneysHasBeenSet() const { return m_userJourneysHasBeenSet; }
  template <typename UserJourneysT = Aws::Vector<Aws::String>>
  void SetUserJourneys(UserJourneysT&& value) {
    m_userJourneysHasBeenSet = true;
    m_userJourneys = std::forward<UserJourneysT>(value);
  }
  template <typename UserJourneysT = Aws::Vector<Aws::String>>
  SystemServiceAssociatedMetadata& WithUserJourneys(UserJourneysT&& value) {
    SetUserJourneys(std::forward<UserJourneysT>(value));
    return *this;
  }
  template <typename UserJourneysT = Aws::String>
  SystemServiceAssociatedMetadata& AddUserJourneys(UserJourneysT&& value) {
    m_userJourneysHasBeenSet = true;
    m_userJourneys.emplace_back(std::forward<UserJourneysT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceName;

  Aws::String m_serviceArn;

  Aws::Vector<Aws::String> m_userJourneys;
  bool m_serviceNameHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_userJourneysHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
