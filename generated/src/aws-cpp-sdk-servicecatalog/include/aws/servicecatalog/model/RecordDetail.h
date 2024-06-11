﻿/**
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
    AWS_SERVICECATALOG_API RecordDetail();
    AWS_SERVICECATALOG_API RecordDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API RecordDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the record.</p>
     */
    inline const Aws::String& GetRecordId() const{ return m_recordId; }
    inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
    inline void SetRecordId(const Aws::String& value) { m_recordIdHasBeenSet = true; m_recordId = value; }
    inline void SetRecordId(Aws::String&& value) { m_recordIdHasBeenSet = true; m_recordId = std::move(value); }
    inline void SetRecordId(const char* value) { m_recordIdHasBeenSet = true; m_recordId.assign(value); }
    inline RecordDetail& WithRecordId(const Aws::String& value) { SetRecordId(value); return *this;}
    inline RecordDetail& WithRecordId(Aws::String&& value) { SetRecordId(std::move(value)); return *this;}
    inline RecordDetail& WithRecordId(const char* value) { SetRecordId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductName() const{ return m_provisionedProductName; }
    inline bool ProvisionedProductNameHasBeenSet() const { return m_provisionedProductNameHasBeenSet; }
    inline void SetProvisionedProductName(const Aws::String& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = value; }
    inline void SetProvisionedProductName(Aws::String&& value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName = std::move(value); }
    inline void SetProvisionedProductName(const char* value) { m_provisionedProductNameHasBeenSet = true; m_provisionedProductName.assign(value); }
    inline RecordDetail& WithProvisionedProductName(const Aws::String& value) { SetProvisionedProductName(value); return *this;}
    inline RecordDetail& WithProvisionedProductName(Aws::String&& value) { SetProvisionedProductName(std::move(value)); return *this;}
    inline RecordDetail& WithProvisionedProductName(const char* value) { SetProvisionedProductName(value); return *this;}
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
    inline const RecordStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RecordStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RecordStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RecordDetail& WithStatus(const RecordStatus& value) { SetStatus(value); return *this;}
    inline RecordDetail& WithStatus(RecordStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline RecordDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline RecordDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the record was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const{ return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    inline void SetUpdatedTime(const Aws::Utils::DateTime& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }
    inline void SetUpdatedTime(Aws::Utils::DateTime&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }
    inline RecordDetail& WithUpdatedTime(const Aws::Utils::DateTime& value) { SetUpdatedTime(value); return *this;}
    inline RecordDetail& WithUpdatedTime(Aws::Utils::DateTime&& value) { SetUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of provisioned product. The supported values are
     * <code>CFN_STACK</code>, <code>CFN_STACKSET</code>,
     * <code>TERRAFORM_OPEN_SOURCE</code>, <code>TERRAFORM_CLOUD</code>, and
     * <code>EXTERNAL</code>.</p>
     */
    inline const Aws::String& GetProvisionedProductType() const{ return m_provisionedProductType; }
    inline bool ProvisionedProductTypeHasBeenSet() const { return m_provisionedProductTypeHasBeenSet; }
    inline void SetProvisionedProductType(const Aws::String& value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType = value; }
    inline void SetProvisionedProductType(Aws::String&& value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType = std::move(value); }
    inline void SetProvisionedProductType(const char* value) { m_provisionedProductTypeHasBeenSet = true; m_provisionedProductType.assign(value); }
    inline RecordDetail& WithProvisionedProductType(const Aws::String& value) { SetProvisionedProductType(value); return *this;}
    inline RecordDetail& WithProvisionedProductType(Aws::String&& value) { SetProvisionedProductType(std::move(value)); return *this;}
    inline RecordDetail& WithProvisionedProductType(const char* value) { SetProvisionedProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The record type.</p> <ul> <li> <p> <code>PROVISION_PRODUCT</code> </p> </li>
     * <li> <p> <code>UPDATE_PROVISIONED_PRODUCT</code> </p> </li> <li> <p>
     * <code>TERMINATE_PROVISIONED_PRODUCT</code> </p> </li> </ul>
     */
    inline const Aws::String& GetRecordType() const{ return m_recordType; }
    inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
    inline void SetRecordType(const Aws::String& value) { m_recordTypeHasBeenSet = true; m_recordType = value; }
    inline void SetRecordType(Aws::String&& value) { m_recordTypeHasBeenSet = true; m_recordType = std::move(value); }
    inline void SetRecordType(const char* value) { m_recordTypeHasBeenSet = true; m_recordType.assign(value); }
    inline RecordDetail& WithRecordType(const Aws::String& value) { SetRecordType(value); return *this;}
    inline RecordDetail& WithRecordType(Aws::String&& value) { SetRecordType(std::move(value)); return *this;}
    inline RecordDetail& WithRecordType(const char* value) { SetRecordType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionedProductId() const{ return m_provisionedProductId; }
    inline bool ProvisionedProductIdHasBeenSet() const { return m_provisionedProductIdHasBeenSet; }
    inline void SetProvisionedProductId(const Aws::String& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = value; }
    inline void SetProvisionedProductId(Aws::String&& value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId = std::move(value); }
    inline void SetProvisionedProductId(const char* value) { m_provisionedProductIdHasBeenSet = true; m_provisionedProductId.assign(value); }
    inline RecordDetail& WithProvisionedProductId(const Aws::String& value) { SetProvisionedProductId(value); return *this;}
    inline RecordDetail& WithProvisionedProductId(Aws::String&& value) { SetProvisionedProductId(std::move(value)); return *this;}
    inline RecordDetail& WithProvisionedProductId(const char* value) { SetProvisionedProductId(value); return *this;}
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
    inline RecordDetail& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline RecordDetail& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline RecordDetail& WithProductId(const char* value) { SetProductId(value); return *this;}
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
    inline RecordDetail& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}
    inline RecordDetail& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}
    inline RecordDetail& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path identifier.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }
    inline RecordDetail& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}
    inline RecordDetail& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}
    inline RecordDetail& WithPathId(const char* value) { SetPathId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The errors that occurred.</p>
     */
    inline const Aws::Vector<RecordError>& GetRecordErrors() const{ return m_recordErrors; }
    inline bool RecordErrorsHasBeenSet() const { return m_recordErrorsHasBeenSet; }
    inline void SetRecordErrors(const Aws::Vector<RecordError>& value) { m_recordErrorsHasBeenSet = true; m_recordErrors = value; }
    inline void SetRecordErrors(Aws::Vector<RecordError>&& value) { m_recordErrorsHasBeenSet = true; m_recordErrors = std::move(value); }
    inline RecordDetail& WithRecordErrors(const Aws::Vector<RecordError>& value) { SetRecordErrors(value); return *this;}
    inline RecordDetail& WithRecordErrors(Aws::Vector<RecordError>&& value) { SetRecordErrors(std::move(value)); return *this;}
    inline RecordDetail& AddRecordErrors(const RecordError& value) { m_recordErrorsHasBeenSet = true; m_recordErrors.push_back(value); return *this; }
    inline RecordDetail& AddRecordErrors(RecordError&& value) { m_recordErrorsHasBeenSet = true; m_recordErrors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<RecordTag>& GetRecordTags() const{ return m_recordTags; }
    inline bool RecordTagsHasBeenSet() const { return m_recordTagsHasBeenSet; }
    inline void SetRecordTags(const Aws::Vector<RecordTag>& value) { m_recordTagsHasBeenSet = true; m_recordTags = value; }
    inline void SetRecordTags(Aws::Vector<RecordTag>&& value) { m_recordTagsHasBeenSet = true; m_recordTags = std::move(value); }
    inline RecordDetail& WithRecordTags(const Aws::Vector<RecordTag>& value) { SetRecordTags(value); return *this;}
    inline RecordDetail& WithRecordTags(Aws::Vector<RecordTag>&& value) { SetRecordTags(std::move(value)); return *this;}
    inline RecordDetail& AddRecordTags(const RecordTag& value) { m_recordTagsHasBeenSet = true; m_recordTags.push_back(value); return *this; }
    inline RecordDetail& AddRecordTags(RecordTag&& value) { m_recordTagsHasBeenSet = true; m_recordTags.push_back(std::move(value)); return *this; }
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
    inline RecordDetail& WithLaunchRoleArn(const Aws::String& value) { SetLaunchRoleArn(value); return *this;}
    inline RecordDetail& WithLaunchRoleArn(Aws::String&& value) { SetLaunchRoleArn(std::move(value)); return *this;}
    inline RecordDetail& WithLaunchRoleArn(const char* value) { SetLaunchRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_recordId;
    bool m_recordIdHasBeenSet = false;

    Aws::String m_provisionedProductName;
    bool m_provisionedProductNameHasBeenSet = false;

    RecordStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime;
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
