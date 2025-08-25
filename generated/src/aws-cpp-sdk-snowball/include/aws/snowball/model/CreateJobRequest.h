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
    AWS_SNOWBALL_API CreateJobRequest() = default;

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
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline CreateJobRequest& WithJobType(JobType value) { SetJobType(value); return *this;}
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
    inline const JobResource& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = JobResource>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = JobResource>
    CreateJobRequest& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System) and the Amazon Web
     * Services Storage Gateway service Tape Gateway type.</p>
     */
    inline const OnDeviceServiceConfiguration& GetOnDeviceServiceConfiguration() const { return m_onDeviceServiceConfiguration; }
    inline bool OnDeviceServiceConfigurationHasBeenSet() const { return m_onDeviceServiceConfigurationHasBeenSet; }
    template<typename OnDeviceServiceConfigurationT = OnDeviceServiceConfiguration>
    void SetOnDeviceServiceConfiguration(OnDeviceServiceConfigurationT&& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = std::forward<OnDeviceServiceConfigurationT>(value); }
    template<typename OnDeviceServiceConfigurationT = OnDeviceServiceConfiguration>
    CreateJobRequest& WithOnDeviceServiceConfiguration(OnDeviceServiceConfigurationT&& value) { SetOnDeviceServiceConfiguration(std::forward<OnDeviceServiceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateJobRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreateJobRequest& WithAddressId(AddressIdT&& value) { SetAddressId(std::forward<AddressIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline const Aws::String& GetKmsKeyARN() const { return m_kmsKeyARN; }
    inline bool KmsKeyARNHasBeenSet() const { return m_kmsKeyARNHasBeenSet; }
    template<typename KmsKeyARNT = Aws::String>
    void SetKmsKeyARN(KmsKeyARNT&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = std::forward<KmsKeyARNT>(value); }
    template<typename KmsKeyARNT = Aws::String>
    CreateJobRequest& WithKmsKeyARN(KmsKeyARNT&& value) { SetKmsKeyARN(std::forward<KmsKeyARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    CreateJobRequest& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
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
    inline SnowballCapacity GetSnowballCapacityPreference() const { return m_snowballCapacityPreference; }
    inline bool SnowballCapacityPreferenceHasBeenSet() const { return m_snowballCapacityPreferenceHasBeenSet; }
    inline void SetSnowballCapacityPreference(SnowballCapacity value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }
    inline CreateJobRequest& WithSnowballCapacityPreference(SnowballCapacity value) { SetSnowballCapacityPreference(value); return *this;}
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
    inline ShippingOption GetShippingOption() const { return m_shippingOption; }
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }
    inline void SetShippingOption(ShippingOption value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }
    inline CreateJobRequest& WithShippingOption(ShippingOption value) { SetShippingOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline const Notification& GetNotification() const { return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    template<typename NotificationT = Notification>
    void SetNotification(NotificationT&& value) { m_notificationHasBeenSet = true; m_notification = std::forward<NotificationT>(value); }
    template<typename NotificationT = Notification>
    CreateJobRequest& WithNotification(NotificationT&& value) { SetNotification(std::forward<NotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    CreateJobRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
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
    inline SnowballType GetSnowballType() const { return m_snowballType; }
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }
    inline void SetSnowballType(SnowballType value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }
    inline CreateJobRequest& WithSnowballType(SnowballType value) { SetSnowballType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const { return m_forwardingAddressId; }
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }
    template<typename ForwardingAddressIdT = Aws::String>
    void SetForwardingAddressId(ForwardingAddressIdT&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::forward<ForwardingAddressIdT>(value); }
    template<typename ForwardingAddressIdT = Aws::String>
    CreateJobRequest& WithForwardingAddressId(ForwardingAddressIdT&& value) { SetForwardingAddressId(std::forward<ForwardingAddressIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline const TaxDocuments& GetTaxDocuments() const { return m_taxDocuments; }
    inline bool TaxDocumentsHasBeenSet() const { return m_taxDocumentsHasBeenSet; }
    template<typename TaxDocumentsT = TaxDocuments>
    void SetTaxDocuments(TaxDocumentsT&& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = std::forward<TaxDocumentsT>(value); }
    template<typename TaxDocumentsT = TaxDocuments>
    CreateJobRequest& WithTaxDocuments(TaxDocumentsT&& value) { SetTaxDocuments(std::forward<TaxDocumentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the device configuration for an Snowball Edge job.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline const DeviceConfiguration& GetDeviceConfiguration() const { return m_deviceConfiguration; }
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }
    template<typename DeviceConfigurationT = DeviceConfiguration>
    void SetDeviceConfiguration(DeviceConfigurationT&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::forward<DeviceConfigurationT>(value); }
    template<typename DeviceConfigurationT = DeviceConfiguration>
    CreateJobRequest& WithDeviceConfiguration(DeviceConfigurationT&& value) { SetDeviceConfiguration(std::forward<DeviceConfigurationT>(value)); return *this;}
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
    inline RemoteManagement GetRemoteManagement() const { return m_remoteManagement; }
    inline bool RemoteManagementHasBeenSet() const { return m_remoteManagementHasBeenSet; }
    inline void SetRemoteManagement(RemoteManagement value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = value; }
    inline CreateJobRequest& WithRemoteManagement(RemoteManagement value) { SetRemoteManagement(value); return *this;}
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
    CreateJobRequest& WithLongTermPricingId(LongTermPricingIdT&& value) { SetLongTermPricingId(std::forward<LongTermPricingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest impact level of data that will be stored or processed on the
     * device, provided at job creation.</p>
     */
    inline ImpactLevel GetImpactLevel() const { return m_impactLevel; }
    inline bool ImpactLevelHasBeenSet() const { return m_impactLevelHasBeenSet; }
    inline void SetImpactLevel(ImpactLevel value) { m_impactLevelHasBeenSet = true; m_impactLevel = value; }
    inline CreateJobRequest& WithImpactLevel(ImpactLevel value) { SetImpactLevel(value); return *this;}
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
    CreateJobRequest& WithPickupDetails(PickupDetailsT&& value) { SetPickupDetails(std::forward<PickupDetailsT>(value)); return *this;}
    ///@}
  private:

    JobType m_jobType{JobType::NOT_SET};
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

    SnowballCapacity m_snowballCapacityPreference{SnowballCapacity::NOT_SET};
    bool m_snowballCapacityPreferenceHasBeenSet = false;

    ShippingOption m_shippingOption{ShippingOption::NOT_SET};
    bool m_shippingOptionHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    SnowballType m_snowballType{SnowballType::NOT_SET};
    bool m_snowballTypeHasBeenSet = false;

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

    ImpactLevel m_impactLevel{ImpactLevel::NOT_SET};
    bool m_impactLevelHasBeenSet = false;

    PickupDetails m_pickupDetails;
    bool m_pickupDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
