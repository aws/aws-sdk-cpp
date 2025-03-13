/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordResultDetail.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordError.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchGetRecordIdentifier.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{
  class BatchGetRecordResult
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResult() = default;
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Records you requested to be retrieved in batch.</p>
     */
    inline const Aws::Vector<BatchGetRecordResultDetail>& GetRecords() const { return m_records; }
    template<typename RecordsT = Aws::Vector<BatchGetRecordResultDetail>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<BatchGetRecordResultDetail>>
    BatchGetRecordResult& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = BatchGetRecordResultDetail>
    BatchGetRecordResult& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of errors that have occurred when retrieving a batch of Records.</p>
     */
    inline const Aws::Vector<BatchGetRecordError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchGetRecordError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchGetRecordError>>
    BatchGetRecordResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchGetRecordError>
    BatchGetRecordResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unprocessed list of <code>FeatureGroup</code> names, with their
     * corresponding <code>RecordIdentifier</code> value, and Feature name.</p>
     */
    inline const Aws::Vector<BatchGetRecordIdentifier>& GetUnprocessedIdentifiers() const { return m_unprocessedIdentifiers; }
    template<typename UnprocessedIdentifiersT = Aws::Vector<BatchGetRecordIdentifier>>
    void SetUnprocessedIdentifiers(UnprocessedIdentifiersT&& value) { m_unprocessedIdentifiersHasBeenSet = true; m_unprocessedIdentifiers = std::forward<UnprocessedIdentifiersT>(value); }
    template<typename UnprocessedIdentifiersT = Aws::Vector<BatchGetRecordIdentifier>>
    BatchGetRecordResult& WithUnprocessedIdentifiers(UnprocessedIdentifiersT&& value) { SetUnprocessedIdentifiers(std::forward<UnprocessedIdentifiersT>(value)); return *this;}
    template<typename UnprocessedIdentifiersT = BatchGetRecordIdentifier>
    BatchGetRecordResult& AddUnprocessedIdentifiers(UnprocessedIdentifiersT&& value) { m_unprocessedIdentifiersHasBeenSet = true; m_unprocessedIdentifiers.emplace_back(std::forward<UnprocessedIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetRecordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetRecordResultDetail> m_records;
    bool m_recordsHasBeenSet = false;

    Aws::Vector<BatchGetRecordError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<BatchGetRecordIdentifier> m_unprocessedIdentifiers;
    bool m_unprocessedIdentifiersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
