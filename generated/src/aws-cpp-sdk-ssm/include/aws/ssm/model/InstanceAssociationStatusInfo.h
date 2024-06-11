/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/InstanceAssociationOutputUrl.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Status information about the association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceAssociationStatusInfo">AWS
   * API Reference</a></p>
   */
  class InstanceAssociationStatusInfo
  {
  public:
    AWS_SSM_API InstanceAssociationStatusInfo();
    AWS_SSM_API InstanceAssociationStatusInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceAssociationStatusInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline InstanceAssociationStatusInfo& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline InstanceAssociationStatusInfo& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the association.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InstanceAssociationStatusInfo& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InstanceAssociationStatusInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association document versions.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }
    inline InstanceAssociationStatusInfo& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline InstanceAssociationStatusInfo& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the association applied to the managed node.</p>
     */
    inline const Aws::String& GetAssociationVersion() const{ return m_associationVersion; }
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }
    inline void SetAssociationVersion(const Aws::String& value) { m_associationVersionHasBeenSet = true; m_associationVersion = value; }
    inline void SetAssociationVersion(Aws::String&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::move(value); }
    inline void SetAssociationVersion(const char* value) { m_associationVersionHasBeenSet = true; m_associationVersion.assign(value); }
    inline InstanceAssociationStatusInfo& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}
    inline InstanceAssociationStatusInfo& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID where the association was created.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceAssociationStatusInfo& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceAssociationStatusInfo& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the association ran. </p>
     */
    inline const Aws::Utils::DateTime& GetExecutionDate() const{ return m_executionDate; }
    inline bool ExecutionDateHasBeenSet() const { return m_executionDateHasBeenSet; }
    inline void SetExecutionDate(const Aws::Utils::DateTime& value) { m_executionDateHasBeenSet = true; m_executionDate = value; }
    inline void SetExecutionDate(Aws::Utils::DateTime&& value) { m_executionDateHasBeenSet = true; m_executionDate = std::move(value); }
    inline InstanceAssociationStatusInfo& WithExecutionDate(const Aws::Utils::DateTime& value) { SetExecutionDate(value); return *this;}
    inline InstanceAssociationStatusInfo& WithExecutionDate(Aws::Utils::DateTime&& value) { SetExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status information about the association.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline InstanceAssociationStatusInfo& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline InstanceAssociationStatusInfo& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed status information about the association.</p>
     */
    inline const Aws::String& GetDetailedStatus() const{ return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    inline void SetDetailedStatus(const Aws::String& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }
    inline void SetDetailedStatus(Aws::String&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::move(value); }
    inline void SetDetailedStatus(const char* value) { m_detailedStatusHasBeenSet = true; m_detailedStatus.assign(value); }
    inline InstanceAssociationStatusInfo& WithDetailedStatus(const Aws::String& value) { SetDetailedStatus(value); return *this;}
    inline InstanceAssociationStatusInfo& WithDetailedStatus(Aws::String&& value) { SetDetailedStatus(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithDetailedStatus(const char* value) { SetDetailedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about association execution.</p>
     */
    inline const Aws::String& GetExecutionSummary() const{ return m_executionSummary; }
    inline bool ExecutionSummaryHasBeenSet() const { return m_executionSummaryHasBeenSet; }
    inline void SetExecutionSummary(const Aws::String& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = value; }
    inline void SetExecutionSummary(Aws::String&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::move(value); }
    inline void SetExecutionSummary(const char* value) { m_executionSummaryHasBeenSet = true; m_executionSummary.assign(value); }
    inline InstanceAssociationStatusInfo& WithExecutionSummary(const Aws::String& value) { SetExecutionSummary(value); return *this;}
    inline InstanceAssociationStatusInfo& WithExecutionSummary(Aws::String&& value) { SetExecutionSummary(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithExecutionSummary(const char* value) { SetExecutionSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code returned by the request to create the association.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline InstanceAssociationStatusInfo& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline InstanceAssociationStatusInfo& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline const InstanceAssociationOutputUrl& GetOutputUrl() const{ return m_outputUrl; }
    inline bool OutputUrlHasBeenSet() const { return m_outputUrlHasBeenSet; }
    inline void SetOutputUrl(const InstanceAssociationOutputUrl& value) { m_outputUrlHasBeenSet = true; m_outputUrl = value; }
    inline void SetOutputUrl(InstanceAssociationOutputUrl&& value) { m_outputUrlHasBeenSet = true; m_outputUrl = std::move(value); }
    inline InstanceAssociationStatusInfo& WithOutputUrl(const InstanceAssociationOutputUrl& value) { SetOutputUrl(value); return *this;}
    inline InstanceAssociationStatusInfo& WithOutputUrl(InstanceAssociationOutputUrl&& value) { SetOutputUrl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the association applied to the managed node.</p>
     */
    inline const Aws::String& GetAssociationName() const{ return m_associationName; }
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }
    inline void SetAssociationName(const Aws::String& value) { m_associationNameHasBeenSet = true; m_associationName = value; }
    inline void SetAssociationName(Aws::String&& value) { m_associationNameHasBeenSet = true; m_associationName = std::move(value); }
    inline void SetAssociationName(const char* value) { m_associationNameHasBeenSet = true; m_associationName.assign(value); }
    inline InstanceAssociationStatusInfo& WithAssociationName(const Aws::String& value) { SetAssociationName(value); return *this;}
    inline InstanceAssociationStatusInfo& WithAssociationName(Aws::String&& value) { SetAssociationName(std::move(value)); return *this;}
    inline InstanceAssociationStatusInfo& WithAssociationName(const char* value) { SetAssociationName(value); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Utils::DateTime m_executionDate;
    bool m_executionDateHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet = false;

    Aws::String m_executionSummary;
    bool m_executionSummaryHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    InstanceAssociationOutputUrl m_outputUrl;
    bool m_outputUrlHasBeenSet = false;

    Aws::String m_associationName;
    bool m_associationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
