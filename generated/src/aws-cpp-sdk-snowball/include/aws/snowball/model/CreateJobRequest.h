/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/snowball/model/JobType.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/OnDeviceServiceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/SnowballCapacity.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Notification.h>
#include <aws/snowball/model/SnowballType.h>
#include <aws/snowball/model/TaxDocuments.h>
#include <aws/snowball/model/DeviceConfiguration.h>
#include <aws/snowball/model/RemoteManagement.h>
#include <aws/snowball/model/ImpactLevel.h>
#include <aws/snowball/model/PickupDetails.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline CreateJobRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline CreateJobRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline CreateJobRequest& WithResources(const JobResource& value) { SetResources(value); return *this;}
    inline CreateJobRequest& WithResources(JobResource&& value) { SetResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System) and the Amazon Web
     * Services Storage Gateway service Tape Gateway type.</p>
     */
    inline const OnDeviceServiceConfiguration& GetOnDeviceServiceConfiguration() const{ return m_onDeviceServiceConfiguration; }
    inline bool OnDeviceServiceConfigurationHasBeenSet() const { return m_onDeviceServiceConfigurationHasBeenSet; }
    inline void SetOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = value; }
    inline void SetOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = std::move(value); }
    inline CreateJobRequest& WithOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { SetOnDeviceServiceConfiguration(value); return *this;}
    inline CreateJobRequest& WithOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { SetOnDeviceServiceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline CreateJobRequest& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}
    inline CreateJobRequest& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}
    inline CreateJobRequest& WithAddressId(const char* value) { SetAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline const Aws::String& GetKmsKeyARN() const{ return m_kmsKeyARN; }
    inline bool KmsKeyARNHasBeenSet() const { return m_kmsKeyARNHasBeenSet; }
    inline void SetKmsKeyARN(const Aws::String& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }
    inline void SetKmsKeyARN(Aws::String&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = std::move(value); }
    inline void SetKmsKeyARN(const char* value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN.assign(value); }
    inline CreateJobRequest& WithKmsKeyARN(const Aws::String& value) { SetKmsKeyARN(value); return *this;}
    inline CreateJobRequest& WithKmsKeyARN(Aws::String&& value) { SetKmsKeyARN(std::move(value)); return *this;}
    inline CreateJobRequest& WithKmsKeyARN(const char* value) { SetKmsKeyARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline CreateJobRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline CreateJobRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline CreateJobRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snow device you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline const SnowballCapacity& GetSnowballCapacityPreference() const{ return m_snowballCapacityPreference; }
    inline bool SnowballCapacityPreferenceHasBeenSet() const { return m_snowballCapacityPreferenceHasBeenSet; }
    inline void SetSnowballCapacityPreference(const SnowballCapacity& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }
    inline void SetSnowballCapacityPreference(SnowballCapacity&& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = std::move(value); }
    inline CreateJobRequest& WithSnowballCapacityPreference(const SnowballCapacity& value) { SetSnowballCapacityPreference(value); return *this;}
    inline CreateJobRequest& WithSnowballCapacityPreference(SnowballCapacity&& value) { SetSnowballCapacityPreference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shipping speed for this job. This speed doesn't dictate how soon you'll
     * get the Snow device, rather it represents how quickly the Snow device moves to
     * its destination while in transit. Regional shipping speeds are as follows:</p>
     * <ul> <li> <p>In Australia, you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day.</p> </li> <li> <p>In the
     * European Union (EU), you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day. In addition, most
     * countries in the EU have access to standard shipping, which typically takes less
     * than a week, one way.</p> </li> <li> <p>In India, Snow devices are delivered in
     * one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = std::move(value); }
    inline CreateJobRequest& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}
    inline CreateJobRequest& WithShippingOption(ShippingOption&& value) { SetShippingOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline CreateJobRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}
    inline CreateJobRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline CreateJobRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline CreateJobRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline CreateJobRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Snow Family devices to use for this job. </p>  <p>For
     * cluster jobs, Amazon Web Services Snow Family currently supports only the
     * <code>EDGE</code> device type.</p>  <p>The type of Amazon Web Services
     * Snow device to use for this job. Currently, the only supported device type for
     * cluster jobs is <code>EDGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/snowball/latest/developer-guide/device-differences.html">Snowball
     * Edge Device Options</a> in the Snowball Edge Developer Guide.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline const SnowballType& GetSnowballType() const{ return m_snowballType; }
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }
    inline void SetSnowballType(const SnowballType& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }
    inline void SetSnowballType(SnowballType&& value) { m_snowballTypeHasBeenSet = true; m_snowballType = std::move(value); }
    inline CreateJobRequest& WithSnowballType(const SnowballType& value) { SetSnowballType(value); return *this;}
    inline CreateJobRequest& WithSnowballType(SnowballType&& value) { SetSnowballType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const{ return m_forwardingAddressId; }
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }
    inline void SetForwardingAddressId(const Aws::String& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = value; }
    inline void SetForwardingAddressId(Aws::String&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::move(value); }
    inline void SetForwardingAddressId(const char* value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId.assign(value); }
    inline CreateJobRequest& WithForwardingAddressId(const Aws::String& value) { SetForwardingAddressId(value); return *this;}
    inline CreateJobRequest& WithForwardingAddressId(Aws::String&& value) { SetForwardingAddressId(std::move(value)); return *this;}
    inline CreateJobRequest& WithForwardingAddressId(const char* value) { SetForwardingAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline const TaxDocuments& GetTaxDocuments() const{ return m_taxDocuments; }
    inline bool TaxDocumentsHasBeenSet() const { return m_taxDocumentsHasBeenSet; }
    inline void SetTaxDocuments(const TaxDocuments& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = value; }
    inline void SetTaxDocuments(TaxDocuments&& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = std::move(value); }
    inline CreateJobRequest& WithTaxDocuments(const TaxDocuments& value) { SetTaxDocuments(value); return *this;}
    inline CreateJobRequest& WithTaxDocuments(TaxDocuments&& value) { SetTaxDocuments(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the device configuration for an Snowcone job.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline const DeviceConfiguration& GetDeviceConfiguration() const{ return m_deviceConfiguration; }
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }
    inline void SetDeviceConfiguration(const DeviceConfiguration& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }
    inline void SetDeviceConfiguration(DeviceConfiguration&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::move(value); }
    inline CreateJobRequest& WithDeviceConfiguration(const DeviceConfiguration& value) { SetDeviceConfiguration(value); return *this;}
    inline CreateJobRequest& WithDeviceConfiguration(DeviceConfiguration&& value) { SetDeviceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to securely operate and manage Snowcone devices remotely from
     * outside of your internal network. When set to <code>INSTALLED_AUTOSTART</code>,
     * remote management will automatically be available when the device arrives at
     * your location. Otherwise, you need to use the Snowball Edge client to manage the
     * device. When set to <code>NOT_INSTALLED</code>, remote management will not be
     * available on the device. </p>
     */
    inline const RemoteManagement& GetRemoteManagement() const{ return m_remoteManagement; }
    inline bool RemoteManagementHasBeenSet() const { return m_remoteManagementHasBeenSet; }
    inline void SetRemoteManagement(const RemoteManagement& value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = value; }
    inline void SetRemoteManagement(RemoteManagement&& value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = std::move(value); }
    inline CreateJobRequest& WithRemoteManagement(const RemoteManagement& value) { SetRemoteManagement(value); return *this;}
    inline CreateJobRequest& WithRemoteManagement(RemoteManagement&& value) { SetRemoteManagement(std::move(value)); return *this;}
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
    inline CreateJobRequest& WithLongTermPricingId(const Aws::String& value) { SetLongTermPricingId(value); return *this;}
    inline CreateJobRequest& WithLongTermPricingId(Aws::String&& value) { SetLongTermPricingId(std::move(value)); return *this;}
    inline CreateJobRequest& WithLongTermPricingId(const char* value) { SetLongTermPricingId(value); return *this;}
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
    inline CreateJobRequest& WithImpactLevel(const ImpactLevel& value) { SetImpactLevel(value); return *this;}
    inline CreateJobRequest& WithImpactLevel(ImpactLevel&& value) { SetImpactLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information identifying the person picking up the device.</p>
     */
    inline const PickupDetails& GetPickupDetails() const{ return m_pickupDetails; }
    inline bool PickupDetailsHasBeenSet() const { return m_pickupDetailsHasBeenSet; }
    inline void SetPickupDetails(const PickupDetails& value) { m_pickupDetailsHasBeenSet = true; m_pickupDetails = value; }
    inline void SetPickupDetails(PickupDetails&& value) { m_pickupDetailsHasBeenSet = true; m_pickupDetails = std::move(value); }
    inline CreateJobRequest& WithPickupDetails(const PickupDetails& value) { SetPickupDetails(value); return *this;}
    inline CreateJobRequest& WithPickupDetails(PickupDetails&& value) { SetPickupDetails(std::move(value)); return *this;}
    ///@}
  private:

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    JobResource m_resources;
    bool m_resourcesHasBeenSet = false;

    OnDeviceServiceConfiguration m_onDeviceServiceConfiguration;
    bool m_onDeviceServiceConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;

    Aws::String m_kmsKeyARN;
    bool m_kmsKeyARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    SnowballCapacity m_snowballCapacityPreference;
    bool m_snowballCapacityPreferenceHasBeenSet = false;

    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    SnowballType m_snowballType;
    bool m_snowballTypeHasBeenSet = false;

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

    ImpactLevel m_impactLevel;
    bool m_impactLevelHasBeenSet = false;

    PickupDetails m_pickupDetails;
    bool m_pickupDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
