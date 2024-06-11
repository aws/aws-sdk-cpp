﻿/**
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
    AWS_XRAY_API GetSamplingRulesResult();
    AWS_XRAY_API GetSamplingRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetSamplingRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Rule definitions and metadata.</p>
     */
    inline const Aws::Vector<SamplingRuleRecord>& GetSamplingRuleRecords() const{ return m_samplingRuleRecords; }
    inline void SetSamplingRuleRecords(const Aws::Vector<SamplingRuleRecord>& value) { m_samplingRuleRecords = value; }
    inline void SetSamplingRuleRecords(Aws::Vector<SamplingRuleRecord>&& value) { m_samplingRuleRecords = std::move(value); }
    inline GetSamplingRulesResult& WithSamplingRuleRecords(const Aws::Vector<SamplingRuleRecord>& value) { SetSamplingRuleRecords(value); return *this;}
    inline GetSamplingRulesResult& WithSamplingRuleRecords(Aws::Vector<SamplingRuleRecord>&& value) { SetSamplingRuleRecords(std::move(value)); return *this;}
    inline GetSamplingRulesResult& AddSamplingRuleRecords(const SamplingRuleRecord& value) { m_samplingRuleRecords.push_back(value); return *this; }
    inline GetSamplingRulesResult& AddSamplingRuleRecords(SamplingRuleRecord&& value) { m_samplingRuleRecords.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetSamplingRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetSamplingRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetSamplingRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSamplingRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSamplingRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSamplingRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SamplingRuleRecord> m_samplingRuleRecords;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
