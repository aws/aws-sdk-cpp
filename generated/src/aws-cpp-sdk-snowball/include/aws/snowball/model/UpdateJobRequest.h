/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/Notification.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/OnDeviceServiceConfiguration.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/SnowballCapacity.h>
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
  class UpdateJobRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API UpdateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJob"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The job ID of the job that you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    UpdateJobRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * job. To create a role ARN, use the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>Identity
     * and Access Management (IAM) API action.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    UpdateJobRequest& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new or updated <a>Notification</a> object.</p>
     */
    inline const Notification& GetNotification() const { return m_notification; }
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }
    template<typename NotificationT = Notification>
    void SetNotification(NotificationT&& value) { m_notificationHasBeenSet = true; m_notification = std::forward<NotificationT>(value); }
    template<typename NotificationT = Notification>
    UpdateJobRequest& WithNotification(NotificationT&& value) { SetNotification(std::forward<NotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated <code>JobResource</code> object, or the updated
     * <a>JobResource</a> object. </p>
     */
    inline const JobResource& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = JobResource>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = JobResource>
    UpdateJobRequest& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
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
    UpdateJobRequest& WithOnDeviceServiceConfiguration(OnDeviceServiceConfigurationT&& value) { SetOnDeviceServiceConfiguration(std::forward<OnDeviceServiceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline const Aws::String& GetAddressId() const { return m_addressId; }
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }
    template<typename AddressIdT = Aws::String>
    void SetAddressId(AddressIdT&& value) { m_addressIdHasBeenSet = true; m_addressId = std::forward<AddressIdT>(value); }
    template<typename AddressIdT = Aws::String>
    UpdateJobRequest& WithAddressId(AddressIdT&& value) { SetAddressId(std::forward<AddressIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated shipping option value of this job's <a>ShippingDetails</a>
     * object.</p>
     */
    inline ShippingOption GetShippingOption() const { return m_shippingOption; }
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }
    inline void SetShippingOption(ShippingOption value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }
    inline UpdateJobRequest& WithShippingOption(ShippingOption value) { SetShippingOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of this job's <a>JobMetadata</a> object.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateJobRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated <code>SnowballCapacityPreference</code> of this job's
     * <a>JobMetadata</a> object. The 50 TB Snowballs are only available in the US
     * regions.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline SnowballCapacity GetSnowballCapacityPreference() const { return m_snowballCapacityPreference; }
    inline bool SnowballCapacityPreferenceHasBeenSet() const { return m_snowballCapacityPreferenceHasBeenSet; }
    inline void SetSnowballCapacityPreference(SnowballCapacity value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }
    inline UpdateJobRequest& WithSnowballCapacityPreference(SnowballCapacity value) { SetSnowballCapacityPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated ID for the forwarding address for a job. This field is not
     * supported in most regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const { return m_forwardingAddressId; }
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }
    template<typename ForwardingAddressIdT = Aws::String>
    void SetForwardingAddressId(ForwardingAddressIdT&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::forward<ForwardingAddressIdT>(value); }
    template<typename ForwardingAddressIdT = Aws::String>
    UpdateJobRequest& WithForwardingAddressId(ForwardingAddressIdT&& value) { SetForwardingAddressId(std::forward<ForwardingAddressIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PickupDetails& GetPickupDetails() const { return m_pickupDetails; }
    inline bool PickupDetailsHasBeenSet() const { return m_pickupDetailsHasBeenSet; }
    template<typename PickupDetailsT = PickupDetails>
    void SetPickupDetails(PickupDetailsT&& value) { m_pickupDetailsHasBeenSet = true; m_pickupDetails = std::forward<PickupDetailsT>(value); }
    template<typename PickupDetailsT = PickupDetails>
    UpdateJobRequest& WithPickupDetails(PickupDetailsT&& value) { SetPickupDetails(std::forward<PickupDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    JobResource m_resources;
    bool m_resourcesHasBeenSet = false;

    OnDeviceServiceConfiguration m_onDeviceServiceConfiguration;
    bool m_onDeviceServiceConfigurationHasBeenSet = false;

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;

    ShippingOption m_shippingOption{ShippingOption::NOT_SET};
    bool m_shippingOptionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SnowballCapacity m_snowballCapacityPreference{SnowballCapacity::NOT_SET};
    bool m_snowballCapacityPreferenceHasBeenSet = false;

    Aws::String m_forwardingAddressId;
    bool m_forwardingAddressIdHasBeenSet = false;

    PickupDetails m_pickupDetails;
    bool m_pickupDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
