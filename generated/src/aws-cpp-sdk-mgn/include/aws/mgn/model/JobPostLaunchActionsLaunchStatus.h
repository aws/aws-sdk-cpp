/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/PostLaunchActionExecutionStatus.h>
#include <aws/mgn/model/SsmDocument.h>
#include <aws/mgn/model/SsmDocumentType.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Launch Status of the Job Post Launch Actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/JobPostLaunchActionsLaunchStatus">AWS
   * API Reference</a></p>
   */
  class JobPostLaunchActionsLaunchStatus
  {
  public:
    AWS_MGN_API JobPostLaunchActionsLaunchStatus() = default;
    AWS_MGN_API JobPostLaunchActionsLaunchStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API JobPostLaunchActionsLaunchStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline const Aws::String& GetExecutionID() const { return m_executionID; }
    inline bool ExecutionIDHasBeenSet() const { return m_executionIDHasBeenSet; }
    template<typename ExecutionIDT = Aws::String>
    void SetExecutionID(ExecutionIDT&& value) { m_executionIDHasBeenSet = true; m_executionID = std::forward<ExecutionIDT>(value); }
    template<typename ExecutionIDT = Aws::String>
    JobPostLaunchActionsLaunchStatus& WithExecutionID(ExecutionIDT&& value) { SetExecutionID(std::forward<ExecutionIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document's execution status.</p>
     */
    inline PostLaunchActionExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(PostLaunchActionExecutionStatus value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline JobPostLaunchActionsLaunchStatus& WithExecutionStatus(PostLaunchActionExecutionStatus value) { SetExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    JobPostLaunchActionsLaunchStatus& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager's Document of the of the Job Post Launch Actions.</p>
     */
    inline const SsmDocument& GetSsmDocument() const { return m_ssmDocument; }
    inline bool SsmDocumentHasBeenSet() const { return m_ssmDocumentHasBeenSet; }
    template<typename SsmDocumentT = SsmDocument>
    void SetSsmDocument(SsmDocumentT&& value) { m_ssmDocumentHasBeenSet = true; m_ssmDocument = std::forward<SsmDocumentT>(value); }
    template<typename SsmDocumentT = SsmDocument>
    JobPostLaunchActionsLaunchStatus& WithSsmDocument(SsmDocumentT&& value) { SetSsmDocument(std::forward<SsmDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document type.</p>
     */
    inline SsmDocumentType GetSsmDocumentType() const { return m_ssmDocumentType; }
    inline bool SsmDocumentTypeHasBeenSet() const { return m_ssmDocumentTypeHasBeenSet; }
    inline void SetSsmDocumentType(SsmDocumentType value) { m_ssmDocumentTypeHasBeenSet = true; m_ssmDocumentType = value; }
    inline JobPostLaunchActionsLaunchStatus& WithSsmDocumentType(SsmDocumentType value) { SetSsmDocumentType(value); return *this;}
    ///@}
  private:

    Aws::String m_executionID;
    bool m_executionIDHasBeenSet = false;

    PostLaunchActionExecutionStatus m_executionStatus{PostLaunchActionExecutionStatus::NOT_SET};
    bool m_executionStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    SsmDocument m_ssmDocument;
    bool m_ssmDocumentHasBeenSet = false;

    SsmDocumentType m_ssmDocumentType{SsmDocumentType::NOT_SET};
    bool m_ssmDocumentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
