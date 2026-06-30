/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchWriteRecordEntry.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerFeatureStoreRuntime {
namespace Model {

/**
 * <p>The error that has occurred when attempting to write a record in a
 * batch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchWriteRecordError">AWS
 * API Reference</a></p>
 */
class BatchWriteRecordError {
 public:
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordError() = default;
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordError(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The entry that failed to be written.</p>
   */
  inline const BatchWriteRecordEntry& GetEntry() const { return m_entry; }
  inline bool EntryHasBeenSet() const { return m_entryHasBeenSet; }
  template <typename EntryT = BatchWriteRecordEntry>
  void SetEntry(EntryT&& value) {
    m_entryHasBeenSet = true;
    m_entry = std::forward<EntryT>(value);
  }
  template <typename EntryT = BatchWriteRecordEntry>
  BatchWriteRecordError& WithEntry(EntryT&& value) {
    SetEntry(std::forward<EntryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code for the failed record write.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  BatchWriteRecordError& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message for the failed record write.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  BatchWriteRecordError& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  BatchWriteRecordEntry m_entry;

  Aws::String m_errorCode;

  Aws::String m_errorMessage;
  bool m_entryHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
