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
  class StartSyncExecutionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API StartSyncExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSyncExecution"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }
    inline StartSyncExecutionRequest& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}
    inline StartSyncExecutionRequest& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}
    inline StartSyncExecutionRequest& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the execution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartSyncExecutionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartSyncExecutionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartSyncExecutionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p>  <p>Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline StartSyncExecutionRequest& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline StartSyncExecutionRequest& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline StartSyncExecutionRequest& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>
     */
    inline const Aws::String& GetTraceHeader() const{ return m_traceHeader; }
    inline bool TraceHeaderHasBeenSet() const { return m_traceHeaderHasBeenSet; }
    inline void SetTraceHeader(const Aws::String& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = value; }
    inline void SetTraceHeader(Aws::String&& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = std::move(value); }
    inline void SetTraceHeader(const char* value) { m_traceHeaderHasBeenSet = true; m_traceHeader.assign(value); }
    inline StartSyncExecutionRequest& WithTraceHeader(const Aws::String& value) { SetTraceHeader(value); return *this;}
    inline StartSyncExecutionRequest& WithTraceHeader(Aws::String&& value) { SetTraceHeader(std::move(value)); return *this;}
    inline StartSyncExecutionRequest& WithTraceHeader(const char* value) { SetTraceHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your state machine definition is encrypted with a KMS key, callers must
     * have <code>kms:Decrypt</code> permission to decrypt the definition.
     * Alternatively, you can call the API with <code>includedData =
     * METADATA_ONLY</code> to get a successful response without the encrypted
     * definition.</p>
     */
    inline const IncludedData& GetIncludedData() const{ return m_includedData; }
    inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
    inline void SetIncludedData(const IncludedData& value) { m_includedDataHasBeenSet = true; m_includedData = value; }
    inline void SetIncludedData(IncludedData&& value) { m_includedDataHasBeenSet = true; m_includedData = std::move(value); }
    inline StartSyncExecutionRequest& WithIncludedData(const IncludedData& value) { SetIncludedData(value); return *this;}
    inline StartSyncExecutionRequest& WithIncludedData(IncludedData&& value) { SetIncludedData(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_traceHeader;
    bool m_traceHeaderHasBeenSet = false;

    IncludedData m_includedData;
    bool m_includedDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
