/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/PlacementSpecification.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configuration for how instances are placed and allocated within UltraServers.
   * This is only applicable for UltraServer capacity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstancePlacementConfig">AWS
   * API Reference</a></p>
   */
  class InstancePlacementConfig
  {
  public:
    AWS_SAGEMAKER_API InstancePlacementConfig() = default;
    AWS_SAGEMAKER_API InstancePlacementConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InstancePlacementConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If set to true, allows multiple jobs to share the same UltraServer instances.
     * If set to false, ensures this job's instances are placed on an UltraServer
     * exclusively, with no other jobs sharing the same UltraServer. Default is
     * false.</p>
     */
    inline bool GetEnableMultipleJobs() const { return m_enableMultipleJobs; }
    inline bool EnableMultipleJobsHasBeenSet() const { return m_enableMultipleJobsHasBeenSet; }
    inline void SetEnableMultipleJobs(bool value) { m_enableMultipleJobsHasBeenSet = true; m_enableMultipleJobs = value; }
    inline InstancePlacementConfig& WithEnableMultipleJobs(bool value) { SetEnableMultipleJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of specifications for how instances should be placed on specific
     * UltraServers. Maximum of 10 items is supported.</p>
     */
    inline const Aws::Vector<PlacementSpecification>& GetPlacementSpecifications() const { return m_placementSpecifications; }
    inline bool PlacementSpecificationsHasBeenSet() const { return m_placementSpecificationsHasBeenSet; }
    template<typename PlacementSpecificationsT = Aws::Vector<PlacementSpecification>>
    void SetPlacementSpecifications(PlacementSpecificationsT&& value) { m_placementSpecificationsHasBeenSet = true; m_placementSpecifications = std::forward<PlacementSpecificationsT>(value); }
    template<typename PlacementSpecificationsT = Aws::Vector<PlacementSpecification>>
    InstancePlacementConfig& WithPlacementSpecifications(PlacementSpecificationsT&& value) { SetPlacementSpecifications(std::forward<PlacementSpecificationsT>(value)); return *this;}
    template<typename PlacementSpecificationsT = PlacementSpecification>
    InstancePlacementConfig& AddPlacementSpecifications(PlacementSpecificationsT&& value) { m_placementSpecificationsHasBeenSet = true; m_placementSpecifications.emplace_back(std::forward<PlacementSpecificationsT>(value)); return *this; }
    ///@}
  private:

    bool m_enableMultipleJobs{false};
    bool m_enableMultipleJobsHasBeenSet = false;

    Aws::Vector<PlacementSpecification> m_placementSpecifications;
    bool m_placementSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
