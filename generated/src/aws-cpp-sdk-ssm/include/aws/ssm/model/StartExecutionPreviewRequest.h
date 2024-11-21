/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ExecutionInputs.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class StartExecutionPreviewRequest : public SSMRequest
  {
  public:
    AWS_SSM_API StartExecutionPreviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExecutionPreview"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Automation runbook to run. The result of the execution
     * preview indicates what the impact would be of running this runbook.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }
    inline StartExecutionPreviewRequest& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}
    inline StartExecutionPreviewRequest& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}
    inline StartExecutionPreviewRequest& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Automation runbook to run. The default value is
     * <code>$DEFAULT</code>.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }
    inline StartExecutionPreviewRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline StartExecutionPreviewRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline StartExecutionPreviewRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the inputs that can be specified for the preview operation.
     * </p>
     */
    inline const ExecutionInputs& GetExecutionInputs() const{ return m_executionInputs; }
    inline bool ExecutionInputsHasBeenSet() const { return m_executionInputsHasBeenSet; }
    inline void SetExecutionInputs(const ExecutionInputs& value) { m_executionInputsHasBeenSet = true; m_executionInputs = value; }
    inline void SetExecutionInputs(ExecutionInputs&& value) { m_executionInputsHasBeenSet = true; m_executionInputs = std::move(value); }
    inline StartExecutionPreviewRequest& WithExecutionInputs(const ExecutionInputs& value) { SetExecutionInputs(value); return *this;}
    inline StartExecutionPreviewRequest& WithExecutionInputs(ExecutionInputs&& value) { SetExecutionInputs(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    ExecutionInputs m_executionInputs;
    bool m_executionInputsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
