/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
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
  class GetRecordResult
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API GetRecordResult() = default;
    AWS_SAGEMAKERFEATURESTORERUNTIME_API GetRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API GetRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The record you requested. A list of <code>FeatureValues</code>.</p>
     */
    inline const Aws::Vector<FeatureValue>& GetRecord() const { return m_record; }
    template<typename RecordT = Aws::Vector<FeatureValue>>
    void SetRecord(RecordT&& value) { m_recordHasBeenSet = true; m_record = std::forward<RecordT>(value); }
    template<typename RecordT = Aws::Vector<FeatureValue>>
    GetRecordResult& WithRecord(RecordT&& value) { SetRecord(std::forward<RecordT>(value)); return *this;}
    template<typename RecordT = FeatureValue>
    GetRecordResult& AddRecord(RecordT&& value) { m_recordHasBeenSet = true; m_record.emplace_back(std::forward<RecordT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>ExpiresAt</code> ISO string of the requested record.</p>
     */
    inline const Aws::String& GetExpiresAt() const { return m_expiresAt; }
    template<typename ExpiresAtT = Aws::String>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::String>
    GetRecordResult& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FeatureValue> m_record;
    bool m_recordHasBeenSet = false;

    Aws::String m_expiresAt;
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
