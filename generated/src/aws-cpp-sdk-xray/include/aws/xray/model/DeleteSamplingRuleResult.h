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
  class DeleteSamplingRuleResult
  {
  public:
    AWS_XRAY_API DeleteSamplingRuleResult();
    AWS_XRAY_API DeleteSamplingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API DeleteSamplingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The deleted rule definition and metadata.</p>
     */
    inline const SamplingRuleRecord& GetSamplingRuleRecord() const{ return m_samplingRuleRecord; }

    /**
     * <p>The deleted rule definition and metadata.</p>
     */
    inline void SetSamplingRuleRecord(const SamplingRuleRecord& value) { m_samplingRuleRecord = value; }

    /**
     * <p>The deleted rule definition and metadata.</p>
     */
    inline void SetSamplingRuleRecord(SamplingRuleRecord&& value) { m_samplingRuleRecord = std::move(value); }

    /**
     * <p>The deleted rule definition and metadata.</p>
     */
    inline DeleteSamplingRuleResult& WithSamplingRuleRecord(const SamplingRuleRecord& value) { SetSamplingRuleRecord(value); return *this;}

    /**
     * <p>The deleted rule definition and metadata.</p>
     */
    inline DeleteSamplingRuleResult& WithSamplingRuleRecord(SamplingRuleRecord&& value) { SetSamplingRuleRecord(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteSamplingRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteSamplingRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteSamplingRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SamplingRuleRecord m_samplingRuleRecord;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
