/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/OnDeviceServiceConfiguration.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Notification.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class UpdateClusterRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API UpdateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The cluster ID of the cluster that you want to update, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline UpdateClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline UpdateClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * cluster. To create a role ARN, use the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in Identity and Access Management (IAM).</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline UpdateClusterRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline UpdateClusterRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of this cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline UpdateClusterRequest& WithResources(const JobResource& value) { SetResources(value); return *this;}
    inline UpdateClusterRequest& WithResources(JobResource&& value) { SetResources(std::move(value)); return *this;}
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
    inline UpdateClusterRequest& WithOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { SetOnDeviceServiceConfiguration(value); return *this;}
    inline UpdateClusterRequest& WithOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { SetOnDeviceServiceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = std::move(value); }
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }
    inline UpdateClusterRequest& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}
    inline UpdateClusterRequest& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithAddressId(const char* value) { SetAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated shipping option value of this cluster's <a>ShippingDetails</a>
     * object.</p>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = std::move(value); }
    inline UpdateClusterRequest& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}
    inline UpdateClusterRequest& WithShippingOption(ShippingOption&& value) { SetShippingOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new or updated <a>Notification</a> object.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }
    inline UpdateClusterRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}
    inline UpdateClusterRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated ID for the forwarding address for a cluster. This field is not
     * supported in most regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const{ return m_forwardingAddressId; }
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }
    inline void SetForwardingAddressId(const Aws::String& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = value; }
    inline void SetForwardingAddressId(Aws::String&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::move(value); }
    inline void SetForwardingAddressId(const char* value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId.assign(value); }
    inline UpdateClusterRequest& WithForwardingAddressId(const Aws::String& value) { SetForwardingAddressId(value); return *this;}
    inline UpdateClusterRequest& WithForwardingAddressId(Aws::String&& value) { SetForwardingAddressId(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithForwardingAddressId(const char* value) { SetForwardingAddressId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    JobResource m_resources;
    bool m_resourcesHasBeenSet = false;

    OnDeviceServiceConfiguration m_onDeviceServiceConfiguration;
    bool m_onDeviceServiceConfigurationHasBeenSet = false;

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;

    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    Aws::String m_forwardingAddressId;
    bool m_forwardingAddressIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
