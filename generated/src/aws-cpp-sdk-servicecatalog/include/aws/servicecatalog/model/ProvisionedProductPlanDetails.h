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
    AWS_SERVICECATALOG_API ProvisionedProductPlanDetails() = default;
    AWS_SERVICECATALOG_API ProvisionedProductPlanDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisionedProductPlanDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ProvisionedProductPlanDetails& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline const Aws::String& GetPathId() const { return m_pathId; }
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }
    template<typename PathIdT = Aws::String>
    void SetPathId(PathIdT&& value) { m_pathIdHasBeenSet = true; m_pathId = std::forward<PathIdT>(value); }
    template<typename PathIdT = Aws::String>
    ProvisionedProductPlanDetails& WithPathId(PathIdT&& value) { SetPathId(std::forward<PathIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    ProvisionedProductPlanDetails& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the plan.</p>
     */
    inline const Aws::String& GetPlanName() const { return m_planName; }
    inline bool PlanNameHasBeenSet() const { return m_planNameHasBeenSet; }
    template<typename PlanNameT = Aws::String>
    void SetPlanName(PlanNameT&& value) { m_planNameHasBeenSet = true; m_planName = std::forward<PlanNameT>(value); }
    template<typename PlanNameT = Aws::String>
    ProvisionedProductPlanDetails& WithPlanName(PlanNameT&& value) { SetPlanName(std::forward<PlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan identifier.</p>
     */
    inline const Aws::String& GetPlanId() const { return m_planId; }
    inline bool PlanIdHasBeenSet() const { return m_planIdHasBeenSet; }
    template<typename PlanIdT = Aws::String>
    void SetPlanId(PlanIdT&& value) { m_planIdHasBeenSet = true; m_planId = std::forward<PlanIdT>(value); }
    template<typename PlanIdT = Aws::String>
    ProvisionedProductPlanDetails& WithPlanId(PlanIdT&& value) { SetPlanId(std::forward<PlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProvisionProductId() const { return m_provisionProductId; }
    inline bool ProvisionProductIdHasBeenSet() const { return m_provisionProductIdHasBeenSet; }
    template<typename ProvisionProductIdT = Aws::String>
    void SetProvisionProductId(ProvisionProductIdT&& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = std::forward<ProvisionProductIdT>(value); }
    template<typename ProvisionProductIdT = Aws::String>
    ProvisionedProductPlanDetails& WithProvisionProductId(ProvisionProductIdT&& value) { SetProvisionProductId(std::forward<ProvisionProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionProductName() const { return m_provisionProductName; }
    inline bool ProvisionProductNameHasBeenSet() const { return m_provisionProductNameHasBeenSet; }
    template<typename ProvisionProductNameT = Aws::String>
    void SetProvisionProductName(ProvisionProductNameT&& value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName = std::forward<ProvisionProductNameT>(value); }
    template<typename ProvisionProductNameT = Aws::String>
    ProvisionedProductPlanDetails& WithProvisionProductName(ProvisionProductNameT&& value) { SetProvisionProductName(std::forward<ProvisionProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan type.</p>
     */
    inline ProvisionedProductPlanType GetPlanType() const { return m_planType; }
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }
    inline void SetPlanType(ProvisionedProductPlanType value) { m_planTypeHasBeenSet = true; m_planType = value; }
    inline ProvisionedProductPlanDetails& WithPlanType(ProvisionedProductPlanType value) { SetPlanType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const { return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    template<typename ProvisioningArtifactIdT = Aws::String>
    void SetProvisioningArtifactId(ProvisioningArtifactIdT&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::forward<ProvisioningArtifactIdT>(value); }
    template<typename ProvisioningArtifactIdT = Aws::String>
    ProvisionedProductPlanDetails& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline ProvisionedProductPlanStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProvisionedProductPlanStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProvisionedProductPlanDetails& WithStatus(ProvisionedProductPlanStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp when the plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const { return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    void SetUpdatedTime(UpdatedTimeT&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::forward<UpdatedTimeT>(value); }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    ProvisionedProductPlanDetails& WithUpdatedTime(UpdatedTimeT&& value) { SetUpdatedTime(std::forward<UpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const { return m_notificationArns; }
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }
    template<typename NotificationArnsT = Aws::Vector<Aws::String>>
    void SetNotificationArns(NotificationArnsT&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::forward<NotificationArnsT>(value); }
    template<typename NotificationArnsT = Aws::Vector<Aws::String>>
    ProvisionedProductPlanDetails& WithNotificationArns(NotificationArnsT&& value) { SetNotificationArns(std::forward<NotificationArnsT>(value)); return *this;}
    template<typename NotificationArnsT = Aws::String>
    ProvisionedProductPlanDetails& AddNotificationArns(NotificationArnsT&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.emplace_back(std::forward<NotificationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline const Aws::Vector<UpdateProvisioningParameter>& GetProvisioningParameters() const { return m_provisioningParameters; }
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }
    template<typename ProvisioningParametersT = Aws::Vector<UpdateProvisioningParameter>>
    void SetProvisioningParameters(ProvisioningParametersT&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::forward<ProvisioningParametersT>(value); }
    template<typename ProvisioningParametersT = Aws::Vector<UpdateProvisioningParameter>>
    ProvisionedProductPlanDetails& WithProvisioningParameters(ProvisioningParametersT&& value) { SetProvisioningParameters(std::forward<ProvisioningParametersT>(value)); return *this;}
    template<typename ProvisioningParametersT = UpdateProvisioningParameter>
    ProvisionedProductPlanDetails& AddProvisioningParameters(ProvisioningParametersT&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.emplace_back(std::forward<ProvisioningParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ProvisionedProductPlanDetails& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ProvisionedProductPlanDetails& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ProvisionedProductPlanDetails& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime{};
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

    ProvisionedProductPlanType m_planType{ProvisionedProductPlanType::NOT_SET};
    bool m_planTypeHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    ProvisionedProductPlanStatus m_status{ProvisionedProductPlanStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime{};
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
