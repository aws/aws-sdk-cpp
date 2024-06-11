﻿/**
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
    AWS_SNOWBALL_API JobMetadata();
    AWS_SNOWBALL_API JobMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API JobMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The automatically generated ID for a job, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline JobMetadata& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline JobMetadata& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline JobMetadata& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the jobs.</p>
     */
    inline const JobState& GetJobState() const{ return m_jobState; }
    inline bool JobStateHasBeenSet() const { return m_jobStateHasBeenSet; }
    inline void SetJobState(const JobState& value) { m_jobStateHasBeenSet = true; m_jobState = value; }
    inline void SetJobState(JobState&& value) { m_jobStateHasBeenSet = true; m_jobState = std::move(value); }
    inline JobMetadata& WithJobState(const JobState& value) { SetJobState(value); return *this;}
    inline JobMetadata& WithJobState(JobState&& value) { SetJobState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline JobMetadata& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline JobMetadata& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device used with this job.</p>
     */
    inline const SnowballType& GetSnowballType() const{ return m_snowballType; }
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }
    inline void SetSnowballType(const SnowballType& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }
    inline void SetSnowballType(SnowballType&& value) { m_snowballTypeHasBeenSet = true; m_snowballType = std::move(value); }
    inline JobMetadata& WithSnowballType(const SnowballType& value) { SetSnowballType(value); return *this;}
    inline JobMetadata& WithSnowballType(SnowballType&& value) { SetSnowballType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date for this job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline JobMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline JobMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>S3Resource</code> objects. Each <code>S3Resource</code>
     * object represents an Amazon S3 bucket that your transferred data will be
     * exported from or imported into.</p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline JobMetadata& WithResources(const JobResource& value) { SetResources(value); return *this;}
    inline JobMetadata& WithResources(JobResource&& value) { SetResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the job, provided at job creation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline JobMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline JobMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline JobMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Key Management Service (KMS) key
     * associated with this job. This ARN was created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in KMS.</p>
     */
    inline const Aws::String& GetKmsKeyARN() const{ return m_kmsKeyARN; }
    inline bool KmsKeyARNHasBeenSet() const { return m_kmsKeyARNHasBeenSet; }
    inline void SetKmsKeyARN(const Aws::String& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }
    inline void SetKmsKeyARN(Aws::String&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = std::move(value); }
    inline void SetKmsKeyARN(const char* value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN.assign(value); }
    inline JobMetadata& WithKmsKeyARN(const Aws::String& value) { SetKmsKeyARN(value); return *this;}
    inline JobMetadata& WithKmsKeyARN(Aws::String&& value) { SetKmsKeyARN(std::move(value)); return *this;}
    inline JobMetadata& WithKmsKeyARN(const char* value) { SetKmsKeyARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN associated with this job. This ARN was created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in Identity and Access Management.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline JobMetadata& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline JobMetadata& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline JobMetadata& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = std::move(value); }
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }
    inline JobMetadata& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}
    inline JobMetadata& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}
    inline JobMetadata& WithAddressId(const char* value) { SetAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A job's shipping information, including inbound and outbound tracking numbers
     * and shipping speed options.</p>
     */
    inline const ShippingDetails& GetShippingDetails() const{ return m_shippingDetails; }
    inline bool ShippingDetailsHasBeenSet() const { return m_shippingDetailsHasBeenSet; }
    inline void SetShippingDetails(const ShippingDetails& value) { m_shippingDetailsHasBeenSet = true; m_shippingDetails = value; }
    inline void SetShippingDetails(ShippingDetails&& value) { m_shippingDetailsHasBeenSet = true; m_shippingDetails = std::move(value); }
    inline JobMetadata& WithShippingDetails(const ShippingDetails& value) { SetShippingDetails(value); return *this;}
    inline JobMetadata& WithShippingDetails(ShippingDetails&& value) { SetShippingDetails(std::move(value)); return *this;}
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
    inline const SnowballCapacity& GetSnowballCapacityPreference() const{ return m_snowballCapacityPreference; }
    inline bool SnowballCapacityPreferenceHasBeenSet() const { return m_snowballCapacityPreferenceHasBeenSet; }
    inline void SetSnowballCapacityPreference(const SnowballCapacity& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }
    inline void SetSnowballCapacityPreference(SnowballCapacity&& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = std::move(value); }
    inline JobMetadata& WithSnowballCapacityPreference(const SnowballCapacity& value) { SetSnowballCapacityPreference(value); return *this;}
    inline JobMetadata& WithSnowballCapacityPreference(SnowballCapacity&& value) { SetSnowballCapacityPreference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings
     * associated with a specific job. The <code>Notification</code> object is returned
     * as a part of the response syntax of the <code>DescribeJob</code> action in the
     * <code>JobMetadata</code> data type.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline JobMetadata& WithNotification(const Notification& value) { SetNotification(value); return *this;}
    inline JobMetadata& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that defines the real-time status of a Snow device's data transfer
     * while the device is at Amazon Web Services. This data is only available while a
     * job has a <code>JobState</code> value of <code>InProgress</code>, for both
     * import and export jobs.</p>
     */
    inline const DataTransfer& GetDataTransferProgress() const{ return m_dataTransferProgress; }
    inline bool DataTransferProgressHasBeenSet() const { return m_dataTransferProgressHasBeenSet; }
    inline void SetDataTransferProgress(const DataTransfer& value) { m_dataTransferProgressHasBeenSet = true; m_dataTransferProgress = value; }
    inline void SetDataTransferProgress(DataTransfer&& value) { m_dataTransferProgressHasBeenSet = true; m_dataTransferProgress = std::move(value); }
    inline JobMetadata& WithDataTransferProgress(const DataTransfer& value) { SetDataTransferProgress(value); return *this;}
    inline JobMetadata& WithDataTransferProgress(DataTransfer&& value) { SetDataTransferProgress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Links to Amazon S3 presigned URLs for the job report and logs. For import
     * jobs, the PDF job report becomes available at the end of the import process. For
     * export jobs, your job report typically becomes available while the Snow device
     * for your job part is being delivered to you.</p>
     */
    inline const JobLogs& GetJobLogInfo() const{ return m_jobLogInfo; }
    inline bool JobLogInfoHasBeenSet() const { return m_jobLogInfoHasBeenSet; }
    inline void SetJobLogInfo(const JobLogs& value) { m_jobLogInfoHasBeenSet = true; m_jobLogInfo = value; }
    inline void SetJobLogInfo(JobLogs&& value) { m_jobLogInfoHasBeenSet = true; m_jobLogInfo = std::move(value); }
    inline JobMetadata& WithJobLogInfo(const JobLogs& value) { SetJobLogInfo(value); return *this;}
    inline JobMetadata& WithJobLogInfo(JobLogs&& value) { SetJobLogInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 39-character ID for the cluster, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline JobMetadata& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline JobMetadata& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline JobMetadata& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the address that you want a job shipped to, after it will be
     * shipped to its primary address. This field is not supported in most regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const{ return m_forwardingAddressId; }
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }
    inline void SetForwardingAddressId(const Aws::String& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = value; }
    inline void SetForwardingAddressId(Aws::String&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::move(value); }
    inline void SetForwardingAddressId(const char* value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId.assign(value); }
    inline JobMetadata& WithForwardingAddressId(const Aws::String& value) { SetForwardingAddressId(value); return *this;}
    inline JobMetadata& WithForwardingAddressId(Aws::String&& value) { SetForwardingAddressId(std::move(value)); return *this;}
    inline JobMetadata& WithForwardingAddressId(const char* value) { SetForwardingAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata associated with the tax documents required in your Amazon Web
     * Services Region.</p>
     */
    inline const TaxDocuments& GetTaxDocuments() const{ return m_taxDocuments; }
    inline bool TaxDocumentsHasBeenSet() const { return m_taxDocumentsHasBeenSet; }
    inline void SetTaxDocuments(const TaxDocuments& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = value; }
    inline void SetTaxDocuments(TaxDocuments&& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = std::move(value); }
    inline JobMetadata& WithTaxDocuments(const TaxDocuments& value) { SetTaxDocuments(value); return *this;}
    inline JobMetadata& WithTaxDocuments(TaxDocuments&& value) { SetTaxDocuments(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeviceConfiguration& GetDeviceConfiguration() const{ return m_deviceConfiguration; }
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }
    inline void SetDeviceConfiguration(const DeviceConfiguration& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }
    inline void SetDeviceConfiguration(DeviceConfiguration&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::move(value); }
    inline JobMetadata& WithDeviceConfiguration(const DeviceConfiguration& value) { SetDeviceConfiguration(value); return *this;}
    inline JobMetadata& WithDeviceConfiguration(DeviceConfiguration&& value) { SetDeviceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to securely operate and manage Snowcone devices remotely from
     * outside of your internal network. When set to <code>INSTALLED_AUTOSTART</code>,
     * remote management will automatically be available when the device arrives at
     * your location. Otherwise, you need to use the Snowball Client to manage the
     * device.</p>
     */
    inline const RemoteManagement& GetRemoteManagement() const{ return m_remoteManagement; }
    inline bool RemoteManagementHasBeenSet() const { return m_remoteManagementHasBeenSet; }
    inline void SetRemoteManagement(const RemoteManagement& value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = value; }
    inline void SetRemoteManagement(RemoteManagement&& value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = std::move(value); }
    inline JobMetadata& WithRemoteManagement(const RemoteManagement& value) { SetRemoteManagement(value); return *this;}
    inline JobMetadata& WithRemoteManagement(RemoteManagement&& value) { SetRemoteManagement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline const Aws::String& GetLongTermPricingId() const{ return m_longTermPricingId; }
    inline bool LongTermPricingIdHasBeenSet() const { return m_longTermPricingIdHasBeenSet; }
    inline void SetLongTermPricingId(const Aws::String& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = value; }
    inline void SetLongTermPricingId(Aws::String&& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = std::move(value); }
    inline void SetLongTermPricingId(const char* value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId.assign(value); }
    inline JobMetadata& WithLongTermPricingId(const Aws::String& value) { SetLongTermPricingId(value); return *this;}
    inline JobMetadata& WithLongTermPricingId(Aws::String&& value) { SetLongTermPricingId(std::move(value)); return *this;}
    inline JobMetadata& WithLongTermPricingId(const char* value) { SetLongTermPricingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents metadata and configuration settings for services on an Amazon Web
     * Services Snow Family device.</p>
     */
    inline const OnDeviceServiceConfiguration& GetOnDeviceServiceConfiguration() const{ return m_onDeviceServiceConfiguration; }
    inline bool OnDeviceServiceConfigurationHasBeenSet() const { return m_onDeviceServiceConfigurationHasBeenSet; }
    inline void SetOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = value; }
    inline void SetOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = std::move(value); }
    inline JobMetadata& WithOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { SetOnDeviceServiceConfiguration(value); return *this;}
    inline JobMetadata& WithOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { SetOnDeviceServiceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest impact level of data that will be stored or processed on the
     * device, provided at job creation.</p>
     */
    inline const ImpactLevel& GetImpactLevel() const{ return m_impactLevel; }
    inline bool ImpactLevelHasBeenSet() const { return m_impactLevelHasBeenSet; }
    inline void SetImpactLevel(const ImpactLevel& value) { m_impactLevelHasBeenSet = true; m_impactLevel = value; }
    inline void SetImpactLevel(ImpactLevel&& value) { m_impactLevelHasBeenSet = true; m_impactLevel = std::move(value); }
    inline JobMetadata& WithImpactLevel(const ImpactLevel& value) { SetImpactLevel(value); return *this;}
    inline JobMetadata& WithImpactLevel(ImpactLevel&& value) { SetImpactLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information identifying the person picking up the device.</p>
     */
    inline const PickupDetails& GetPickupDetails() const{ return m_pickupDetails; }
    inline bool PickupDetailsHasBeenSet() const { return m_pickupDetailsHasBeenSet; }
    inline void SetPickupDetails(const PickupDetails& value) { m_pickupDetailsHasBeenSet = true; m_pickupDetails = value; }
    inline void SetPickupDetails(PickupDetails&& value) { m_pickupDetailsHasBeenSet = true; m_pickupDetails = std::move(value); }
    inline JobMetadata& WithPickupDetails(const PickupDetails& value) { SetPickupDetails(value); return *this;}
    inline JobMetadata& WithPickupDetails(PickupDetails&& value) { SetPickupDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique ID associated with a device.</p>
     */
    inline const Aws::String& GetSnowballId() const{ return m_snowballId; }
    inline bool SnowballIdHasBeenSet() const { return m_snowballIdHasBeenSet; }
    inline void SetSnowballId(const Aws::String& value) { m_snowballIdHasBeenSet = true; m_snowballId = value; }
    inline void SetSnowballId(Aws::String&& value) { m_snowballIdHasBeenSet = true; m_snowballId = std::move(value); }
    inline void SetSnowballId(const char* value) { m_snowballIdHasBeenSet = true; m_snowballId.assign(value); }
    inline JobMetadata& WithSnowballId(const Aws::String& value) { SetSnowballId(value); return *this;}
    inline JobMetadata& WithSnowballId(Aws::String&& value) { SetSnowballId(std::move(value)); return *this;}
    inline JobMetadata& WithSnowballId(const char* value) { SetSnowballId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobState m_jobState;
    bool m_jobStateHasBeenSet = false;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    SnowballType m_snowballType;
    bool m_snowballTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
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

    SnowballCapacity m_snowballCapacityPreference;
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

    RemoteManagement m_remoteManagement;
    bool m_remoteManagementHasBeenSet = false;

    Aws::String m_longTermPricingId;
    bool m_longTermPricingIdHasBeenSet = false;

    OnDeviceServiceConfiguration m_onDeviceServiceConfiguration;
    bool m_onDeviceServiceConfigurationHasBeenSet = false;

    ImpactLevel m_impactLevel;
    bool m_impactLevelHasBeenSet = false;

    PickupDetails m_pickupDetails;
    bool m_pickupDetailsHasBeenSet = false;

    Aws::String m_snowballId;
    bool m_snowballIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
