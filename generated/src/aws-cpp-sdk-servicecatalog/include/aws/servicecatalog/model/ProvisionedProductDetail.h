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
    AWS_SERVICECATALOG_API ProvisionedProductDetail();
    AWS_SERVICECATALOG_API ProvisionedProductDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisionedProductDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProvisionedProductDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProvisionedProductDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the provisioned product.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ProvisionedProductDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ProvisionedProductDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code>, <code>CFN_STACKSET</code>,
     * <code>TERRAFORM_OPEN_SOURCE</code>, <code>TERRAFORM_CLOUD</code>, and
     * <code>EXTERNAL</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ProvisionedProductDetail& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ProvisionedProductDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ProvisionedProductDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ProvisionedProductDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithId(const char* value) { SetId(value); return *this;}
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
    inline const ProvisionedProductStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ProvisionedProductStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ProvisionedProductStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ProvisionedProductDetail& WithStatus(const ProvisionedProductStatus& value) { SetStatus(value); return *this;}
    inline ProvisionedProductDetail& WithStatus(ProvisionedProductStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status message of the provisioned product.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ProvisionedProductDetail& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ProvisionedProductDetail& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ProvisionedProductDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ProvisionedProductDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline ProvisionedProductDetail& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline ProvisionedProductDetail& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product.</p>
     */
    inline const Aws::String& GetLastRecordId() const{ return m_lastRecordId; }
    inline bool LastRecordIdHasBeenSet() const { return m_lastRecordIdHasBeenSet; }
    inline void SetLastRecordId(const Aws::String& value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId = value; }
    inline void SetLastRecordId(Aws::String&& value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId = std::move(value); }
    inline void SetLastRecordId(const char* value) { m_lastRecordIdHasBeenSet = true; m_lastRecordId.assign(value); }
    inline ProvisionedProductDetail& WithLastRecordId(const Aws::String& value) { SetLastRecordId(value); return *this;}
    inline ProvisionedProductDetail& WithLastRecordId(Aws::String&& value) { SetLastRecordId(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithLastRecordId(const char* value) { SetLastRecordId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record identifier of the last request performed on this provisioned
     * product of the following types:</p> <ul> <li> <p> ProvisionProduct </p> </li>
     * <li> <p> UpdateProvisionedProduct </p> </li> <li> <p>
     * ExecuteProvisionedProductPlan </p> </li> <li> <p> TerminateProvisionedProduct
     * </p> </li> </ul>
     */
    inline const Aws::String& GetLastProvisioningRecordId() const{ return m_lastProvisioningRecordId; }
    inline bool LastProvisioningRecordIdHasBeenSet() const { return m_lastProvisioningRecordIdHasBeenSet; }
    inline void SetLastProvisioningRecordId(const Aws::String& value) { m_lastProvisioningRecordIdHasBeenSet = true; m_lastProvisioningRecordId = value; }
    inline void SetLastProvisioningRecordId(Aws::String&& value) { m_lastProvisioningRecordIdHasBeenSet = true; m_lastProvisioningRecordId = std::move(value); }
    inline void SetLastProvisioningRecordId(const char* value) { m_lastProvisioningRecordIdHasBeenSet = true; m_lastProvisioningRecordId.assign(value); }
    inline ProvisionedProductDetail& WithLastProvisioningRecordId(const Aws::String& value) { SetLastProvisioningRecordId(value); return *this;}
    inline ProvisionedProductDetail& WithLastProvisioningRecordId(Aws::String&& value) { SetLastProvisioningRecordId(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithLastProvisioningRecordId(const char* value) { SetLastProvisioningRecordId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record identifier of the last successful request performed on this
     * provisioned product of the following types:</p> <ul> <li> <p> ProvisionProduct
     * </p> </li> <li> <p> UpdateProvisionedProduct </p> </li> <li> <p>
     * ExecuteProvisionedProductPlan </p> </li> <li> <p> TerminateProvisionedProduct
     * </p> </li> </ul>
     */
    inline const Aws::String& GetLastSuccessfulProvisioningRecordId() const{ return m_lastSuccessfulProvisioningRecordId; }
    inline bool LastSuccessfulProvisioningRecordIdHasBeenSet() const { return m_lastSuccessfulProvisioningRecordIdHasBeenSet; }
    inline void SetLastSuccessfulProvisioningRecordId(const Aws::String& value) { m_lastSuccessfulProvisioningRecordIdHasBeenSet = true; m_lastSuccessfulProvisioningRecordId = value; }
    inline void SetLastSuccessfulProvisioningRecordId(Aws::String&& value) { m_lastSuccessfulProvisioningRecordIdHasBeenSet = true; m_lastSuccessfulProvisioningRecordId = std::move(value); }
    inline void SetLastSuccessfulProvisioningRecordId(const char* value) { m_lastSuccessfulProvisioningRecordIdHasBeenSet = true; m_lastSuccessfulProvisioningRecordId.assign(value); }
    inline ProvisionedProductDetail& WithLastSuccessfulProvisioningRecordId(const Aws::String& value) { SetLastSuccessfulProvisioningRecordId(value); return *this;}
    inline ProvisionedProductDetail& WithLastSuccessfulProvisioningRecordId(Aws::String&& value) { SetLastSuccessfulProvisioningRecordId(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithLastSuccessfulProvisioningRecordId(const char* value) { SetLastSuccessfulProvisioningRecordId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier. For example, <code>prod-abcdzk7xy33qa</code>.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline ProvisionedProductDetail& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline ProvisionedProductDetail& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithProductId(const char* value) { SetProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioning artifact. For example,
     * <code>pa-4abcdjnxjj6ne</code>.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }
    inline ProvisionedProductDetail& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}
    inline ProvisionedProductDetail& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the launch role associated with the provisioned product.</p>
     */
    inline const Aws::String& GetLaunchRoleArn() const{ return m_launchRoleArn; }
    inline bool LaunchRoleArnHasBeenSet() const { return m_launchRoleArnHasBeenSet; }
    inline void SetLaunchRoleArn(const Aws::String& value) { m_launchRoleArnHasBeenSet = true; m_launchRoleArn = value; }
    inline void SetLaunchRoleArn(Aws::String&& value) { m_launchRoleArnHasBeenSet = true; m_launchRoleArn = std::move(value); }
    inline void SetLaunchRoleArn(const char* value) { m_launchRoleArnHasBeenSet = true; m_launchRoleArn.assign(value); }
    inline ProvisionedProductDetail& WithLaunchRoleArn(const Aws::String& value) { SetLaunchRoleArn(value); return *this;}
    inline ProvisionedProductDetail& WithLaunchRoleArn(Aws::String&& value) { SetLaunchRoleArn(std::move(value)); return *this;}
    inline ProvisionedProductDetail& WithLaunchRoleArn(const char* value) { SetLaunchRoleArn(value); return *this;}
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

    ProvisionedProductStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
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
