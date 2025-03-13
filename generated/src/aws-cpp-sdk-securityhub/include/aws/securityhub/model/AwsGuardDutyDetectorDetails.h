/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsGuardDutyDetectorFeaturesDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about an Amazon GuardDuty detector. A detector is an object
   * that represents the GuardDuty service. A detector is required for GuardDuty to
   * become operational. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsGuardDutyDetectorDetails">AWS
   * API Reference</a></p>
   */
  class AwsGuardDutyDetectorDetails
  {
  public:
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDetails() = default;
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes which data sources are activated for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesDetails& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = AwsGuardDutyDetectorDataSourcesDetails>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = AwsGuardDutyDetectorDataSourcesDetails>
    AwsGuardDutyDetectorDetails& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes which features are activated for the detector. </p>
     */
    inline const Aws::Vector<AwsGuardDutyDetectorFeaturesDetails>& GetFeatures() const { return m_features; }
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
    template<typename FeaturesT = Aws::Vector<AwsGuardDutyDetectorFeaturesDetails>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Vector<AwsGuardDutyDetectorFeaturesDetails>>
    AwsGuardDutyDetectorDetails& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    template<typename FeaturesT = AwsGuardDutyDetectorFeaturesDetails>
    AwsGuardDutyDetectorDetails& AddFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features.emplace_back(std::forward<FeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The publishing frequency of the finding. </p>
     */
    inline const Aws::String& GetFindingPublishingFrequency() const { return m_findingPublishingFrequency; }
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }
    template<typename FindingPublishingFrequencyT = Aws::String>
    void SetFindingPublishingFrequency(FindingPublishingFrequencyT&& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = std::forward<FindingPublishingFrequencyT>(value); }
    template<typename FindingPublishingFrequencyT = Aws::String>
    AwsGuardDutyDetectorDetails& WithFindingPublishingFrequency(FindingPublishingFrequencyT&& value) { SetFindingPublishingFrequency(std::forward<FindingPublishingFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The GuardDuty service role. </p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    AwsGuardDutyDetectorDetails& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The activation status of the detector. </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsGuardDutyDetectorDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    AwsGuardDutyDetectorDataSourcesDetails m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::Vector<AwsGuardDutyDetectorFeaturesDetails> m_features;
    bool m_featuresHasBeenSet = false;

    Aws::String m_findingPublishingFrequency;
    bool m_findingPublishingFrequencyHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
