/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/InspectionDataRequest.h>
#include <aws/states/model/InspectionDataResponse.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains additional details about the state's execution, including its input
   * and output data processing flow, and HTTP request and response
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/InspectionData">AWS
   * API Reference</a></p>
   */
  class InspectionData
  {
  public:
    AWS_SFN_API InspectionData();
    AWS_SFN_API InspectionData(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API InspectionData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The raw state input.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline InspectionData& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline InspectionData& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline InspectionData& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input after Step Functions applies an Arguments filter. This event will
     * only be present when QueryLanguage for the state machine or individual states is
     * set to JSONata. For more info, see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/data-transform.html">Transforming
     * data with Step Functions</a>.</p>
     */
    inline const Aws::String& GetAfterArguments() const{ return m_afterArguments; }
    inline bool AfterArgumentsHasBeenSet() const { return m_afterArgumentsHasBeenSet; }
    inline void SetAfterArguments(const Aws::String& value) { m_afterArgumentsHasBeenSet = true; m_afterArguments = value; }
    inline void SetAfterArguments(Aws::String&& value) { m_afterArgumentsHasBeenSet = true; m_afterArguments = std::move(value); }
    inline void SetAfterArguments(const char* value) { m_afterArgumentsHasBeenSet = true; m_afterArguments.assign(value); }
    inline InspectionData& WithAfterArguments(const Aws::String& value) { SetAfterArguments(value); return *this;}
    inline InspectionData& WithAfterArguments(Aws::String&& value) { SetAfterArguments(std::move(value)); return *this;}
    inline InspectionData& WithAfterArguments(const char* value) { SetAfterArguments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
     * filter. Not populated when QueryLanguage is JSONata.</p>
     */
    inline const Aws::String& GetAfterInputPath() const{ return m_afterInputPath; }
    inline bool AfterInputPathHasBeenSet() const { return m_afterInputPathHasBeenSet; }
    inline void SetAfterInputPath(const Aws::String& value) { m_afterInputPathHasBeenSet = true; m_afterInputPath = value; }
    inline void SetAfterInputPath(Aws::String&& value) { m_afterInputPathHasBeenSet = true; m_afterInputPath = std::move(value); }
    inline void SetAfterInputPath(const char* value) { m_afterInputPathHasBeenSet = true; m_afterInputPath.assign(value); }
    inline InspectionData& WithAfterInputPath(const Aws::String& value) { SetAfterInputPath(value); return *this;}
    inline InspectionData& WithAfterInputPath(Aws::String&& value) { SetAfterInputPath(std::move(value)); return *this;}
    inline InspectionData& WithAfterInputPath(const char* value) { SetAfterInputPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
     * filter. Not populated when QueryLanguage is JSONata.</p>
     */
    inline const Aws::String& GetAfterParameters() const{ return m_afterParameters; }
    inline bool AfterParametersHasBeenSet() const { return m_afterParametersHasBeenSet; }
    inline void SetAfterParameters(const Aws::String& value) { m_afterParametersHasBeenSet = true; m_afterParameters = value; }
    inline void SetAfterParameters(Aws::String&& value) { m_afterParametersHasBeenSet = true; m_afterParameters = std::move(value); }
    inline void SetAfterParameters(const char* value) { m_afterParametersHasBeenSet = true; m_afterParameters.assign(value); }
    inline InspectionData& WithAfterParameters(const Aws::String& value) { SetAfterParameters(value); return *this;}
    inline InspectionData& WithAfterParameters(Aws::String&& value) { SetAfterParameters(std::move(value)); return *this;}
    inline InspectionData& WithAfterParameters(const char* value) { SetAfterParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state's raw result.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }
    inline InspectionData& WithResult(const Aws::String& value) { SetResult(value); return *this;}
    inline InspectionData& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}
    inline InspectionData& WithResult(const char* value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective result after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
     * filter. Not populated when QueryLanguage is JSONata.</p>
     */
    inline const Aws::String& GetAfterResultSelector() const{ return m_afterResultSelector; }
    inline bool AfterResultSelectorHasBeenSet() const { return m_afterResultSelectorHasBeenSet; }
    inline void SetAfterResultSelector(const Aws::String& value) { m_afterResultSelectorHasBeenSet = true; m_afterResultSelector = value; }
    inline void SetAfterResultSelector(Aws::String&& value) { m_afterResultSelectorHasBeenSet = true; m_afterResultSelector = std::move(value); }
    inline void SetAfterResultSelector(const char* value) { m_afterResultSelectorHasBeenSet = true; m_afterResultSelector.assign(value); }
    inline InspectionData& WithAfterResultSelector(const Aws::String& value) { SetAfterResultSelector(value); return *this;}
    inline InspectionData& WithAfterResultSelector(Aws::String&& value) { SetAfterResultSelector(std::move(value)); return *this;}
    inline InspectionData& WithAfterResultSelector(const char* value) { SetAfterResultSelector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective result combined with the raw state input after Step Functions
     * applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
     * filter. Not populated when QueryLanguage is JSONata.</p>
     */
    inline const Aws::String& GetAfterResultPath() const{ return m_afterResultPath; }
    inline bool AfterResultPathHasBeenSet() const { return m_afterResultPathHasBeenSet; }
    inline void SetAfterResultPath(const Aws::String& value) { m_afterResultPathHasBeenSet = true; m_afterResultPath = value; }
    inline void SetAfterResultPath(Aws::String&& value) { m_afterResultPathHasBeenSet = true; m_afterResultPath = std::move(value); }
    inline void SetAfterResultPath(const char* value) { m_afterResultPathHasBeenSet = true; m_afterResultPath.assign(value); }
    inline InspectionData& WithAfterResultPath(const Aws::String& value) { SetAfterResultPath(value); return *this;}
    inline InspectionData& WithAfterResultPath(Aws::String&& value) { SetAfterResultPath(std::move(value)); return *this;}
    inline InspectionData& WithAfterResultPath(const char* value) { SetAfterResultPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw HTTP request that is sent when you test an HTTP Task.</p>
     */
    inline const InspectionDataRequest& GetRequest() const{ return m_request; }
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }
    inline void SetRequest(const InspectionDataRequest& value) { m_requestHasBeenSet = true; m_request = value; }
    inline void SetRequest(InspectionDataRequest&& value) { m_requestHasBeenSet = true; m_request = std::move(value); }
    inline InspectionData& WithRequest(const InspectionDataRequest& value) { SetRequest(value); return *this;}
    inline InspectionData& WithRequest(InspectionDataRequest&& value) { SetRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw HTTP response that is returned when you test an HTTP Task.</p>
     */
    inline const InspectionDataResponse& GetResponse() const{ return m_response; }
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
    inline void SetResponse(const InspectionDataResponse& value) { m_responseHasBeenSet = true; m_response = value; }
    inline void SetResponse(InspectionDataResponse&& value) { m_responseHasBeenSet = true; m_response = std::move(value); }
    inline InspectionData& WithResponse(const InspectionDataResponse& value) { SetResponse(value); return *this;}
    inline InspectionData& WithResponse(InspectionDataResponse&& value) { SetResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>JSON string that contains the set of workflow variables after execution of
     * the state. The set will include variables assigned in the state and variables
     * set up as test state input.</p>
     */
    inline const Aws::String& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::String& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::String&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline void SetVariables(const char* value) { m_variablesHasBeenSet = true; m_variables.assign(value); }
    inline InspectionData& WithVariables(const Aws::String& value) { SetVariables(value); return *this;}
    inline InspectionData& WithVariables(Aws::String&& value) { SetVariables(std::move(value)); return *this;}
    inline InspectionData& WithVariables(const char* value) { SetVariables(value); return *this;}
    ///@}
  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_afterArguments;
    bool m_afterArgumentsHasBeenSet = false;

    Aws::String m_afterInputPath;
    bool m_afterInputPathHasBeenSet = false;

    Aws::String m_afterParameters;
    bool m_afterParametersHasBeenSet = false;

    Aws::String m_result;
    bool m_resultHasBeenSet = false;

    Aws::String m_afterResultSelector;
    bool m_afterResultSelectorHasBeenSet = false;

    Aws::String m_afterResultPath;
    bool m_afterResultPathHasBeenSet = false;

    InspectionDataRequest m_request;
    bool m_requestHasBeenSet = false;

    InspectionDataResponse m_response;
    bool m_responseHasBeenSet = false;

    Aws::String m_variables;
    bool m_variablesHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
