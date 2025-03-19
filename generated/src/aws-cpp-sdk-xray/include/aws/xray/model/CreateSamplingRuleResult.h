/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/SamplingRuleRecord.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateSamplingRuleResult
  {
  public:
    AWS_XRAY_API CreateSamplingRuleResult() = default;
    AWS_XRAY_API CreateSamplingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API CreateSamplingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The saved rule definition and metadata.</p>
     */
    inline const SamplingRuleRecord& GetSamplingRuleRecord() const { return m_samplingRuleRecord; }
    template<typename SamplingRuleRecordT = SamplingRuleRecord>
    void SetSamplingRuleRecord(SamplingRuleRecordT&& value) { m_samplingRuleRecordHasBeenSet = true; m_samplingRuleRecord = std::forward<SamplingRuleRecordT>(value); }
    template<typename SamplingRuleRecordT = SamplingRuleRecord>
    CreateSamplingRuleResult& WithSamplingRuleRecord(SamplingRuleRecordT&& value) { SetSamplingRuleRecord(std::forward<SamplingRuleRecordT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSamplingRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SamplingRuleRecord m_samplingRuleRecord;
    bool m_samplingRuleRecordHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
