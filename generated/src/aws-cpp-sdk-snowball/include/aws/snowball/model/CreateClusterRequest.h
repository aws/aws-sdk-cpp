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
#include <aws/snowball/model/SnowballType.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Notification.h>
#include <aws/snowball/model/TaxDocuments.h>
#include <aws/snowball/model/RemoteManagement.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/SnowballCapacity.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of job for this cluster. Currently, the only job type supported for
     * clusters is <code>LOCAL_USE</code>.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline CreateClusterRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline CreateClusterRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources associated with the cluster job. These resources include Amazon
     * S3 buckets and optional Lambda functions written in the Python language. </p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline CreateClusterRequest& WithResources(const JobResource& value) { SetResources(value); return *this;}
    inline CreateClusterRequest& WithResources(JobResource&& value) { SetResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family device clusters support Amazon S3 and NFS (Network File System).</p>
     */
    inline const OnDeviceServiceConfiguration& GetOnDeviceServiceConfiguration() const{ return m_onDeviceServiceConfiguration; }
    inline bool OnDeviceServiceConfigurationHasBeenSet() const { return m_onDeviceServiceConfigurationHasBeenSet; }
    inline void SetOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = value; }
    inline void SetOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = std::move(value); }
    inline CreateClusterRequest& WithOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { SetOnDeviceServiceConfiguration(value); return *this;}
    inline CreateClusterRequest& WithOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { SetOnDeviceServiceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of this specific cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the address that you want the cluster shipped to.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = std::move(value); }
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }
    inline CreateClusterRequest& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}
    inline CreateClusterRequest& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}
    inline CreateClusterRequest& WithAddressId(const char* value) { SetAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>KmsKeyARN</code> value that you want to associate with this
     * cluster. <code>KmsKeyARN</code> values are created by using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in Key Management Service (KMS). </p>
     */
    inline const Aws::String& GetKmsKeyARN() const{ return m_kmsKeyARN; }
    inline bool KmsKeyARNHasBeenSet() const { return m_kmsKeyARNHasBeenSet; }
    inline void SetKmsKeyARN(const Aws::String& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }
    inline void SetKmsKeyARN(Aws::String&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = std::move(value); }
    inline void SetKmsKeyARN(const char* value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN.assign(value); }
    inline CreateClusterRequest& WithKmsKeyARN(const Aws::String& value) { SetKmsKeyARN(value); return *this;}
    inline CreateClusterRequest& WithKmsKeyARN(Aws::String&& value) { SetKmsKeyARN(std::move(value)); return *this;}
    inline CreateClusterRequest& WithKmsKeyARN(const char* value) { SetKmsKeyARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>RoleARN</code> that you want to associate with this cluster.
     * <code>RoleArn</code> values are created by using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in Identity and Access Management (IAM).</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline CreateClusterRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline CreateClusterRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline CreateClusterRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Snow Family devices to use for this cluster. </p>  <p>For
     * cluster jobs, Amazon Web Services Snow Family currently supports only the
     * <code>EDGE</code> device type.</p>  <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline const SnowballType& GetSnowballType() const{ return m_snowballType; }
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }
    inline void SetSnowballType(const SnowballType& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }
    inline void SetSnowballType(SnowballType&& value) { m_snowballTypeHasBeenSet = true; m_snowballType = std::move(value); }
    inline CreateClusterRequest& WithSnowballType(const SnowballType& value) { SetSnowballType(value); return *this;}
    inline CreateClusterRequest& WithSnowballType(SnowballType&& value) { SetSnowballType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shipping speed for each node in this cluster. This speed doesn't dictate
     * how soon you'll get each Snowball Edge device, rather it represents how quickly
     * each device moves to its destination while in transit. Regional shipping speeds
     * are as follows: </p> <ul> <li> <p>In Australia, you have access to express
     * shipping. Typically, Snow devices shipped express are delivered in about a
     * day.</p> </li> <li> <p>In the European Union (EU), you have access to express
     * shipping. Typically, Snow devices shipped express are delivered in about a day.
     * In addition, most countries in the EU have access to standard shipping, which
     * typically takes less than a week, one way.</p> </li> <li> <p>In India, Snow
     * devices are delivered in one to seven days.</p> </li> <li> <p>In the United
     * States of America (US), you have access to one-day shipping and two-day
     * shipping.</p> </li> </ul> <ul> <li> <p>In Australia, you have access to express
     * shipping. Typically, devices shipped express are delivered in about a day.</p>
     * </li> <li> <p>In the European Union (EU), you have access to express shipping.
     * Typically, Snow devices shipped express are delivered in about a day. In
     * addition, most countries in the EU have access to standard shipping, which
     * typically takes less than a week, one way.</p> </li> <li> <p>In India, Snow
     * devices are delivered in one to seven days.</p> </li> <li> <p>In the US, you
     * have access to one-day shipping and two-day shipping.</p> </li> </ul>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = std::move(value); }
    inline CreateClusterRequest& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}
    inline CreateClusterRequest& WithShippingOption(ShippingOption&& value) { SetShippingOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Notification Service (Amazon SNS) notification settings for
     * this cluster.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline CreateClusterRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}
    inline CreateClusterRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forwarding address ID for a cluster. This field is not supported in most
     * regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const{ return m_forwardingAddressId; }
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }
    inline void SetForwardingAddressId(const Aws::String& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = value; }
    inline void SetForwardingAddressId(Aws::String&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::move(value); }
    inline void SetForwardingAddressId(const char* value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId.assign(value); }
    inline CreateClusterRequest& WithForwardingAddressId(const Aws::String& value) { SetForwardingAddressId(value); return *this;}
    inline CreateClusterRequest& WithForwardingAddressId(Aws::String&& value) { SetForwardingAddressId(std::move(value)); return *this;}
    inline CreateClusterRequest& WithForwardingAddressId(const char* value) { SetForwardingAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline const TaxDocuments& GetTaxDocuments() const{ return m_taxDocuments; }
    inline bool TaxDocumentsHasBeenSet() const { return m_taxDocumentsHasBeenSet; }
    inline void SetTaxDocuments(const TaxDocuments& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = value; }
    inline void SetTaxDocuments(TaxDocuments&& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = std::move(value); }
    inline CreateClusterRequest& WithTaxDocuments(const TaxDocuments& value) { SetTaxDocuments(value); return *this;}
    inline CreateClusterRequest& WithTaxDocuments(TaxDocuments&& value) { SetTaxDocuments(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows you to securely operate and manage Snow devices in a cluster remotely
     * from outside of your internal network. When set to
     * <code>INSTALLED_AUTOSTART</code>, remote management will automatically be
     * available when the device arrives at your location. Otherwise, you need to use
     * the Snowball Client to manage the device.</p>
     */
    inline const RemoteManagement& GetRemoteManagement() const{ return m_remoteManagement; }
    inline bool RemoteManagementHasBeenSet() const { return m_remoteManagementHasBeenSet; }
    inline void SetRemoteManagement(const RemoteManagement& value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = value; }
    inline void SetRemoteManagement(RemoteManagement&& value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = std::move(value); }
    inline CreateClusterRequest& WithRemoteManagement(const RemoteManagement& value) { SetRemoteManagement(value); return *this;}
    inline CreateClusterRequest& WithRemoteManagement(RemoteManagement&& value) { SetRemoteManagement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If provided, each job will be automatically created and associated with the
     * new cluster. If not provided, will be treated as 0.</p>
     */
    inline int GetInitialClusterSize() const{ return m_initialClusterSize; }
    inline bool InitialClusterSizeHasBeenSet() const { return m_initialClusterSizeHasBeenSet; }
    inline void SetInitialClusterSize(int value) { m_initialClusterSizeHasBeenSet = true; m_initialClusterSize = value; }
    inline CreateClusterRequest& WithInitialClusterSize(int value) { SetInitialClusterSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Force to create cluster when user attempts to overprovision or underprovision
     * a cluster. A cluster is overprovisioned or underprovisioned if the initial size
     * of the cluster is more (overprovisioned) or less (underprovisioned) than what
     * needed to meet capacity requirement specified with
     * <code>OnDeviceServiceConfiguration</code>.</p>
     */
    inline bool GetForceCreateJobs() const{ return m_forceCreateJobs; }
    inline bool ForceCreateJobsHasBeenSet() const { return m_forceCreateJobsHasBeenSet; }
    inline void SetForceCreateJobs(bool value) { m_forceCreateJobsHasBeenSet = true; m_forceCreateJobs = value; }
    inline CreateClusterRequest& WithForceCreateJobs(bool value) { SetForceCreateJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists long-term pricing id that will be used to associate with jobs
     * automatically created for the new cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLongTermPricingIds() const{ return m_longTermPricingIds; }
    inline bool LongTermPricingIdsHasBeenSet() const { return m_longTermPricingIdsHasBeenSet; }
    inline void SetLongTermPricingIds(const Aws::Vector<Aws::String>& value) { m_longTermPricingIdsHasBeenSet = true; m_longTermPricingIds = value; }
    inline void SetLongTermPricingIds(Aws::Vector<Aws::String>&& value) { m_longTermPricingIdsHasBeenSet = true; m_longTermPricingIds = std::move(value); }
    inline CreateClusterRequest& WithLongTermPricingIds(const Aws::Vector<Aws::String>& value) { SetLongTermPricingIds(value); return *this;}
    inline CreateClusterRequest& WithLongTermPricingIds(Aws::Vector<Aws::String>&& value) { SetLongTermPricingIds(std::move(value)); return *this;}
    inline CreateClusterRequest& AddLongTermPricingIds(const Aws::String& value) { m_longTermPricingIdsHasBeenSet = true; m_longTermPricingIds.push_back(value); return *this; }
    inline CreateClusterRequest& AddLongTermPricingIds(Aws::String&& value) { m_longTermPricingIdsHasBeenSet = true; m_longTermPricingIds.push_back(std::move(value)); return *this; }
    inline CreateClusterRequest& AddLongTermPricingIds(const char* value) { m_longTermPricingIdsHasBeenSet = true; m_longTermPricingIds.push_back(value); return *this; }
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
    inline CreateClusterRequest& WithSnowballCapacityPreference(const SnowballCapacity& value) { SetSnowballCapacityPreference(value); return *this;}
    inline CreateClusterRequest& WithSnowballCapacityPreference(SnowballCapacity&& value) { SetSnowballCapacityPreference(std::move(value)); return *this;}
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

    SnowballType m_snowballType;
    bool m_snowballTypeHasBeenSet = false;

    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    Aws::String m_forwardingAddressId;
    bool m_forwardingAddressIdHasBeenSet = false;

    TaxDocuments m_taxDocuments;
    bool m_taxDocumentsHasBeenSet = false;

    RemoteManagement m_remoteManagement;
    bool m_remoteManagementHasBeenSet = false;

    int m_initialClusterSize;
    bool m_initialClusterSizeHasBeenSet = false;

    bool m_forceCreateJobs;
    bool m_forceCreateJobsHasBeenSet = false;

    Aws::Vector<Aws::String> m_longTermPricingIds;
    bool m_longTermPricingIdsHasBeenSet = false;

    SnowballCapacity m_snowballCapacityPreference;
    bool m_snowballCapacityPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
