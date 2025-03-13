/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/SamplingRuleRecord.h>
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
namespace XRay
{
namespace Model
{
  class GetSamplingRulesResult
  {
  public:
    AWS_XRAY_API GetSamplingRulesResult() = default;
    AWS_XRAY_API GetSamplingRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetSamplingRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Rule definitions and metadata.</p>
     */
    inline const Aws::Vector<SamplingRuleRecord>& GetSamplingRuleRecords() const { return m_samplingRuleRecords; }
    template<typename SamplingRuleRecordsT = Aws::Vector<SamplingRuleRecord>>
    void SetSamplingRuleRecords(SamplingRuleRecordsT&& value) { m_samplingRuleRecordsHasBeenSet = true; m_samplingRuleRecords = std::forward<SamplingRuleRecordsT>(value); }
    template<typename SamplingRuleRecordsT = Aws::Vector<SamplingRuleRecord>>
    GetSamplingRulesResult& WithSamplingRuleRecords(SamplingRuleRecordsT&& value) { SetSamplingRuleRecords(std::forward<SamplingRuleRecordsT>(value)); return *this;}
    template<typename SamplingRuleRecordsT = SamplingRuleRecord>
    GetSamplingRulesResult& AddSamplingRuleRecords(SamplingRuleRecordsT&& value) { m_samplingRuleRecordsHasBeenSet = true; m_samplingRuleRecords.emplace_back(std::forward<SamplingRuleRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSamplingRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSamplingRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SamplingRuleRecord> m_samplingRuleRecords;
    bool m_samplingRuleRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
