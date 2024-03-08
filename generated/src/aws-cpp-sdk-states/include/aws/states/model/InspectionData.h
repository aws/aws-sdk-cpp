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


    /**
     * <p>The raw state input.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The raw state input.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The raw state input.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The raw state input.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The raw state input.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The raw state input.</p>
     */
    inline InspectionData& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The raw state input.</p>
     */
    inline InspectionData& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The raw state input.</p>
     */
    inline InspectionData& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>The input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
     * filter.</p>
     */
    inline const Aws::String& GetAfterInputPath() const{ return m_afterInputPath; }

    /**
     * <p>The input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
     * filter.</p>
     */
    inline bool AfterInputPathHasBeenSet() const { return m_afterInputPathHasBeenSet; }

    /**
     * <p>The input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
     * filter.</p>
     */
    inline void SetAfterInputPath(const Aws::String& value) { m_afterInputPathHasBeenSet = true; m_afterInputPath = value; }

    /**
     * <p>The input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
     * filter.</p>
     */
    inline void SetAfterInputPath(Aws::String&& value) { m_afterInputPathHasBeenSet = true; m_afterInputPath = std::move(value); }

    /**
     * <p>The input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
     * filter.</p>
     */
    inline void SetAfterInputPath(const char* value) { m_afterInputPathHasBeenSet = true; m_afterInputPath.assign(value); }

    /**
     * <p>The input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterInputPath(const Aws::String& value) { SetAfterInputPath(value); return *this;}

    /**
     * <p>The input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterInputPath(Aws::String&& value) { SetAfterInputPath(std::move(value)); return *this;}

    /**
     * <p>The input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterInputPath(const char* value) { SetAfterInputPath(value); return *this;}


    /**
     * <p>The effective input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
     * filter.</p>
     */
    inline const Aws::String& GetAfterParameters() const{ return m_afterParameters; }

    /**
     * <p>The effective input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
     * filter.</p>
     */
    inline bool AfterParametersHasBeenSet() const { return m_afterParametersHasBeenSet; }

    /**
     * <p>The effective input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
     * filter.</p>
     */
    inline void SetAfterParameters(const Aws::String& value) { m_afterParametersHasBeenSet = true; m_afterParameters = value; }

    /**
     * <p>The effective input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
     * filter.</p>
     */
    inline void SetAfterParameters(Aws::String&& value) { m_afterParametersHasBeenSet = true; m_afterParameters = std::move(value); }

    /**
     * <p>The effective input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
     * filter.</p>
     */
    inline void SetAfterParameters(const char* value) { m_afterParametersHasBeenSet = true; m_afterParameters.assign(value); }

    /**
     * <p>The effective input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterParameters(const Aws::String& value) { SetAfterParameters(value); return *this;}

    /**
     * <p>The effective input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterParameters(Aws::String&& value) { SetAfterParameters(std::move(value)); return *this;}

    /**
     * <p>The effective input after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterParameters(const char* value) { SetAfterParameters(value); return *this;}


    /**
     * <p>The state's raw result.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p>The state's raw result.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>The state's raw result.</p>
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The state's raw result.</p>
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The state's raw result.</p>
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * <p>The state's raw result.</p>
     */
    inline InspectionData& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p>The state's raw result.</p>
     */
    inline InspectionData& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>The state's raw result.</p>
     */
    inline InspectionData& WithResult(const char* value) { SetResult(value); return *this;}


    /**
     * <p>The effective result after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
     * filter.</p>
     */
    inline const Aws::String& GetAfterResultSelector() const{ return m_afterResultSelector; }

    /**
     * <p>The effective result after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
     * filter.</p>
     */
    inline bool AfterResultSelectorHasBeenSet() const { return m_afterResultSelectorHasBeenSet; }

    /**
     * <p>The effective result after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
     * filter.</p>
     */
    inline void SetAfterResultSelector(const Aws::String& value) { m_afterResultSelectorHasBeenSet = true; m_afterResultSelector = value; }

    /**
     * <p>The effective result after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
     * filter.</p>
     */
    inline void SetAfterResultSelector(Aws::String&& value) { m_afterResultSelectorHasBeenSet = true; m_afterResultSelector = std::move(value); }

    /**
     * <p>The effective result after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
     * filter.</p>
     */
    inline void SetAfterResultSelector(const char* value) { m_afterResultSelectorHasBeenSet = true; m_afterResultSelector.assign(value); }

    /**
     * <p>The effective result after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterResultSelector(const Aws::String& value) { SetAfterResultSelector(value); return *this;}

    /**
     * <p>The effective result after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterResultSelector(Aws::String&& value) { SetAfterResultSelector(std::move(value)); return *this;}

    /**
     * <p>The effective result after Step Functions applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterResultSelector(const char* value) { SetAfterResultSelector(value); return *this;}


    /**
     * <p>The effective result combined with the raw state input after Step Functions
     * applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
     * filter.</p>
     */
    inline const Aws::String& GetAfterResultPath() const{ return m_afterResultPath; }

    /**
     * <p>The effective result combined with the raw state input after Step Functions
     * applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
     * filter.</p>
     */
    inline bool AfterResultPathHasBeenSet() const { return m_afterResultPathHasBeenSet; }

    /**
     * <p>The effective result combined with the raw state input after Step Functions
     * applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
     * filter.</p>
     */
    inline void SetAfterResultPath(const Aws::String& value) { m_afterResultPathHasBeenSet = true; m_afterResultPath = value; }

    /**
     * <p>The effective result combined with the raw state input after Step Functions
     * applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
     * filter.</p>
     */
    inline void SetAfterResultPath(Aws::String&& value) { m_afterResultPathHasBeenSet = true; m_afterResultPath = std::move(value); }

    /**
     * <p>The effective result combined with the raw state input after Step Functions
     * applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
     * filter.</p>
     */
    inline void SetAfterResultPath(const char* value) { m_afterResultPathHasBeenSet = true; m_afterResultPath.assign(value); }

    /**
     * <p>The effective result combined with the raw state input after Step Functions
     * applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterResultPath(const Aws::String& value) { SetAfterResultPath(value); return *this;}

    /**
     * <p>The effective result combined with the raw state input after Step Functions
     * applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterResultPath(Aws::String&& value) { SetAfterResultPath(std::move(value)); return *this;}

    /**
     * <p>The effective result combined with the raw state input after Step Functions
     * applies the <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
     * filter.</p>
     */
    inline InspectionData& WithAfterResultPath(const char* value) { SetAfterResultPath(value); return *this;}


    /**
     * <p>The raw HTTP request that is sent when you test an HTTP Task.</p>
     */
    inline const InspectionDataRequest& GetRequest() const{ return m_request; }

    /**
     * <p>The raw HTTP request that is sent when you test an HTTP Task.</p>
     */
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }

    /**
     * <p>The raw HTTP request that is sent when you test an HTTP Task.</p>
     */
    inline void SetRequest(const InspectionDataRequest& value) { m_requestHasBeenSet = true; m_request = value; }

    /**
     * <p>The raw HTTP request that is sent when you test an HTTP Task.</p>
     */
    inline void SetRequest(InspectionDataRequest&& value) { m_requestHasBeenSet = true; m_request = std::move(value); }

    /**
     * <p>The raw HTTP request that is sent when you test an HTTP Task.</p>
     */
    inline InspectionData& WithRequest(const InspectionDataRequest& value) { SetRequest(value); return *this;}

    /**
     * <p>The raw HTTP request that is sent when you test an HTTP Task.</p>
     */
    inline InspectionData& WithRequest(InspectionDataRequest&& value) { SetRequest(std::move(value)); return *this;}


    /**
     * <p>The raw HTTP response that is returned when you test an HTTP Task.</p>
     */
    inline const InspectionDataResponse& GetResponse() const{ return m_response; }

    /**
     * <p>The raw HTTP response that is returned when you test an HTTP Task.</p>
     */
    inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }

    /**
     * <p>The raw HTTP response that is returned when you test an HTTP Task.</p>
     */
    inline void SetResponse(const InspectionDataResponse& value) { m_responseHasBeenSet = true; m_response = value; }

    /**
     * <p>The raw HTTP response that is returned when you test an HTTP Task.</p>
     */
    inline void SetResponse(InspectionDataResponse&& value) { m_responseHasBeenSet = true; m_response = std::move(value); }

    /**
     * <p>The raw HTTP response that is returned when you test an HTTP Task.</p>
     */
    inline InspectionData& WithResponse(const InspectionDataResponse& value) { SetResponse(value); return *this;}

    /**
     * <p>The raw HTTP response that is returned when you test an HTTP Task.</p>
     */
    inline InspectionData& WithResponse(InspectionDataResponse&& value) { SetResponse(std::move(value)); return *this;}

  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

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
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
