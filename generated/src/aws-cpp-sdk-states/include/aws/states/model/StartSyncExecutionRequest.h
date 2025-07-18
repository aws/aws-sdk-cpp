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
    AWS_SFN_API StartSyncExecutionRequest() = default;

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
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    StartSyncExecutionRequest& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the execution.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartSyncExecutionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"{\"first_name\" : \"Alejandro\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"{}"</code> </p>  <p>Length constraints apply
     * to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    StartSyncExecutionRequest& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>  <p> For X-Ray traces, all Amazon Web Services
     * services use the <code>X-Amzn-Trace-Id</code> header from the HTTP request.
     * Using the header is the preferred mechanism to identify a trace.
     * <code>StartExecution</code> and <code>StartSyncExecution</code> API operations
     * can also use <code>traceHeader</code> from the body of the request payload. If
     * <b>both</b> sources are provided, Step Functions will use the <b>header
     * value</b> (preferred) over the value in the request body. </p> 
     */
    inline const Aws::String& GetTraceHeader() const { return m_traceHeader; }
    inline bool TraceHeaderHasBeenSet() const { return m_traceHeaderHasBeenSet; }
    template<typename TraceHeaderT = Aws::String>
    void SetTraceHeader(TraceHeaderT&& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = std::forward<TraceHeaderT>(value); }
    template<typename TraceHeaderT = Aws::String>
    StartSyncExecutionRequest& WithTraceHeader(TraceHeaderT&& value) { SetTraceHeader(std::forward<TraceHeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your state machine definition is encrypted with a KMS key, callers must
     * have <code>kms:Decrypt</code> permission to decrypt the definition.
     * Alternatively, you can call the API with <code>includedData =
     * METADATA_ONLY</code> to get a successful response without the encrypted
     * definition.</p>
     */
    inline IncludedData GetIncludedData() const { return m_includedData; }
    inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
    inline void SetIncludedData(IncludedData value) { m_includedDataHasBeenSet = true; m_includedData = value; }
    inline StartSyncExecutionRequest& WithIncludedData(IncludedData value) { SetIncludedData(value); return *this;}
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

    IncludedData m_includedData{IncludedData::NOT_SET};
    bool m_includedDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
