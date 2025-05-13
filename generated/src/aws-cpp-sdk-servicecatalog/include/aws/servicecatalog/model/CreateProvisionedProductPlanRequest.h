/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/UpdateProvisioningParameter.h>
#include <aws/servicecatalog/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class CreateProvisionedProductPlanRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API CreateProvisionedProductPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProvisionedProductPlan"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    CreateProvisionedProductPlanRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
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
    CreateProvisionedProductPlanRequest& WithPlanName(PlanNameT&& value) { SetPlanName(std::forward<PlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The plan type.</p>
     */
    inline ProvisionedProductPlanType GetPlanType() const { return m_planType; }
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }
    inline void SetPlanType(ProvisionedProductPlanType value) { m_planTypeHasBeenSet = true; m_planType = value; }
    inline CreateProvisionedProductPlanRequest& WithPlanType(ProvisionedProductPlanType value) { SetPlanType(value); return *this;}
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
    CreateProvisionedProductPlanRequest& WithNotificationArns(NotificationArnsT&& value) { SetNotificationArns(std::forward<NotificationArnsT>(value)); return *this;}
    template<typename NotificationArnsT = Aws::String>
    CreateProvisionedProductPlanRequest& AddNotificationArns(NotificationArnsT&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.emplace_back(std::forward<NotificationArnsT>(value)); return *this; }
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
    CreateProvisionedProductPlanRequest& WithPathId(PathIdT&& value) { SetPathId(std::forward<PathIdT>(value)); return *this;}
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
    CreateProvisionedProductPlanRequest& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the provisioned product. This value must be unique
     * for the Amazon Web Services account and cannot be updated after the product is
     * provisioned.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const { return m_provisionedProductName; }
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }
    template<typename ProvisionedProductNameT = Aws::String>
    void SetProvisionedProductName(ProvisionedProductNameT&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::forward<ProvisionedProductNameT>(value); }
    template<typename ProvisionedProductNameT = Aws::String>
    CreateProvisionedProductPlanRequest& WithProvisionedProductName(ProvisionedProductNameT&& value) { SetProvisionedProductName(std::forward<ProvisionedProductNameT>(value)); return *this;}
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
    CreateProvisionedProductPlanRequest& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
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
    CreateProvisionedProductPlanRequest& WithProvisioningParameters(ProvisioningParametersT&& value) { SetProvisioningParameters(std::forward<ProvisioningParametersT>(value)); return *this;}
    template<typename ProvisioningParametersT = UpdateProvisioningParameter>
    CreateProvisionedProductPlanRequest& AddProvisioningParameters(ProvisioningParametersT&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.emplace_back(std::forward<ProvisioningParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateProvisionedProductPlanRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p> <p>If the plan is for an existing provisioned product,
     * the product must have a <code>RESOURCE_UPDATE</code> constraint with
     * <code>TagUpdatesOnProvisionedProduct</code> set to <code>ALLOWED</code> to allow
     * tag updates.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateProvisionedProductPlanRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateProvisionedProductPlanRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_planName;
    bool m_planNameHasBeenSet = false;

    ProvisionedProductPlanType m_planType{ProvisionedProductPlanType::NOT_SET};
    bool m_planTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationArns;
    bool m_notificationArnsHasBeenSet = false;

    Aws::String m_pathId;
    bool m_pathIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::Vector<UpdateProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
