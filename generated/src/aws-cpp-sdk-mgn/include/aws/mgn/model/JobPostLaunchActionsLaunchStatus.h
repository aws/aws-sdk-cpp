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


    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline const Aws::String& GetExecutionID() const{ return m_executionID; }

    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline bool ExecutionIDHasBeenSet() const { return m_executionIDHasBeenSet; }

    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline void SetExecutionID(const Aws::String& value) { m_executionIDHasBeenSet = true; m_executionID = value; }

    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline void SetExecutionID(Aws::String&& value) { m_executionIDHasBeenSet = true; m_executionID = std::move(value); }

    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline void SetExecutionID(const char* value) { m_executionIDHasBeenSet = true; m_executionID.assign(value); }

    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithExecutionID(const Aws::String& value) { SetExecutionID(value); return *this;}

    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithExecutionID(Aws::String&& value) { SetExecutionID(std::move(value)); return *this;}

    /**
     * <p>AWS Systems Manager Document's execution ID of the of the Job Post Launch
     * Actions.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithExecutionID(const char* value) { SetExecutionID(value); return *this;}


    /**
     * <p>AWS Systems Manager Document's execution status.</p>
     */
    inline const PostLaunchActionExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }

    /**
     * <p>AWS Systems Manager Document's execution status.</p>
     */
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }

    /**
     * <p>AWS Systems Manager Document's execution status.</p>
     */
    inline void SetExecutionStatus(const PostLaunchActionExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }

    /**
     * <p>AWS Systems Manager Document's execution status.</p>
     */
    inline void SetExecutionStatus(PostLaunchActionExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }

    /**
     * <p>AWS Systems Manager Document's execution status.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithExecutionStatus(const PostLaunchActionExecutionStatus& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p>AWS Systems Manager Document's execution status.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithExecutionStatus(PostLaunchActionExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>AWS Systems Manager Document's failure reason.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>AWS Systems Manager's Document of the of the Job Post Launch Actions.</p>
     */
    inline const SsmDocument& GetSsmDocument() const{ return m_ssmDocument; }

    /**
     * <p>AWS Systems Manager's Document of the of the Job Post Launch Actions.</p>
     */
    inline bool SsmDocumentHasBeenSet() const { return m_ssmDocumentHasBeenSet; }

    /**
     * <p>AWS Systems Manager's Document of the of the Job Post Launch Actions.</p>
     */
    inline void SetSsmDocument(const SsmDocument& value) { m_ssmDocumentHasBeenSet = true; m_ssmDocument = value; }

    /**
     * <p>AWS Systems Manager's Document of the of the Job Post Launch Actions.</p>
     */
    inline void SetSsmDocument(SsmDocument&& value) { m_ssmDocumentHasBeenSet = true; m_ssmDocument = std::move(value); }

    /**
     * <p>AWS Systems Manager's Document of the of the Job Post Launch Actions.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithSsmDocument(const SsmDocument& value) { SetSsmDocument(value); return *this;}

    /**
     * <p>AWS Systems Manager's Document of the of the Job Post Launch Actions.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithSsmDocument(SsmDocument&& value) { SetSsmDocument(std::move(value)); return *this;}


    /**
     * <p>AWS Systems Manager Document type.</p>
     */
    inline const SsmDocumentType& GetSsmDocumentType() const{ return m_ssmDocumentType; }

    /**
     * <p>AWS Systems Manager Document type.</p>
     */
    inline bool SsmDocumentTypeHasBeenSet() const { return m_ssmDocumentTypeHasBeenSet; }

    /**
     * <p>AWS Systems Manager Document type.</p>
     */
    inline void SetSsmDocumentType(const SsmDocumentType& value) { m_ssmDocumentTypeHasBeenSet = true; m_ssmDocumentType = value; }

    /**
     * <p>AWS Systems Manager Document type.</p>
     */
    inline void SetSsmDocumentType(SsmDocumentType&& value) { m_ssmDocumentTypeHasBeenSet = true; m_ssmDocumentType = std::move(value); }

    /**
     * <p>AWS Systems Manager Document type.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithSsmDocumentType(const SsmDocumentType& value) { SetSsmDocumentType(value); return *this;}

    /**
     * <p>AWS Systems Manager Document type.</p>
     */
    inline JobPostLaunchActionsLaunchStatus& WithSsmDocumentType(SsmDocumentType&& value) { SetSsmDocumentType(std::move(value)); return *this;}

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
