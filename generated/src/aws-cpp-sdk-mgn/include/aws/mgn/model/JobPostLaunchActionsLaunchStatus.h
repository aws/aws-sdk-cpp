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
    AWS_MGN_API JobPostLaunchActionsLaunchStatus();
    AWS_MGN_API JobPostLaunchActionsLaunchStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API JobPostLaunchActionsLaunchStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline const Aws::String& GetExecutionID() const{ return m_executionID; }
    inline bool ExecutionIDHasBeenSet() const { return m_executionIDHasBeenSet; }
    inline void SetExecutionID(const Aws::String& value) { m_executionIDHasBeenSet = true; m_executionID = value; }
    inline void SetExecutionID(Aws::String&& value) { m_executionIDHasBeenSet = true; m_executionID = std::move(value); }
    inline void SetExecutionID(const char* value) { m_executionIDHasBeenSet = true; m_executionID.assign(value); }
    inline JobPostLaunchActionsLaunchStatus& WithExecutionID(const Aws::String& value) { SetExecutionID(value); return *this;}
    inline JobPostLaunchActionsLaunchStatus& WithExecutionID(Aws::String&& value) { SetExecutionID(std::move(value)); return *this;}
    inline JobPostLaunchActionsLaunchStatus& WithExecutionID(const char* value) { SetExecutionID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document's execution status.</p>
     */
    inline const PostLaunchActionExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(const PostLaunchActionExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline void SetExecutionStatus(PostLaunchActionExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }
    inline JobPostLaunchActionsLaunchStatus& WithExecutionStatus(const PostLaunchActionExecutionStatus& value) { SetExecutionStatus(value); return *this;}
    inline JobPostLaunchActionsLaunchStatus& WithExecutionStatus(PostLaunchActionExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline JobPostLaunchActionsLaunchStatus& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline JobPostLaunchActionsLaunchStatus& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline JobPostLaunchActionsLaunchStatus& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager's Document of the of the Job Post Launch Actions.</p>
     */
    inline const SsmDocument& GetSsmDocument() const{ return m_ssmDocument; }
    inline bool SsmDocumentHasBeenSet() const { return m_ssmDocumentHasBeenSet; }
    inline void SetSsmDocument(const SsmDocument& value) { m_ssmDocumentHasBeenSet = true; m_ssmDocument = value; }
    inline void SetSsmDocument(SsmDocument&& value) { m_ssmDocumentHasBeenSet = true; m_ssmDocument = std::move(value); }
    inline JobPostLaunchActionsLaunchStatus& WithSsmDocument(const SsmDocument& value) { SetSsmDocument(value); return *this;}
    inline JobPostLaunchActionsLaunchStatus& WithSsmDocument(SsmDocument&& value) { SetSsmDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Document type.</p>
     */
    inline const SsmDocumentType& GetSsmDocumentType() const{ return m_ssmDocumentType; }
    inline bool SsmDocumentTypeHasBeenSet() const { return m_ssmDocumentTypeHasBeenSet; }
    inline void SetSsmDocumentType(const SsmDocumentType& value) { m_ssmDocumentTypeHasBeenSet = true; m_ssmDocumentType = value; }
    inline void SetSsmDocumentType(SsmDocumentType&& value) { m_ssmDocumentTypeHasBeenSet = true; m_ssmDocumentType = std::move(value); }
    inline JobPostLaunchActionsLaunchStatus& WithSsmDocumentType(const SsmDocumentType& value) { SetSsmDocumentType(value); return *this;}
    inline JobPostLaunchActionsLaunchStatus& WithSsmDocumentType(SsmDocumentType&& value) { SetSsmDocumentType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionID;
    bool m_executionIDHasBeenSet = false;

    PostLaunchActionExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    SsmDocument m_ssmDocument;
    bool m_ssmDocumentHasBeenSet = false;

    SsmDocumentType m_ssmDocumentType;
    bool m_ssmDocumentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
