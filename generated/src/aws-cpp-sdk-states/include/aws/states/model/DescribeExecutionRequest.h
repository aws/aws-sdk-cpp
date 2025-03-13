/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/IncludedData.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class DescribeExecutionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API DescribeExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExecution"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the execution to describe.</p>
     */
    inline const Aws::String& GetExecutionArn() const { return m_executionArn; }
    inline bool ExecutionArnHasBeenSet() const { return m_executionArnHasBeenSet; }
    template<typename ExecutionArnT = Aws::String>
    void SetExecutionArn(ExecutionArnT&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::forward<ExecutionArnT>(value); }
    template<typename ExecutionArnT = Aws::String>
    DescribeExecutionRequest& WithExecutionArn(ExecutionArnT&& value) { SetExecutionArn(std::forward<ExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your state machine definition is encrypted with a KMS key, callers must
     * have <code>kms:Decrypt</code> permission to decrypt the definition.
     * Alternatively, you can call DescribeStateMachine API with <code>includedData =
     * METADATA_ONLY</code> to get a successful response without the encrypted
     * definition.</p>
     */
    inline IncludedData GetIncludedData() const { return m_includedData; }
    inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
    inline void SetIncludedData(IncludedData value) { m_includedDataHasBeenSet = true; m_includedData = value; }
    inline DescribeExecutionRequest& WithIncludedData(IncludedData value) { SetIncludedData(value); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    IncludedData m_includedData{IncludedData::NOT_SET};
    bool m_includedDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
