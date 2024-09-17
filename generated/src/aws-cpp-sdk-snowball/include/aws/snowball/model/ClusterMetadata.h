/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ClusterState.h>
#include <aws/snowball/model/JobType.h>
#include <aws/snowball/model/SnowballType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Notification.h>
#include <aws/snowball/model/TaxDocuments.h>
#include <aws/snowball/model/OnDeviceServiceConfiguration.h>
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
   * <p>Contains metadata about a specific cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ClusterMetadata">AWS
   * API Reference</a></p>
   */
  class ClusterMetadata
  {
  public:
    AWS_SNOWBALL_API ClusterMetadata();
    AWS_SNOWBALL_API ClusterMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API ClusterMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline ClusterMetadata& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline ClusterMetadata& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline ClusterMetadata& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description of the cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ClusterMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ClusterMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ClusterMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>KmsKeyARN</code> Amazon Resource Name (ARN) associated with this
     * cluster. This ARN was created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * API action in Key Management Service (KMS.</p>
     */
    inline const Aws::String& GetKmsKeyARN() const{ return m_kmsKeyARN; }
    inline bool KmsKeyARNHasBeenSet() const { return m_kmsKeyARNHasBeenSet; }
    inline void SetKmsKeyARN(const Aws::String& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }
    inline void SetKmsKeyARN(Aws::String&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = std::move(value); }
    inline void SetKmsKeyARN(const char* value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN.assign(value); }
    inline ClusterMetadata& WithKmsKeyARN(const Aws::String& value) { SetKmsKeyARN(value); return *this;}
    inline ClusterMetadata& WithKmsKeyARN(Aws::String&& value) { SetKmsKeyARN(std::move(value)); return *this;}
    inline ClusterMetadata& WithKmsKeyARN(const char* value) { SetKmsKeyARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN associated with this cluster. This ARN was created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in Identity and Access Management (IAM).</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline ClusterMetadata& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline ClusterMetadata& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline ClusterMetadata& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the cluster.</p>
     */
    inline const ClusterState& GetClusterState() const{ return m_clusterState; }
    inline bool ClusterStateHasBeenSet() const { return m_clusterStateHasBeenSet; }
    inline void SetClusterState(const ClusterState& value) { m_clusterStateHasBeenSet = true; m_clusterState = value; }
    inline void SetClusterState(ClusterState&& value) { m_clusterStateHasBeenSet = true; m_clusterState = std::move(value); }
    inline ClusterMetadata& WithClusterState(const ClusterState& value) { SetClusterState(value); return *this;}
    inline ClusterMetadata& WithClusterState(ClusterState&& value) { SetClusterState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job for this cluster. Currently, the only job type supported for
     * clusters is <code>LOCAL_USE</code>.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline ClusterMetadata& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline ClusterMetadata& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Snowcone device to use for this cluster. </p>  <p>For
     * cluster jobs, Amazon Web Services Snow Family currently supports only the
     * <code>EDGE</code> device type.</p> 
     */
    inline const SnowballType& GetSnowballType() const{ return m_snowballType; }
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }
    inline void SetSnowballType(const SnowballType& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }
    inline void SetSnowballType(SnowballType&& value) { m_snowballTypeHasBeenSet = true; m_snowballType = std::move(value); }
    inline ClusterMetadata& WithSnowballType(const SnowballType& value) { SetSnowballType(value); return *this;}
    inline ClusterMetadata& WithSnowballType(SnowballType&& value) { SetSnowballType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date for this cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ClusterMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ClusterMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline ClusterMetadata& WithResources(const JobResource& value) { SetResources(value); return *this;}
    inline ClusterMetadata& WithResources(JobResource&& value) { SetResources(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = std::move(value); }
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }
    inline ClusterMetadata& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}
    inline ClusterMetadata& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}
    inline ClusterMetadata& WithAddressId(const char* value) { SetAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shipping speed for each node in this cluster. This speed doesn't dictate
     * how soon you'll get each device, rather it represents how quickly each device
     * moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p> <ul> <li> <p>In Australia, you have access to express shipping.
     * Typically, devices shipped express are delivered in about a day.</p> </li> <li>
     * <p>In the European Union (EU), you have access to express shipping. Typically,
     * Snow devices shipped express are delivered in about a day. In addition, most
     * countries in the EU have access to standard shipping, which typically takes less
     * than a week, one way.</p> </li> <li> <p>In India, Snow devices are delivered in
     * one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = std::move(value); }
    inline ClusterMetadata& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}
    inline ClusterMetadata& WithShippingOption(ShippingOption&& value) { SetShippingOption(std::move(value)); return *this;}
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
    inline ClusterMetadata& WithNotification(const Notification& value) { SetNotification(value); return *this;}
    inline ClusterMetadata& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the address that you want a cluster shipped to, after it will be
     * shipped to its primary address. This field is not supported in most regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const{ return m_forwardingAddressId; }
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }
    inline void SetForwardingAddressId(const Aws::String& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = value; }
    inline void SetForwardingAddressId(Aws::String&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::move(value); }
    inline void SetForwardingAddressId(const char* value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId.assign(value); }
    inline ClusterMetadata& WithForwardingAddressId(const Aws::String& value) { SetForwardingAddressId(value); return *this;}
    inline ClusterMetadata& WithForwardingAddressId(Aws::String&& value) { SetForwardingAddressId(std::move(value)); return *this;}
    inline ClusterMetadata& WithForwardingAddressId(const char* value) { SetForwardingAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline const TaxDocuments& GetTaxDocuments() const{ return m_taxDocuments; }
    inline bool TaxDocumentsHasBeenSet() const { return m_taxDocumentsHasBeenSet; }
    inline void SetTaxDocuments(const TaxDocuments& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = value; }
    inline void SetTaxDocuments(TaxDocuments&& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = std::move(value); }
    inline ClusterMetadata& WithTaxDocuments(const TaxDocuments& value) { SetTaxDocuments(value); return *this;}
    inline ClusterMetadata& WithTaxDocuments(TaxDocuments&& value) { SetTaxDocuments(std::move(value)); return *this;}
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
    inline ClusterMetadata& WithOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { SetOnDeviceServiceConfiguration(value); return *this;}
    inline ClusterMetadata& WithOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { SetOnDeviceServiceConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyARN;
    bool m_kmsKeyARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    ClusterState m_clusterState;
    bool m_clusterStateHasBeenSet = false;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    SnowballType m_snowballType;
    bool m_snowballTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    JobResource m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;

    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    Aws::String m_forwardingAddressId;
    bool m_forwardingAddressIdHasBeenSet = false;

    TaxDocuments m_taxDocuments;
    bool m_taxDocumentsHasBeenSet = false;

    OnDeviceServiceConfiguration m_onDeviceServiceConfiguration;
    bool m_onDeviceServiceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
