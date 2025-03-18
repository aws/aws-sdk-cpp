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
    AWS_SSM_API InstanceAssociationStatusInfo() = default;
    AWS_SSM_API InstanceAssociationStatusInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceAssociationStatusInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    InstanceAssociationStatusInfo& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the association.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceAssociationStatusInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association document versions.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    InstanceAssociationStatusInfo& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the association applied to the managed node.</p>
     */
    inline const Aws::String& GetAssociationVersion() const { return m_associationVersion; }
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }
    template<typename AssociationVersionT = Aws::String>
    void SetAssociationVersion(AssociationVersionT&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::forward<AssociationVersionT>(value); }
    template<typename AssociationVersionT = Aws::String>
    InstanceAssociationStatusInfo& WithAssociationVersion(AssociationVersionT&& value) { SetAssociationVersion(std::forward<AssociationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID where the association was created.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceAssociationStatusInfo& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the association ran. </p>
     */
    inline const Aws::Utils::DateTime& GetExecutionDate() const { return m_executionDate; }
    inline bool ExecutionDateHasBeenSet() const { return m_executionDateHasBeenSet; }
    template<typename ExecutionDateT = Aws::Utils::DateTime>
    void SetExecutionDate(ExecutionDateT&& value) { m_executionDateHasBeenSet = true; m_executionDate = std::forward<ExecutionDateT>(value); }
    template<typename ExecutionDateT = Aws::Utils::DateTime>
    InstanceAssociationStatusInfo& WithExecutionDate(ExecutionDateT&& value) { SetExecutionDate(std::forward<ExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status information about the association.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    InstanceAssociationStatusInfo& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed status information about the association.</p>
     */
    inline const Aws::String& GetDetailedStatus() const { return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    template<typename DetailedStatusT = Aws::String>
    void SetDetailedStatus(DetailedStatusT&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::forward<DetailedStatusT>(value); }
    template<typename DetailedStatusT = Aws::String>
    InstanceAssociationStatusInfo& WithDetailedStatus(DetailedStatusT&& value) { SetDetailedStatus(std::forward<DetailedStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about association execution.</p>
     */
    inline const Aws::String& GetExecutionSummary() const { return m_executionSummary; }
    inline bool ExecutionSummaryHasBeenSet() const { return m_executionSummaryHasBeenSet; }
    template<typename ExecutionSummaryT = Aws::String>
    void SetExecutionSummary(ExecutionSummaryT&& value) { m_executionSummaryHasBeenSet = true; m_executionSummary = std::forward<ExecutionSummaryT>(value); }
    template<typename ExecutionSummaryT = Aws::String>
    InstanceAssociationStatusInfo& WithExecutionSummary(ExecutionSummaryT&& value) { SetExecutionSummary(std::forward<ExecutionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code returned by the request to create the association.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    InstanceAssociationStatusInfo& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline const InstanceAssociationOutputUrl& GetOutputUrl() const { return m_outputUrl; }
    inline bool OutputUrlHasBeenSet() const { return m_outputUrlHasBeenSet; }
    template<typename OutputUrlT = InstanceAssociationOutputUrl>
    void SetOutputUrl(OutputUrlT&& value) { m_outputUrlHasBeenSet = true; m_outputUrl = std::forward<OutputUrlT>(value); }
    template<typename OutputUrlT = InstanceAssociationOutputUrl>
    InstanceAssociationStatusInfo& WithOutputUrl(OutputUrlT&& value) { SetOutputUrl(std::forward<OutputUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the association applied to the managed node.</p>
     */
    inline const Aws::String& GetAssociationName() const { return m_associationName; }
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }
    template<typename AssociationNameT = Aws::String>
    void SetAssociationName(AssociationNameT&& value) { m_associationNameHasBeenSet = true; m_associationName = std::forward<AssociationNameT>(value); }
    template<typename AssociationNameT = Aws::String>
    InstanceAssociationStatusInfo& WithAssociationName(AssociationNameT&& value) { SetAssociationName(std::forward<AssociationNameT>(value)); return *this;}
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

    Aws::Utils::DateTime m_executionDate{};
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
