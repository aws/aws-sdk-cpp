/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/RecordStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/RecordError.h>
#include <aws/servicecatalog/model/RecordTag.h>
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
   * <p>Information about a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/RecordDetail">AWS
   * API Reference</a></p>
   */
  class RecordDetail
  {
  public:
    AWS_SERVICECATALOG_API RecordDetail() = default;
    AWS_SERVICECATALOG_API RecordDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API RecordDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the record.</p>
     */
    inline const Aws::String& GetRecordId() const { return m_recordId; }
    inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
    template<typename RecordIdT = Aws::String>
    void SetRecordId(RecordIdT&& value) { m_recordIdHasBeenSet = true; m_recordId = std::forward<RecordIdT>(value); }
    template<typename RecordIdT = Aws::String>
    RecordDetail& WithRecordId(RecordIdT&& value) { SetRecordId(std::forward<RecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const { return m_provisionedProductName; }
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }
    template<typename ProvisionedProductNameT = Aws::String>
    void SetProvisionedProductName(ProvisionedProductNameT&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::forward<ProvisionedProductNameT>(value); }
    template<typename ProvisionedProductNameT = Aws::String>
    RecordDetail& WithProvisionedProductName(ProvisionedProductNameT&& value) { SetProvisionedProductName(std::forward<ProvisionedProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the provisioned product.</p> <ul> <li> <p> <code>CREATED</code>
     * - The request was created but the operation has not started.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - The requested operation is in progress.</p> </li>
     * <li> <p> <code>IN_PROGRESS_IN_ERROR</code> - The provisioned product is under
     * change but the requested operation failed and some remediation is occurring. For
     * example, a rollback.</p> </li> <li> <p> <code>SUCCEEDED</code> - The requested
     * operation has successfully completed.</p> </li> <li> <p> <code>FAILED</code> -
     * The requested operation has unsuccessfully completed. Investigate using the
     * error messages returned.</p> </li> </ul>
     */
    inline RecordStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecordStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RecordDetail& WithStatus(RecordStatus value) { SetStatus(value); return *this;}
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
    RecordDetail& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the record was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const { return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    void SetUpdatedTime(UpdatedTimeT&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::forward<UpdatedTimeT>(value); }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    RecordDetail& WithUpdatedTime(UpdatedTimeT&& value) { SetUpdatedTime(std::forward<UpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code>, <code>CFN_STACKSET</code>,
     * <code>TERRAFORM_OPEN_SOURCE</code>, <code>TERRAFORM_CLOUD</code>, and
     * <code>EXTERNAL</code>.</p>
     */
    inline const Aws::String& GetProvisionedProductType() const { return m_provisionedProductType; }
    inline bool ProvisionedProductTypeHasBeenSet() const { return m_provisionedProductTypeHasBeenSet; }
    template<typename ProvisionedProductTypeT = Aws::String>
    void SetProvisionedProductType(ProvisionedProductTypeT&& value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType = std::forward<ProvisionedProductTypeT>(value); }
    template<typename ProvisionedProductTypeT = Aws::String>
    RecordDetail& WithProvisionedProductType(ProvisionedProductTypeT&& value) { SetProvisionedProductType(std::forward<ProvisionedProductTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline const Aws::String& GetRecordType() const { return m_recordType; }
    inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
    template<typename RecordTypeT = Aws::String>
    void SetRecordType(RecordTypeT&& value) { m_recordTypeHasBeenSet = true; m_recordType = std::forward<RecordTypeT>(value); }
    template<typename RecordTypeT = Aws::String>
    RecordDetail& WithRecordType(RecordTypeT&& value) { SetRecordType(std::forward<RecordTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const { return m_provisionedProductId; }
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }
    template<typename ProvisionedProductIdT = Aws::String>
    void SetProvisionedProductId(ProvisionedProductIdT&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::forward<ProvisionedProductIdT>(value); }
    template<typename ProvisionedProductIdT = Aws::String>
    RecordDetail& WithProvisionedProductId(ProvisionedProductIdT&& value) { SetProvisionedProductId(std::forward<ProvisionedProductIdT>(value)); return *this;}
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
    RecordDetail& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
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
    RecordDetail& WithProvisioningArtifactId(ProvisioningArtifactIdT&& value) { SetProvisioningArtifactId(std::forward<ProvisioningArtifactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path identifier.</p>
     */
    inline const Aws::String& GetPathId() const { return m_pathId; }
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }
    template<typename PathIdT = Aws::String>
    void SetPathId(PathIdT&& value) { m_pathIdHasBeenSet = true; m_pathId = std::forward<PathIdT>(value); }
    template<typename PathIdT = Aws::String>
    RecordDetail& WithPathId(PathIdT&& value) { SetPathId(std::forward<PathIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The errors that occurred.</p>
     */
    inline const Aws::Vector<RecordError>& GetRecordErrors() const { return m_recordErrors; }
    inline bool RecordErrorsHasBeenSet() const { return m_recordErrorsHasBeenSet; }
    template<typename RecordErrorsT = Aws::Vector<RecordError>>
    void SetRecordErrors(RecordErrorsT&& value) { m_recordErrorsHasBeenSet = true; m_recordErrors = std::forward<RecordErrorsT>(value); }
    template<typename RecordErrorsT = Aws::Vector<RecordError>>
    RecordDetail& WithRecordErrors(RecordErrorsT&& value) { SetRecordErrors(std::forward<RecordErrorsT>(value)); return *this;}
    template<typename RecordErrorsT = RecordError>
    RecordDetail& AddRecordErrors(RecordErrorsT&& value) { m_recordErrorsHasBeenSet = true; m_recordErrors.emplace_back(std::forward<RecordErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<RecordTag>& GetRecordTags() const { return m_recordTags; }
    inline bool RecordTagsHasBeenSet() const { return m_recordTagsHasBeenSet; }
    template<typename RecordTagsT = Aws::Vector<RecordTag>>
    void SetRecordTags(RecordTagsT&& value) { m_recordTagsHasBeenSet = true; m_recordTags = std::forward<RecordTagsT>(value); }
    template<typename RecordTagsT = Aws::Vector<RecordTag>>
    RecordDetail& WithRecordTags(RecordTagsT&& value) { SetRecordTags(std::forward<RecordTagsT>(value)); return *this;}
    template<typename RecordTagsT = RecordTag>
    RecordDetail& AddRecordTags(RecordTagsT&& value) { m_recordTagsHasBeenSet = true; m_recordTags.emplace_back(std::forward<RecordTagsT>(value)); return *this; }
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
    RecordDetail& WithLaunchRoleArn(LaunchRoleArnT&& value) { SetLaunchRoleArn(std::forward<LaunchRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recordId;
    bool m_recordIdHasBeenSet = false;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    RecordStatus m_status{RecordStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime{};
    bool m_updatedTimeHasBeenSet = false;

    Aws::String m_provisionedProductType;
    bool m_provisionedProductTypeHasBeenSet = false;

    Aws::String m_recordType;
    bool m_recordTypeHasBeenSet = false;

    Aws::String m_provisionedProductId;
    bool m_provisionedProductIdHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet = false;

    Aws::String m_pathId;
    bool m_pathIdHasBeenSet = false;

    Aws::Vector<RecordError> m_recordErrors;
    bool m_recordErrorsHasBeenSet = false;

    Aws::Vector<RecordTag> m_recordTags;
    bool m_recordTagsHasBeenSet = false;

    Aws::String m_launchRoleArn;
    bool m_launchRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
