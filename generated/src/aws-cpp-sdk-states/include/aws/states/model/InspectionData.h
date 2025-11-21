/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/model/InspectionDataRequest.h>
#include <aws/states/model/InspectionDataResponse.h>
#include <aws/states/model/InspectionErrorDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SFN {
namespace Model {

/**
 * <p>Contains additional details about the state's execution, including its input
 * and output data processing flow, and HTTP request and response
 * information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/InspectionData">AWS
 * API Reference</a></p>
 */
class InspectionData {
 public:
  AWS_SFN_API InspectionData() = default;
  AWS_SFN_API InspectionData(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API InspectionData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The raw state input.</p>
   */
  inline const Aws::String& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = Aws::String>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = Aws::String>
  InspectionData& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input after Step Functions applies an Arguments filter. This event will
   * only be present when QueryLanguage for the state machine or individual states is
   * set to JSONata. For more info, see <a
   * href="https://docs.aws.amazon.com/step-functions/latest/dg/data-transform.html">Transforming
   * data with Step Functions</a>.</p>
   */
  inline const Aws::String& GetAfterArguments() const { return m_afterArguments; }
  inline bool AfterArgumentsHasBeenSet() const { return m_afterArgumentsHasBeenSet; }
  template <typename AfterArgumentsT = Aws::String>
  void SetAfterArguments(AfterArgumentsT&& value) {
    m_afterArgumentsHasBeenSet = true;
    m_afterArguments = std::forward<AfterArgumentsT>(value);
  }
  template <typename AfterArgumentsT = Aws::String>
  InspectionData& WithAfterArguments(AfterArgumentsT&& value) {
    SetAfterArguments(std::forward<AfterArgumentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input after Step Functions applies the <a
   * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-inputpath">InputPath</a>
   * filter. Not populated when QueryLanguage is JSONata.</p>
   */
  inline const Aws::String& GetAfterInputPath() const { return m_afterInputPath; }
  inline bool AfterInputPathHasBeenSet() const { return m_afterInputPathHasBeenSet; }
  template <typename AfterInputPathT = Aws::String>
  void SetAfterInputPath(AfterInputPathT&& value) {
    m_afterInputPathHasBeenSet = true;
    m_afterInputPath = std::forward<AfterInputPathT>(value);
  }
  template <typename AfterInputPathT = Aws::String>
  InspectionData& WithAfterInputPath(AfterInputPathT&& value) {
    SetAfterInputPath(std::forward<AfterInputPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective input after Step Functions applies the <a
   * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-parameters">Parameters</a>
   * filter. Not populated when QueryLanguage is JSONata.</p>
   */
  inline const Aws::String& GetAfterParameters() const { return m_afterParameters; }
  inline bool AfterParametersHasBeenSet() const { return m_afterParametersHasBeenSet; }
  template <typename AfterParametersT = Aws::String>
  void SetAfterParameters(AfterParametersT&& value) {
    m_afterParametersHasBeenSet = true;
    m_afterParameters = std::forward<AfterParametersT>(value);
  }
  template <typename AfterParametersT = Aws::String>
  InspectionData& WithAfterParameters(AfterParametersT&& value) {
    SetAfterParameters(std::forward<AfterParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state's raw result.</p>
   */
  inline const Aws::String& GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  template <typename ResultT = Aws::String>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = Aws::String>
  InspectionData& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective result after Step Functions applies the <a
   * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-inputpath-params.html#input-output-resultselector">ResultSelector</a>
   * filter. Not populated when QueryLanguage is JSONata.</p>
   */
  inline const Aws::String& GetAfterResultSelector() const { return m_afterResultSelector; }
  inline bool AfterResultSelectorHasBeenSet() const { return m_afterResultSelectorHasBeenSet; }
  template <typename AfterResultSelectorT = Aws::String>
  void SetAfterResultSelector(AfterResultSelectorT&& value) {
    m_afterResultSelectorHasBeenSet = true;
    m_afterResultSelector = std::forward<AfterResultSelectorT>(value);
  }
  template <typename AfterResultSelectorT = Aws::String>
  InspectionData& WithAfterResultSelector(AfterResultSelectorT&& value) {
    SetAfterResultSelector(std::forward<AfterResultSelectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective result combined with the raw state input after Step Functions
   * applies the <a
   * href="https://docs.aws.amazon.com/step-functions/latest/dg/input-output-resultpath.html">ResultPath</a>
   * filter. Not populated when QueryLanguage is JSONata.</p>
   */
  inline const Aws::String& GetAfterResultPath() const { return m_afterResultPath; }
  inline bool AfterResultPathHasBeenSet() const { return m_afterResultPathHasBeenSet; }
  template <typename AfterResultPathT = Aws::String>
  void SetAfterResultPath(AfterResultPathT&& value) {
    m_afterResultPathHasBeenSet = true;
    m_afterResultPath = std::forward<AfterResultPathT>(value);
  }
  template <typename AfterResultPathT = Aws::String>
  InspectionData& WithAfterResultPath(AfterResultPathT&& value) {
    SetAfterResultPath(std::forward<AfterResultPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The raw HTTP request that is sent when you test an HTTP Task.</p>
   */
  inline const InspectionDataRequest& GetRequest() const { return m_request; }
  inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }
  template <typename RequestT = InspectionDataRequest>
  void SetRequest(RequestT&& value) {
    m_requestHasBeenSet = true;
    m_request = std::forward<RequestT>(value);
  }
  template <typename RequestT = InspectionDataRequest>
  InspectionData& WithRequest(RequestT&& value) {
    SetRequest(std::forward<RequestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The raw HTTP response that is returned when you test an HTTP Task.</p>
   */
  inline const InspectionDataResponse& GetResponse() const { return m_response; }
  inline bool ResponseHasBeenSet() const { return m_responseHasBeenSet; }
  template <typename ResponseT = InspectionDataResponse>
  void SetResponse(ResponseT&& value) {
    m_responseHasBeenSet = true;
    m_response = std::forward<ResponseT>(value);
  }
  template <typename ResponseT = InspectionDataResponse>
  InspectionData& WithResponse(ResponseT&& value) {
    SetResponse(std::forward<ResponseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>JSON string that contains the set of workflow variables after execution of
   * the state. The set will include variables assigned in the state and variables
   * set up as test state input.</p>
   */
  inline const Aws::String& GetVariables() const { return m_variables; }
  inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
  template <typename VariablesT = Aws::String>
  void SetVariables(VariablesT&& value) {
    m_variablesHasBeenSet = true;
    m_variables = std::forward<VariablesT>(value);
  }
  template <typename VariablesT = Aws::String>
  InspectionData& WithVariables(VariablesT&& value) {
    SetVariables(std::forward<VariablesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object containing data about a handled exception in the tested state.</p>
   */
  inline const InspectionErrorDetails& GetErrorDetails() const { return m_errorDetails; }
  inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
  template <typename ErrorDetailsT = InspectionErrorDetails>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = InspectionErrorDetails>
  InspectionData& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective input after the ItemsPath filter is applied. Not populated when
   * the QueryLanguage is JSONata.</p>
   */
  inline const Aws::String& GetAfterItemsPath() const { return m_afterItemsPath; }
  inline bool AfterItemsPathHasBeenSet() const { return m_afterItemsPathHasBeenSet; }
  template <typename AfterItemsPathT = Aws::String>
  void SetAfterItemsPath(AfterItemsPathT&& value) {
    m_afterItemsPathHasBeenSet = true;
    m_afterItemsPath = std::forward<AfterItemsPathT>(value);
  }
  template <typename AfterItemsPathT = Aws::String>
  InspectionData& WithAfterItemsPath(AfterItemsPathT&& value) {
    SetAfterItemsPath(std::forward<AfterItemsPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array containing the inputs for each Map iteration, transformed by the
   * ItemSelector specified in a Map state.</p>
   */
  inline const Aws::String& GetAfterItemSelector() const { return m_afterItemSelector; }
  inline bool AfterItemSelectorHasBeenSet() const { return m_afterItemSelectorHasBeenSet; }
  template <typename AfterItemSelectorT = Aws::String>
  void SetAfterItemSelector(AfterItemSelectorT&& value) {
    m_afterItemSelectorHasBeenSet = true;
    m_afterItemSelector = std::forward<AfterItemSelectorT>(value);
  }
  template <typename AfterItemSelectorT = Aws::String>
  InspectionData& WithAfterItemSelector(AfterItemSelectorT&& value) {
    SetAfterItemSelector(std::forward<AfterItemSelectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective input after the ItemBatcher filter is applied in a Map
   * state.</p>
   */
  inline const Aws::String& GetAfterItemBatcher() const { return m_afterItemBatcher; }
  inline bool AfterItemBatcherHasBeenSet() const { return m_afterItemBatcherHasBeenSet; }
  template <typename AfterItemBatcherT = Aws::String>
  void SetAfterItemBatcher(AfterItemBatcherT&& value) {
    m_afterItemBatcherHasBeenSet = true;
    m_afterItemBatcher = std::forward<AfterItemBatcherT>(value);
  }
  template <typename AfterItemBatcherT = Aws::String>
  InspectionData& WithAfterItemBatcher(AfterItemBatcherT&& value) {
    SetAfterItemBatcher(std::forward<AfterItemBatcherT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective input after the ItemsPointer filter is applied in a Map
   * state.</p>
   */
  inline const Aws::String& GetAfterItemsPointer() const { return m_afterItemsPointer; }
  inline bool AfterItemsPointerHasBeenSet() const { return m_afterItemsPointerHasBeenSet; }
  template <typename AfterItemsPointerT = Aws::String>
  void SetAfterItemsPointer(AfterItemsPointerT&& value) {
    m_afterItemsPointerHasBeenSet = true;
    m_afterItemsPointer = std::forward<AfterItemsPointerT>(value);
  }
  template <typename AfterItemsPointerT = Aws::String>
  InspectionData& WithAfterItemsPointer(AfterItemsPointerT&& value) {
    SetAfterItemsPointer(std::forward<AfterItemsPointerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tolerated failure threshold for a Map state as defined in number of Map
   * state iterations.</p>
   */
  inline int GetToleratedFailureCount() const { return m_toleratedFailureCount; }
  inline bool ToleratedFailureCountHasBeenSet() const { return m_toleratedFailureCountHasBeenSet; }
  inline void SetToleratedFailureCount(int value) {
    m_toleratedFailureCountHasBeenSet = true;
    m_toleratedFailureCount = value;
  }
  inline InspectionData& WithToleratedFailureCount(int value) {
    SetToleratedFailureCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tolerated failure threshold for a Map state as defined in percentage of
   * Map state iterations.</p>
   */
  inline double GetToleratedFailurePercentage() const { return m_toleratedFailurePercentage; }
  inline bool ToleratedFailurePercentageHasBeenSet() const { return m_toleratedFailurePercentageHasBeenSet; }
  inline void SetToleratedFailurePercentage(double value) {
    m_toleratedFailurePercentageHasBeenSet = true;
    m_toleratedFailurePercentage = value;
  }
  inline InspectionData& WithToleratedFailurePercentage(double value) {
    SetToleratedFailurePercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The max concurrency of the Map state.</p>
   */
  inline int GetMaxConcurrency() const { return m_maxConcurrency; }
  inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
  inline void SetMaxConcurrency(int value) {
    m_maxConcurrencyHasBeenSet = true;
    m_maxConcurrency = value;
  }
  inline InspectionData& WithMaxConcurrency(int value) {
    SetMaxConcurrency(value);
    return *this;
  }
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

  InspectionErrorDetails m_errorDetails;
  bool m_errorDetailsHasBeenSet = false;

  Aws::String m_afterItemsPath;
  bool m_afterItemsPathHasBeenSet = false;

  Aws::String m_afterItemSelector;
  bool m_afterItemSelectorHasBeenSet = false;

  Aws::String m_afterItemBatcher;
  bool m_afterItemBatcherHasBeenSet = false;

  Aws::String m_afterItemsPointer;
  bool m_afterItemsPointerHasBeenSet = false;

  int m_toleratedFailureCount{0};
  bool m_toleratedFailureCountHasBeenSet = false;

  double m_toleratedFailurePercentage{0.0};
  bool m_toleratedFailurePercentageHasBeenSet = false;

  int m_maxConcurrency{0};
  bool m_maxConcurrencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace SFN
}  // namespace Aws
