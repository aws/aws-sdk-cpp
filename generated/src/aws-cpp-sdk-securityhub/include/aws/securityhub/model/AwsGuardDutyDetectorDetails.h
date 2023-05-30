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
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDetails();
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes which data sources are activated for the detector. </p>
     */
    inline const AwsGuardDutyDetectorDataSourcesDetails& GetDataSources() const{ return m_dataSources; }

    /**
     * <p> Describes which data sources are activated for the detector. </p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p> Describes which data sources are activated for the detector. </p>
     */
    inline void SetDataSources(const AwsGuardDutyDetectorDataSourcesDetails& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p> Describes which data sources are activated for the detector. </p>
     */
    inline void SetDataSources(AwsGuardDutyDetectorDataSourcesDetails&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p> Describes which data sources are activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithDataSources(const AwsGuardDutyDetectorDataSourcesDetails& value) { SetDataSources(value); return *this;}

    /**
     * <p> Describes which data sources are activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithDataSources(AwsGuardDutyDetectorDataSourcesDetails&& value) { SetDataSources(std::move(value)); return *this;}


    /**
     * <p> Describes which features are activated for the detector. </p>
     */
    inline const Aws::Vector<AwsGuardDutyDetectorFeaturesDetails>& GetFeatures() const{ return m_features; }

    /**
     * <p> Describes which features are activated for the detector. </p>
     */
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    /**
     * <p> Describes which features are activated for the detector. </p>
     */
    inline void SetFeatures(const Aws::Vector<AwsGuardDutyDetectorFeaturesDetails>& value) { m_featuresHasBeenSet = true; m_features = value; }

    /**
     * <p> Describes which features are activated for the detector. </p>
     */
    inline void SetFeatures(Aws::Vector<AwsGuardDutyDetectorFeaturesDetails>&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    /**
     * <p> Describes which features are activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithFeatures(const Aws::Vector<AwsGuardDutyDetectorFeaturesDetails>& value) { SetFeatures(value); return *this;}

    /**
     * <p> Describes which features are activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithFeatures(Aws::Vector<AwsGuardDutyDetectorFeaturesDetails>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p> Describes which features are activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorDetails& AddFeatures(const AwsGuardDutyDetectorFeaturesDetails& value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }

    /**
     * <p> Describes which features are activated for the detector. </p>
     */
    inline AwsGuardDutyDetectorDetails& AddFeatures(AwsGuardDutyDetectorFeaturesDetails&& value) { m_featuresHasBeenSet = true; m_features.push_back(std::move(value)); return *this; }


    /**
     * <p> The publishing frequency of the finding. </p>
     */
    inline const Aws::String& GetFindingPublishingFrequency() const{ return m_findingPublishingFrequency; }

    /**
     * <p> The publishing frequency of the finding. </p>
     */
    inline bool FindingPublishingFrequencyHasBeenSet() const { return m_findingPublishingFrequencyHasBeenSet; }

    /**
     * <p> The publishing frequency of the finding. </p>
     */
    inline void SetFindingPublishingFrequency(const Aws::String& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = value; }

    /**
     * <p> The publishing frequency of the finding. </p>
     */
    inline void SetFindingPublishingFrequency(Aws::String&& value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency = std::move(value); }

    /**
     * <p> The publishing frequency of the finding. </p>
     */
    inline void SetFindingPublishingFrequency(const char* value) { m_findingPublishingFrequencyHasBeenSet = true; m_findingPublishingFrequency.assign(value); }

    /**
     * <p> The publishing frequency of the finding. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithFindingPublishingFrequency(const Aws::String& value) { SetFindingPublishingFrequency(value); return *this;}

    /**
     * <p> The publishing frequency of the finding. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithFindingPublishingFrequency(Aws::String&& value) { SetFindingPublishingFrequency(std::move(value)); return *this;}

    /**
     * <p> The publishing frequency of the finding. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithFindingPublishingFrequency(const char* value) { SetFindingPublishingFrequency(value); return *this;}


    /**
     * <p> The GuardDuty service role. </p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p> The GuardDuty service role. </p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p> The GuardDuty service role. </p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p> The GuardDuty service role. </p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p> The GuardDuty service role. </p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p> The GuardDuty service role. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p> The GuardDuty service role. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p> The GuardDuty service role. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p> The activation status of the detector. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The activation status of the detector. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The activation status of the detector. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The activation status of the detector. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The activation status of the detector. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The activation status of the detector. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The activation status of the detector. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The activation status of the detector. </p>
     */
    inline AwsGuardDutyDetectorDetails& WithStatus(const char* value) { SetStatus(value); return *this;}

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
