/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Placeholder documentation for RouterDestination<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RouterDestination">AWS
 * API Reference</a></p>
 */
class RouterDestination {
 public:
  AWS_MEDIALIVE_API RouterDestination() = default;
  AWS_MEDIALIVE_API RouterDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API RouterDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The Availability Zone (AZ) names of the AZs this destination is created in.
   */
  inline const Aws::String& GetAvailabilityZoneName() const { return m_availabilityZoneName; }
  inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }
  template <typename AvailabilityZoneNameT = Aws::String>
  void SetAvailabilityZoneName(AvailabilityZoneNameT&& value) {
    m_availabilityZoneNameHasBeenSet = true;
    m_availabilityZoneName = std::forward<AvailabilityZoneNameT>(value);
  }
  template <typename AvailabilityZoneNameT = Aws::String>
  RouterDestination& WithAvailabilityZoneName(AvailabilityZoneNameT&& value) {
    SetAvailabilityZoneName(std::forward<AvailabilityZoneNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * ARN of the output from MediaConnect Router currently connected to this input.
   */
  inline const Aws::String& GetRouterOutputArn() const { return m_routerOutputArn; }
  inline bool RouterOutputArnHasBeenSet() const { return m_routerOutputArnHasBeenSet; }
  template <typename RouterOutputArnT = Aws::String>
  void SetRouterOutputArn(RouterOutputArnT&& value) {
    m_routerOutputArnHasBeenSet = true;
    m_routerOutputArn = std::forward<RouterOutputArnT>(value);
  }
  template <typename RouterOutputArnT = Aws::String>
  RouterDestination& WithRouterOutputArn(RouterOutputArnT&& value) {
    SetRouterOutputArn(std::forward<RouterOutputArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_availabilityZoneName;
  bool m_availabilityZoneNameHasBeenSet = false;

  Aws::String m_routerOutputArn;
  bool m_routerOutputArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
