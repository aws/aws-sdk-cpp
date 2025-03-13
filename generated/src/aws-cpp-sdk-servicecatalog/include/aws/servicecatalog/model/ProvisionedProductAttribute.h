/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about a provisioned product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionedProductAttribute">AWS
   * API Reference</a></p>
   */
  class ProvisionedProductAttribute
  {
  public:
    AWS_SERVICECATALOG_API ProvisionedProductAttribute() = default;
    AWS_SERVICECATALOG_API ProvisionedProductAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisionedProductAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProvisionedProductAttribute& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ProvisionedProductAttribute& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code>, <code>CFN_STACKSET</code>,
     * <code>TERRAFORM_OPEN_SOURCE</code>, <code>TERRAFORM_CLOUD</code>, and
     * <code>EXTERNAL</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ProvisionedProductAttribute& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ProvisionedProductAttribute& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the provisioned product.</p> <ul> <li> <p>
     * <code>AVAILABLE</code> - Stable state, ready to perform any operation. The most
     * recent operation succeeded and completed.</p> </li> <li> <p>
     * <code>UNDER_CHANGE</code> - Transitive state. Operations performed might not
     * have valid results. Wait for an <code>AVAILABLE</code> status before performing
     * operations.</p> </li> <li> <p> <code>TAINTED</code> - Stable state, ready to
     * perform any operation. The stack has completed the requested operation but is
     * not exactly what was requested. For example, a request to update to a new
     * version failed and the stack rolled back to the current version.</p> </li> <li>
     * <p> <code>ERROR</code> - An unexpected error occurred. The provisioned product
     * exists but the stack is not running. For example, CloudFormation received a
     * parameter value that was not valid and could not launch the stack.</p> </li>
     * <li> <p> <code>PLAN_IN_PROGRESS</code> - Transitive state. The plan operations
     * were performed to provision a new product, but resources have not yet been
     * created. After reviewing the list of resources to be created, execute the plan.
     * Wait for an <code>AVAILABLE</code> status before performing operations.</p>
     * </li> </ul>
     */
    inline ProvisionedProductStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ProvisionedProductStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ProvisionedProductAttribute& WithStatus(ProvisionedProductStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ProvisionedProductAttribute& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ProvisionedProductAttribute& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
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
    ProvisionedProductAttribute& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline const Aws::String& GetLastRecordId() const { return m_lastRecordId; }
    inline bool LastRecordIdHasBeenSet() const { return m_lastRecordIdHasBeenSet; }
    template<typename LastRecordIdT = Aws::String>
    void SetLastRecordId(LastRecordIdT&& value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId = std::forward<LastRecordIdT>(value); }
    template<typename LastRecordIdT = Aws::String>
    ProvisionedProductAttribute& WithLastRecordId(LastRecordIdT&& value) { SetLastRecordId(std::forward<LastRecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product of the following types:</p> <ul> <li> <p> ProvisionProduct </p> </li>
     * <li> <p> UpdateProvisionedProduct </p> </li> <li> <p>
     * ExecuteProvisionedProductPlan </p> </li> <li> <p> TerminateProvisionedProduct
     * </p> </li> </ul>
     */
    inline const Aws::String& GetLastProvisioningRecordId() const { return m_lastProvisioningRecordId; }
    inline bool LastProvisioningRecordIdHasBeenSet() const { return m_lastProvisioningRecordIdHasBeenSet; }
    template<typename LastProvisioningRecordIdT = Aws::String>
    void SetLastProvisioningRecordId(LastProvisioningRecordIdT&& value) { m_lastProvisioningRecordIdHasBeenSet = true; m_lastProvisioningRecordId = std::forward<LastProvisioningRecordIdT>(value); }
    template<typename LastProvisioningRecordIdT = Aws::String>
    ProvisionedProductAttribute& WithLastProvisioningRecordId(LastProvisioningRecordIdT&& value) { SetLastProvisioningRecordId(std::forward<LastProvisioningRecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record identifier of the last successful request performed on this
     * provisioned product of the following types:</p> <ul> <li> <p> ProvisionProduct
     * </p> </li> <li> <p> UpdateProvisionedProduct </p> </li> <li> <p>
     * ExecuteProvisionedProductPlan </p> </li> <li> <p> TerminateProvisionedProduct
     * </p> </li> </ul>
     */
    inline const Aws::String& GetLastSuccessfulProvisioningRecordId() const { return m_lastSuccessfulProvisioningRecordId; }
    inline bool LastSuccessfulProvisioningRecordIdHasBeenSet() const { return m_lastSuccessfulProvisioningRecordIdHasBeenSet; }
    template<typename LastSuccessfulProvisioningRecordIdT = Aws::String>
    void SetLastSuccessfulProvisioningRecordId(LastSuccessfulProvisioningRecordIdT&& value) { m_lastSuccessfulProvisioningRecordIdHasBeenSet = true; m_lastSuccessfulProvisioningRecordId = std::forward<LastSuccessfulProvisioningRecordIdT>(value); }
    template<typename LastSuccessfulProvisioningRecordIdT = Aws::String>
    ProvisionedProductAttribute& WithLastSuccessfulProvisioningRecordId(LastSuccessfulProvisioningRecordIdT&& value) { SetLastSuccessfulProvisioningRecordId(std::forward<LastSuccessfulProvisioningRecordIdT>(value)); return *this;}
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
    ProvisionedProductAttribute& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ProvisionedProductAttribute& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The assigned identifier for the resource, such as an EC2 instance ID or an S3
     * bucket name.</p>
     */
    inline const Aws::String& GetPhysicalId() const { return m_physicalId; }
    inline bool PhysicalIdHasBeenSet() const { return m_physicalIdHasBeenSet; }
    template<typename PhysicalIdT = Aws::String>
    void SetPhysicalId(PhysicalIdT&& value) { m_physicalIdHasBeenSet = true; m_physicalId = std::forward<PhysicalIdT>(value); }
    template<typename PhysicalIdT = Aws::String>
    ProvisionedProductAttribute& WithPhysicalId(PhysicalIdT&& value) { SetPhysicalId(std::forward<PhysicalIdT>(value)); return *this;}
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
    ProvisionedProductAttribute& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the product.</p>
     */
    inline const Aws::String& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::String>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::String>
    ProvisionedProductAttribute& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
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
    ProvisionedProductAttribute& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactName() const { return m_provisioningArtifactName; }
    inline bool ProvisioningArtifactNameHasBeenSet() const { return m_provisioningArtifactNameHasBeenSet; }
    template<typename ProvisioningArtifactNameT = Aws::String>
    void SetProvisioningArtifactName(ProvisioningArtifactNameT&& value) { m_provisioningArtifactNameHasBeenSet = true; m_provisioningArtifactName = std::forward<ProvisioningArtifactNameT>(value); }
    template<typename ProvisioningArtifactNameT = Aws::String>
    ProvisionedProductAttribute& WithProvisioningArtifactName(ProvisioningArtifactNameT&& value) { SetProvisioningArtifactName(std::forward<ProvisioningArtifactNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetUserArn() const { return m_userArn; }
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
    template<typename UserArnT = Aws::String>
    void SetUserArn(UserArnT&& value) { m_userArnHasBeenSet = true; m_userArn = std::forward<UserArnT>(value); }
    template<typename UserArnT = Aws::String>
    ProvisionedProductAttribute& WithUserArn(UserArnT&& value) { SetUserArn(std::forward<UserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user in the session. This ARN might contain a session ID.</p>
     */
    inline const Aws::String& GetUserArnSession() const { return m_userArnSession; }
    inline bool UserArnSessionHasBeenSet() const { return m_userArnSessionHasBeenSet; }
    template<typename UserArnSessionT = Aws::String>
    void SetUserArnSession(UserArnSessionT&& value) { m_userArnSessionHasBeenSet = true; m_userArnSession = std::forward<UserArnSessionT>(value); }
    template<typename UserArnSessionT = Aws::String>
    ProvisionedProductAttribute& WithUserArnSession(UserArnSessionT&& value) { SetUserArnSession(std::forward<UserArnSessionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ProvisionedProductStatus m_status{ProvisionedProductStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    Aws::String m_lastRecordId;
    bool m_lastRecordIdHasBeenSet = false;

    Aws::String m_lastProvisioningRecordId;
    bool m_lastProvisioningRecordIdHasBeenSet = false;

    Aws::String m_lastSuccessfulProvisioningRecordId;
    bool m_lastSuccessfulProvisioningRecordIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_physicalId;
    bool m_physicalIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_provisioningArtifactName;
    bool m_provisioningArtifactNameHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;

    Aws::String m_userArnSession;
    bool m_userArnSessionHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
