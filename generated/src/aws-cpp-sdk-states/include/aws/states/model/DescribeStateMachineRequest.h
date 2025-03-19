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
  class DescribeStateMachineRequest : public SFNRequest
  {
  public:
    AWS_SFN_API DescribeStateMachineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStateMachine"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine for which you want the
     * information.</p> <p>If you specify a state machine version ARN, this API returns
     * details about that version. The version ARN is a combination of state machine
     * ARN and the version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    DescribeStateMachineRequest& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your state machine definition is encrypted with a KMS key, callers must
     * have <code>kms:Decrypt</code> permission to decrypt the definition.
     * Alternatively, you can call the API with <code>includedData =
     * METADATA_ONLY</code> to get a successful response without the encrypted
     * definition.</p>  <p> When calling a labelled ARN for an encrypted state
     * machine, the <code>includedData = METADATA_ONLY</code> parameter will not apply
     * because Step Functions needs to decrypt the entire state machine definition to
     * get the Distributed Map state’s definition. In this case, the API caller needs
     * to have <code>kms:Decrypt</code> permission. </p> 
     */
    inline IncludedData GetIncludedData() const { return m_includedData; }
    inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
    inline void SetIncludedData(IncludedData value) { m_includedDataHasBeenSet = true; m_includedData = value; }
    inline DescribeStateMachineRequest& WithIncludedData(IncludedData value) { SetIncludedData(value); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    IncludedData m_includedData{IncludedData::NOT_SET};
    bool m_includedDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
