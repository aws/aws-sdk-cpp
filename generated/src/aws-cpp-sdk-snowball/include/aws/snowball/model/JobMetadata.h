/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/JobState.h>
#include <aws/snowball/model/JobType.h>
#include <aws/snowball/model/SnowballType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/ShippingDetails.h>
#include <aws/snowball/model/SnowballCapacity.h>
#include <aws/snowball/model/Notification.h>
#include <aws/snowball/model/DataTransfer.h>
#include <aws/snowball/model/JobLogs.h>
#include <aws/snowball/model/TaxDocuments.h>
#include <aws/snowball/model/DeviceConfiguration.h>
#include <aws/snowball/model/RemoteManagement.h>
#include <aws/snowball/model/OnDeviceServiceConfiguration.h>
#include <aws/snowball/model/ImpactLevel.h>
#include <aws/snowball/model/PickupDetails.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains information about a specific job including shipping information, job
   * status, and other important metadata. This information is returned as a part of
   * the response syntax of the <code>DescribeJob</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/JobMetadata">AWS
   * API Reference</a></p>
   */
  class JobMetadata
  {
  public:
    AWS_SNOWBALL_API JobMetadata() = default;
    AWS_SNOWBALL_API JobMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API JobMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobMetadata& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the jobs.</p>
     */
    inline JobState GetJobState() const { return m_jobState; }
    inline bool JobStateHasBeenSet() const { return m_jobStateHasBeenSet; }
    inline void SetJobState(JobState value) { m_jobStateHasBeenSet = true; m_jobState = value; }
    inline JobMetadata& WithJobState(JobState value) { SetJobState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job.</p>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline JobMetadata& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device used with this job.</p>
     */
    inline SnowballType GetSnowballType() const { return m_snowballType; }
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }
    inline void SetSnowballType(SnowballType value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }
    inline JobMetadata& WithSnowballType(SnowballType value) { SetSnowballType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date for this job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    JobMetadata& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>S3Resource</code> objects. Each <code>S3Resource</code>
     * object represents an Amazon S3 bucket that your transferred data will be
     * exported from or imported into.</p>
     */
    inline const JobResource& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = JobResource>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = JobResource>
    JobMetadata& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the job, provided at job creation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    JobMetadata& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Key Management Service (KMS) key
     * associated with this job. This ARN was created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in KMS.</p>
     */
    inline const Aws::String& GetKmsKeyARN() const { return m_kmsKeyARN; }
    inline bool KmsKeyARNHasBeenSet() const { return m_kmsKeyARNHasBeenSet; }
    template<typename KmsKeyARNT = Aws::String>
    void SetKmsKeyARN(KmsKeyARNT&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = std::forward<KmsKeyARNT>(value); }
    template<typename KmsKeyARNT = Aws::String>
    JobMetadata& WithKmsKeyARN(KmsKeyARNT&& value) { SetKmsKeyARN(std::forward<KmsKeyARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN associated with this job. This ARN was created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in Identity and Access Management.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    JobMetadata& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline const Aws::String& GetAddressId() const { return m_addressId; }
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }
    template<typename AddressIdT = Aws::String>
    void SetAddressId(AddressIdT&& value) { m_addressIdHasBeenSet = true; m_addressId = std::forward<AddressIdT>(value); }
    template<typename AddressIdT = Aws::String>
    JobMetadata& WithAddressId(AddressIdT&& value) { SetAddressId(std::forward<AddressIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A job's shipping information, including inbound and outbound tracking numbers
     * and shipping speed options.</p>
     */
    inline const ShippingDetails& GetShippingDetails() const { return m_shippingDetails; }
    inline bool ShippingDetailsHasBeenSet() const { return m_shippingDetailsHasBeenSet; }
    template<typename ShippingDetailsT = ShippingDetails>
    void SetShippingDetails(ShippingDetailsT&& value) { m_shippingDetailsHasBeenSet = true; m_shippingDetails = std::forward<ShippingDetailsT>(value); }
    template<typename ShippingDetailsT = ShippingDetails>
    JobMetadata& WithShippingDetails(ShippingDetailsT&& value) { SetShippingDetails(std::forward<ShippingDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Snow device capacity preference for this job, specified at job creation.
     * In US regions, you can choose between 50 TB and 80 TB Snowballs. All other
     * regions use 80 TB capacity Snowballs.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline SnowballCapacity GetSnowballCapacityPreference() const { return m_snowballCapacityPreference; }
    inline bool SnowballCapacityPreferenceHasBeenSet() const { return m_snowballCapacityPreferenceHasBeenSet; }
    inline void SetSnowballCapacityPreference(SnowballCapacity value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }
    inline JobMetadata& WithSnowballCapacityPreference(SnowballCapacity value) { SetSnowballCapacityPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings
     * associated with a specific job. The <code>Notification</code> object is returned
     * as a part of the response syntax of the <code>DescribeJob</code> action in the
     * <code>JobMetadata</code> data type.</p>
     */
    inline const Notification& GetNotification() const { return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    template<typename NotificationT = Notification>
    void SetNotification(NotificationT&& value) { m_notificationHasBeenSet = true; m_notification = std::forward<NotificationT>(value); }
    template<typename NotificationT = Notification>
    JobMetadata& WithNotification(NotificationT&& value) { SetNotification(std::forward<NotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that defines the real-time status of a Snow device's data transfer
     * while the device is at Amazon Web Services. This data is only available while a
     * job has a <code>JobState</code> value of <code>InProgress</code>, for both
     * import and export jobs.</p>
     */
    inline const DataTransfer& GetDataTransferProgress() const { return m_dataTransferProgress; }
    inline bool DataTransferProgressHasBeenSet() const { return m_dataTransferProgressHasBeenSet; }
    template<typename DataTransferProgressT = DataTransfer>
    void SetDataTransferProgress(DataTransferProgressT&& value) { m_dataTransferProgressHasBeenSet = true; m_dataTransferProgress = std::forward<DataTransferProgressT>(value); }
    template<typename DataTransferProgressT = DataTransfer>
    JobMetadata& WithDataTransferProgress(DataTransferProgressT&& value) { SetDataTransferProgress(std::forward<DataTransferProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Links to Amazon S3 presigned URLs for the job report and logs. For import
     * jobs, the PDF job report becomes available at the end of the import process. For
     * export jobs, your job report typically becomes available while the Snow device
     * for your job part is being delivered to you.</p>
     */
    inline const JobLogs& GetJobLogInfo() const { return m_jobLogInfo; }
    inline bool JobLogInfoHasBeenSet() const { return m_jobLogInfoHasBeenSet; }
    template<typename JobLogInfoT = JobLogs>
    void SetJobLogInfo(JobLogInfoT&& value) { m_jobLogInfoHasBeenSet = true; m_jobLogInfo = std::forward<JobLogInfoT>(value); }
    template<typename JobLogInfoT = JobLogs>
    JobMetadata& WithJobLogInfo(JobLogInfoT&& value) { SetJobLogInfo(std::forward<JobLogInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 39-character ID for the cluster, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    JobMetadata& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the address that you want a job shipped to, after it will be
     * shipped to its primary address. This field is not supported in most regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const { return m_forwardingAddressId; }
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }
    template<typename ForwardingAddressIdT = Aws::String>
    void SetForwardingAddressId(ForwardingAddressIdT&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::forward<ForwardingAddressIdT>(value); }
    template<typename ForwardingAddressIdT = Aws::String>
    JobMetadata& WithForwardingAddressId(ForwardingAddressIdT&& value) { SetForwardingAddressId(std::forward<ForwardingAddressIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata associated with the tax documents required in your Amazon Web
     * Services Region.</p>
     */
    inline const TaxDocuments& GetTaxDocuments() const { return m_taxDocuments; }
    inline bool TaxDocumentsHasBeenSet() const { return m_taxDocumentsHasBeenSet; }
    template<typename TaxDocumentsT = TaxDocuments>
    void SetTaxDocuments(TaxDocumentsT&& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = std::forward<TaxDocumentsT>(value); }
    template<typename TaxDocumentsT = TaxDocuments>
    JobMetadata& WithTaxDocuments(TaxDocumentsT&& value) { SetTaxDocuments(std::forward<TaxDocumentsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeviceConfiguration& GetDeviceConfiguration() const { return m_deviceConfiguration; }
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }
    template<typename DeviceConfigurationT = DeviceConfiguration>
    void SetDeviceConfiguration(DeviceConfigurationT&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::forward<DeviceConfigurationT>(value); }
    template<typename DeviceConfigurationT = DeviceConfiguration>
    JobMetadata& WithDeviceConfiguration(DeviceConfigurationT&& value) { SetDeviceConfiguration(std::forward<DeviceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to securely operate and manage Snowcone devices remotely from
     * outside of your internal network. When set to <code>INSTALLED_AUTOSTART</code>,
     * remote management will automatically be available when the device arrives at
     * your location. Otherwise, you need to use the Snowball Client to manage the
     * device.</p>
     */
    inline RemoteManagement GetRemoteManagement() const { return m_remoteManagement; }
    inline bool RemoteManagementHasBeenSet() const { return m_remoteManagementHasBeenSet; }
    inline void SetRemoteManagement(RemoteManagement value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = value; }
    inline JobMetadata& WithRemoteManagement(RemoteManagement value) { SetRemoteManagement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline const Aws::String& GetLongTermPricingId() const { return m_longTermPricingId; }
    inline bool LongTermPricingIdHasBeenSet() const { return m_longTermPricingIdHasBeenSet; }
    template<typename LongTermPricingIdT = Aws::String>
    void SetLongTermPricingId(LongTermPricingIdT&& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = std::forward<LongTermPricingIdT>(value); }
    template<typename LongTermPricingIdT = Aws::String>
    JobMetadata& WithLongTermPricingId(LongTermPricingIdT&& value) { SetLongTermPricingId(std::forward<LongTermPricingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents metadata and configuration settings for services on an Amazon Web
     * Services Snow Family device.</p>
     */
    inline const OnDeviceServiceConfiguration& GetOnDeviceServiceConfiguration() const { return m_onDeviceServiceConfiguration; }
    inline bool OnDeviceServiceConfigurationHasBeenSet() const { return m_onDeviceServiceConfigurationHasBeenSet; }
    template<typename OnDeviceServiceConfigurationT = OnDeviceServiceConfiguration>
    void SetOnDeviceServiceConfiguration(OnDeviceServiceConfigurationT&& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = std::forward<OnDeviceServiceConfigurationT>(value); }
    template<typename OnDeviceServiceConfigurationT = OnDeviceServiceConfiguration>
    JobMetadata& WithOnDeviceServiceConfiguration(OnDeviceServiceConfigurationT&& value) { SetOnDeviceServiceConfiguration(std::forward<OnDeviceServiceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest impact level of data that will be stored or processed on the
     * device, provided at job creation.</p>
     */
    inline ImpactLevel GetImpactLevel() const { return m_impactLevel; }
    inline bool ImpactLevelHasBeenSet() const { return m_impactLevelHasBeenSet; }
    inline void SetImpactLevel(ImpactLevel value) { m_impactLevelHasBeenSet = true; m_impactLevel = value; }
    inline JobMetadata& WithImpactLevel(ImpactLevel value) { SetImpactLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information identifying the person picking up the device.</p>
     */
    inline const PickupDetails& GetPickupDetails() const { return m_pickupDetails; }
    inline bool PickupDetailsHasBeenSet() const { return m_pickupDetailsHasBeenSet; }
    template<typename PickupDetailsT = PickupDetails>
    void SetPickupDetails(PickupDetailsT&& value) { m_pickupDetailsHasBeenSet = true; m_pickupDetails = std::forward<PickupDetailsT>(value); }
    template<typename PickupDetailsT = PickupDetails>
    JobMetadata& WithPickupDetails(PickupDetailsT&& value) { SetPickupDetails(std::forward<PickupDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique ID associated with a device.</p>
     */
    inline const Aws::String& GetSnowballId() const { return m_snowballId; }
    inline bool SnowballIdHasBeenSet() const { return m_snowballIdHasBeenSet; }
    template<typename SnowballIdT = Aws::String>
    void SetSnowballId(SnowballIdT&& value) { m_snowballIdHasBeenSet = true; m_snowballId = std::forward<SnowballIdT>(value); }
    template<typename SnowballIdT = Aws::String>
    JobMetadata& WithSnowballId(SnowballIdT&& value) { SetSnowballId(std::forward<SnowballIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobState m_jobState{JobState::NOT_SET};
    bool m_jobStateHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    SnowballType m_snowballType{SnowballType::NOT_SET};
    bool m_snowballTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    JobResource m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyARN;
    bool m_kmsKeyARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;

    ShippingDetails m_shippingDetails;
    bool m_shippingDetailsHasBeenSet = false;

    SnowballCapacity m_snowballCapacityPreference{SnowballCapacity::NOT_SET};
    bool m_snowballCapacityPreferenceHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    DataTransfer m_dataTransferProgress;
    bool m_dataTransferProgressHasBeenSet = false;

    JobLogs m_jobLogInfo;
    bool m_jobLogInfoHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_forwardingAddressId;
    bool m_forwardingAddressIdHasBeenSet = false;

    TaxDocuments m_taxDocuments;
    bool m_taxDocumentsHasBeenSet = false;

    DeviceConfiguration m_deviceConfiguration;
    bool m_deviceConfigurationHasBeenSet = false;

    RemoteManagement m_remoteManagement{RemoteManagement::NOT_SET};
    bool m_remoteManagementHasBeenSet = false;

    Aws::String m_longTermPricingId;
    bool m_longTermPricingIdHasBeenSet = false;

    OnDeviceServiceConfiguration m_onDeviceServiceConfiguration;
    bool m_onDeviceServiceConfigurationHasBeenSet = false;

    ImpactLevel m_impactLevel{ImpactLevel::NOT_SET};
    bool m_impactLevelHasBeenSet = false;

    PickupDetails m_pickupDetails;
    bool m_pickupDetailsHasBeenSet = false;

    Aws::String m_snowballId;
    bool m_snowballIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
