/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionedProductDetail">AWS
   * API Reference</a></p>
   */
  class ProvisionedProductDetail
  {
  public:
    AWS_SERVICECATALOG_API ProvisionedProductDetail() = default;
    AWS_SERVICECATALOG_API ProvisionedProductDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisionedProductDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ProvisionedProductDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    ProvisionedProductDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    ProvisionedProductDetail& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
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
    ProvisionedProductDetail& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    inline ProvisionedProductDetail& WithStatus(ProvisionedProductStatus value) { SetStatus(value); return *this;}
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
    ProvisionedProductDetail& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
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
    ProvisionedProductDetail& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
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
    ProvisionedProductDetail& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
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
    ProvisionedProductDetail& WithLastRecordId(LastRecordIdT&& value) { SetLastRecordId(std::forward<LastRecordIdT>(value)); return *this;}
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
    ProvisionedProductDetail& WithLastProvisioningRecordId(LastProvisioningRecordIdT&& value) { SetLastProvisioningRecordId(std::forward<LastProvisioningRecordIdT>(value)); return *this;}
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
    ProvisionedProductDetail& WithLastSuccessfulProvisioningRecordId(LastSuccessfulProvisioningRecordIdT&& value) { SetLastSuccessfulProvisioningRecordId(std::forward<LastSuccessfulProvisioningRecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    ProvisionedProductDetail& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const { return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    template<typename ProvisioningArtifactIdT = Aws::String>
    void SetProvisioningArtifactId(ProvisioningArtifactIdT&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::forward<ProvisioningArtifactIdT>(value); }
    template<typename ProvisioningArtifactIdT = Aws::String>
    ProvisionedProductDetail& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the launch role associated with the provisioned product.</p>
     */
    inline const Aws::String& GetLaunchRoleArn() const { return m_launchRoleArn; }
    inline bool LaunchRoleArnHasBeenSet() const { return m_launchRoleArnHasBeenSet; }
    template<typename LaunchRoleArnT = Aws::String>
    void SetLaunchRoleArn(LaunchRoleArnT&& value) { m_launchRoleArnHasBeenSet = true; m_launchRoleArn = std::forward<LaunchRoleArnT>(value); }
    template<typename LaunchRoleArnT = Aws::String>
    ProvisionedProductDetail& WithLaunchRoleArn(LaunchRoleArnT&& value) { SetLaunchRoleArn(std::forward<LaunchRoleArnT>(value)); return *this;}
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

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_launchRoleArn;
    bool m_launchRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
