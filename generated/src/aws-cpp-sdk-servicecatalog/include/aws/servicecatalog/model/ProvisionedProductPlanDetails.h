/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanType.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/UpdateProvisioningParameter.h>
#include <aws/servicecatalog/model/Tag.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionedProductPlanDetails">AWS
   * API Reference</a></p>
   */
  class ProvisionedProductPlanDetails
  {
  public:
    AWS_SERVICECATALOG_API ProvisionedProductPlanDetails();
    AWS_SERVICECATALOG_API ProvisionedProductPlanDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisionedProductPlanDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ProvisionedProductPlanDetails& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ProvisionedProductPlanDetails& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }
    inline ProvisionedProductPlanDetails& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}
    inline ProvisionedProductPlanDetails& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& WithPathId(const char* value) { SetPathId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline ProvisionedProductPlanDetails& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline ProvisionedProductPlanDetails& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the plan.</p>
     */
    inline const Aws::String& GetPlanName() const{ return m_planName; }
    inline bool PlanNameHasBeenSet() const { return m_planNameHasBeenSet; }
    inline void SetPlanName(const Aws::String& value) { m_planNameHasBeenSet = true; m_planName = value; }
    inline void SetPlanName(Aws::String&& value) { m_planNameHasBeenSet = true; m_planName = std::move(value); }
    inline void SetPlanName(const char* value) { m_planNameHasBeenSet = true; m_planName.assign(value); }
    inline ProvisionedProductPlanDetails& WithPlanName(const Aws::String& value) { SetPlanName(value); return *this;}
    inline ProvisionedProductPlanDetails& WithPlanName(Aws::String&& value) { SetPlanName(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& WithPlanName(const char* value) { SetPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan identifier.</p>
     */
    inline const Aws::String& GetPlanId() const{ return m_planId; }
    inline bool PlanIdHasBeenSet() const { return m_planIdHasBeenSet; }
    inline void SetPlanId(const Aws::String& value) { m_planIdHasBeenSet = true; m_planId = value; }
    inline void SetPlanId(Aws::String&& value) { m_planIdHasBeenSet = true; m_planId = std::move(value); }
    inline void SetPlanId(const char* value) { m_planIdHasBeenSet = true; m_planId.assign(value); }
    inline ProvisionedProductPlanDetails& WithPlanId(const Aws::String& value) { SetPlanId(value); return *this;}
    inline ProvisionedProductPlanDetails& WithPlanId(Aws::String&& value) { SetPlanId(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& WithPlanId(const char* value) { SetPlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProvisionProductId() const{ return m_provisionProductId; }
    inline bool ProvisionProductIdHasBeenSet() const { return m_provisionProductIdHasBeenSet; }
    inline void SetProvisionProductId(const Aws::String& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = value; }
    inline void SetProvisionProductId(Aws::String&& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = std::move(value); }
    inline void SetProvisionProductId(const char* value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId.assign(value); }
    inline ProvisionedProductPlanDetails& WithProvisionProductId(const Aws::String& value) { SetProvisionProductId(value); return *this;}
    inline ProvisionedProductPlanDetails& WithProvisionProductId(Aws::String&& value) { SetProvisionProductId(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& WithProvisionProductId(const char* value) { SetProvisionProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionProductName() const{ return m_provisionProductName; }
    inline bool ProvisionProductNameHasBeenSet() const { return m_provisionProductNameHasBeenSet; }
    inline void SetProvisionProductName(const Aws::String& value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName = value; }
    inline void SetProvisionProductName(Aws::String&& value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName = std::move(value); }
    inline void SetProvisionProductName(const char* value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName.assign(value); }
    inline ProvisionedProductPlanDetails& WithProvisionProductName(const Aws::String& value) { SetProvisionProductName(value); return *this;}
    inline ProvisionedProductPlanDetails& WithProvisionProductName(Aws::String&& value) { SetProvisionProductName(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& WithProvisionProductName(const char* value) { SetProvisionProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan type.</p>
     */
    inline const ProvisionedProductPlanType& GetPlanType() const{ return m_planType; }
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }
    inline void SetPlanType(const ProvisionedProductPlanType& value) { m_planTypeHasBeenSet = true; m_planType = value; }
    inline void SetPlanType(ProvisionedProductPlanType&& value) { m_planTypeHasBeenSet = true; m_planType = std::move(value); }
    inline ProvisionedProductPlanDetails& WithPlanType(const ProvisionedProductPlanType& value) { SetPlanType(value); return *this;}
    inline ProvisionedProductPlanDetails& WithPlanType(ProvisionedProductPlanType&& value) { SetPlanType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }
    inline ProvisionedProductPlanDetails& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}
    inline ProvisionedProductPlanDetails& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const ProvisionedProductPlanStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProvisionedProductPlanStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProvisionedProductPlanStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProvisionedProductPlanDetails& WithStatus(const ProvisionedProductPlanStatus& value) { SetStatus(value); return *this;}
    inline ProvisionedProductPlanDetails& WithStatus(ProvisionedProductPlanStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp when the plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const{ return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    inline void SetUpdatedTime(const Aws::Utils::DateTime& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }
    inline void SetUpdatedTime(Aws::Utils::DateTime&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }
    inline ProvisionedProductPlanDetails& WithUpdatedTime(const Aws::Utils::DateTime& value) { SetUpdatedTime(value); return *this;}
    inline ProvisionedProductPlanDetails& WithUpdatedTime(Aws::Utils::DateTime&& value) { SetUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const{ return m_notificationArns; }
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }
    inline void SetNotificationArns(const Aws::Vector<Aws::String>& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = value; }
    inline void SetNotificationArns(Aws::Vector<Aws::String>&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::move(value); }
    inline ProvisionedProductPlanDetails& WithNotificationArns(const Aws::Vector<Aws::String>& value) { SetNotificationArns(value); return *this;}
    inline ProvisionedProductPlanDetails& WithNotificationArns(Aws::Vector<Aws::String>&& value) { SetNotificationArns(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& AddNotificationArns(const Aws::String& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }
    inline ProvisionedProductPlanDetails& AddNotificationArns(Aws::String&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(std::move(value)); return *this; }
    inline ProvisionedProductPlanDetails& AddNotificationArns(const char* value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline const Aws::Vector<UpdateProvisioningParameter>& GetProvisioningParameters() const{ return m_provisioningParameters; }
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }
    inline void SetProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }
    inline void SetProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::move(value); }
    inline ProvisionedProductPlanDetails& WithProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}
    inline ProvisionedProductPlanDetails& WithProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { SetProvisioningParameters(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& AddProvisioningParameters(const UpdateProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }
    inline ProvisionedProductPlanDetails& AddProvisioningParameters(UpdateProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ProvisionedProductPlanDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ProvisionedProductPlanDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ProvisionedProductPlanDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ProvisionedProductPlanDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ProvisionedProductPlanDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ProvisionedProductPlanDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_pathId;
    bool m_pathIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_planName;
    bool m_planNameHasBeenSet = false;

    Aws::String m_planId;
    bool m_planIdHasBeenSet = false;

    Aws::String m_provisionProductId;
    bool m_provisionProductIdHasBeenSet = false;

    Aws::String m_provisionProductName;
    bool m_provisionProductNameHasBeenSet = false;

    ProvisionedProductPlanType m_planType;
    bool m_planTypeHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    ProvisionedProductPlanStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime;
    bool m_updatedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationArns;
    bool m_notificationArnsHasBeenSet = false;

    Aws::Vector<UpdateProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
