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
    AWS_SSM_API StartExecutionPreviewRequest() = default;

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
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    StartExecutionPreviewRequest& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Automation runbook to run. The default value is
     * <code>$DEFAULT</code>.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    StartExecutionPreviewRequest& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the inputs that can be specified for the preview operation.
     * </p>
     */
    inline const ExecutionInputs& GetExecutionInputs() const { return m_executionInputs; }
    inline bool ExecutionInputsHasBeenSet() const { return m_executionInputsHasBeenSet; }
    template<typename ExecutionInputsT = ExecutionInputs>
    void SetExecutionInputs(ExecutionInputsT&& value) { m_executionInputsHasBeenSet = true; m_executionInputs = std::forward<ExecutionInputsT>(value); }
    template<typename ExecutionInputsT = ExecutionInputs>
    StartExecutionPreviewRequest& WithExecutionInputs(ExecutionInputsT&& value) { SetExecutionInputs(std::forward<ExecutionInputsT>(value)); return *this;}
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
