/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/PipelineOutputError.h>
#include <aws/observabilityadmin/model/Record.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Contains the output from pipeline test operations, including processed
 * records and any errors encountered.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/PipelineOutput">AWS
 * API Reference</a></p>
 */
class PipelineOutput {
 public:
  AWS_OBSERVABILITYADMIN_API PipelineOutput() = default;
  AWS_OBSERVABILITYADMIN_API PipelineOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API PipelineOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The processed record output from the pipeline test operation.</p>
   */
  inline const Record& GetRecord() const { return m_record; }
  inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }
  template <typename RecordT = Record>
  void SetRecord(RecordT&& value) {
    m_recordHasBeenSet = true;
    m_record = std::forward<RecordT>(value);
  }
  template <typename RecordT = Record>
  PipelineOutput& WithRecord(RecordT&& value) {
    SetRecord(std::forward<RecordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any error that occurred during the pipeline test operation for this
   * record.</p>
   */
  inline const PipelineOutputError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = PipelineOutputError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = PipelineOutputError>
  PipelineOutput& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Record m_record;

  PipelineOutputError m_error;
  bool m_recordHasBeenSet = false;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
