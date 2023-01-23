/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResult();
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Records you requested to be retrieved in batch.</p>
     */
    inline const Aws::Vector<BatchGetRecordResultDetail>& GetRecords() const{ return m_records; }

    /**
     * <p>A list of Records you requested to be retrieved in batch.</p>
     */
    inline void SetRecords(const Aws::Vector<BatchGetRecordResultDetail>& value) { m_records = value; }

    /**
     * <p>A list of Records you requested to be retrieved in batch.</p>
     */
    inline void SetRecords(Aws::Vector<BatchGetRecordResultDetail>&& value) { m_records = std::move(value); }

    /**
     * <p>A list of Records you requested to be retrieved in batch.</p>
     */
    inline BatchGetRecordResult& WithRecords(const Aws::Vector<BatchGetRecordResultDetail>& value) { SetRecords(value); return *this;}

    /**
     * <p>A list of Records you requested to be retrieved in batch.</p>
     */
    inline BatchGetRecordResult& WithRecords(Aws::Vector<BatchGetRecordResultDetail>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>A list of Records you requested to be retrieved in batch.</p>
     */
    inline BatchGetRecordResult& AddRecords(const BatchGetRecordResultDetail& value) { m_records.push_back(value); return *this; }

    /**
     * <p>A list of Records you requested to be retrieved in batch.</p>
     */
    inline BatchGetRecordResult& AddRecords(BatchGetRecordResultDetail&& value) { m_records.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of errors that have occurred when retrieving a batch of Records.</p>
     */
    inline const Aws::Vector<BatchGetRecordError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of errors that have occurred when retrieving a batch of Records.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchGetRecordError>& value) { m_errors = value; }

    /**
     * <p>A list of errors that have occurred when retrieving a batch of Records.</p>
     */
    inline void SetErrors(Aws::Vector<BatchGetRecordError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of errors that have occurred when retrieving a batch of Records.</p>
     */
    inline BatchGetRecordResult& WithErrors(const Aws::Vector<BatchGetRecordError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of errors that have occurred when retrieving a batch of Records.</p>
     */
    inline BatchGetRecordResult& WithErrors(Aws::Vector<BatchGetRecordError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of errors that have occurred when retrieving a batch of Records.</p>
     */
    inline BatchGetRecordResult& AddErrors(const BatchGetRecordError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of errors that have occurred when retrieving a batch of Records.</p>
     */
    inline BatchGetRecordResult& AddErrors(BatchGetRecordError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>A unprocessed list of <code>FeatureGroup</code> names, with their
     * corresponding <code>RecordIdentifier</code> value, and Feature name.</p>
     */
    inline const Aws::Vector<BatchGetRecordIdentifier>& GetUnprocessedIdentifiers() const{ return m_unprocessedIdentifiers; }

    /**
     * <p>A unprocessed list of <code>FeatureGroup</code> names, with their
     * corresponding <code>RecordIdentifier</code> value, and Feature name.</p>
     */
    inline void SetUnprocessedIdentifiers(const Aws::Vector<BatchGetRecordIdentifier>& value) { m_unprocessedIdentifiers = value; }

    /**
     * <p>A unprocessed list of <code>FeatureGroup</code> names, with their
     * corresponding <code>RecordIdentifier</code> value, and Feature name.</p>
     */
    inline void SetUnprocessedIdentifiers(Aws::Vector<BatchGetRecordIdentifier>&& value) { m_unprocessedIdentifiers = std::move(value); }

    /**
     * <p>A unprocessed list of <code>FeatureGroup</code> names, with their
     * corresponding <code>RecordIdentifier</code> value, and Feature name.</p>
     */
    inline BatchGetRecordResult& WithUnprocessedIdentifiers(const Aws::Vector<BatchGetRecordIdentifier>& value) { SetUnprocessedIdentifiers(value); return *this;}

    /**
     * <p>A unprocessed list of <code>FeatureGroup</code> names, with their
     * corresponding <code>RecordIdentifier</code> value, and Feature name.</p>
     */
    inline BatchGetRecordResult& WithUnprocessedIdentifiers(Aws::Vector<BatchGetRecordIdentifier>&& value) { SetUnprocessedIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A unprocessed list of <code>FeatureGroup</code> names, with their
     * corresponding <code>RecordIdentifier</code> value, and Feature name.</p>
     */
    inline BatchGetRecordResult& AddUnprocessedIdentifiers(const BatchGetRecordIdentifier& value) { m_unprocessedIdentifiers.push_back(value); return *this; }

    /**
     * <p>A unprocessed list of <code>FeatureGroup</code> names, with their
     * corresponding <code>RecordIdentifier</code> value, and Feature name.</p>
     */
    inline BatchGetRecordResult& AddUnprocessedIdentifiers(BatchGetRecordIdentifier&& value) { m_unprocessedIdentifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchGetRecordResultDetail> m_records;

    Aws::Vector<BatchGetRecordError> m_errors;

    Aws::Vector<BatchGetRecordIdentifier> m_unprocessedIdentifiers;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
