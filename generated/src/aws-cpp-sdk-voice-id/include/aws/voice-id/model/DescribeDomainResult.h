/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/Domain.h>
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
namespace VoiceID
{
namespace Model
{
  class DescribeDomainResult
  {
  public:
    AWS_VOICEID_API DescribeDomainResult();
    AWS_VOICEID_API DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified domain.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>Information about the specified domain.</p>
     */
    inline void SetDomain(const Domain& value) { m_domain = value; }

    /**
     * <p>Information about the specified domain.</p>
     */
    inline void SetDomain(Domain&& value) { m_domain = std::move(value); }

    /**
     * <p>Information about the specified domain.</p>
     */
    inline DescribeDomainResult& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>Information about the specified domain.</p>
     */
    inline DescribeDomainResult& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Domain m_domain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
