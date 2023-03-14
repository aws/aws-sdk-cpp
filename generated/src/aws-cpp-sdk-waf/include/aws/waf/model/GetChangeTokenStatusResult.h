/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ChangeTokenStatus.h>
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
namespace WAF
{
namespace Model
{
  class GetChangeTokenStatusResult
  {
  public:
    AWS_WAF_API GetChangeTokenStatusResult();
    AWS_WAF_API GetChangeTokenStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetChangeTokenStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the change token.</p>
     */
    inline const ChangeTokenStatus& GetChangeTokenStatus() const{ return m_changeTokenStatus; }

    /**
     * <p>The status of the change token.</p>
     */
    inline void SetChangeTokenStatus(const ChangeTokenStatus& value) { m_changeTokenStatus = value; }

    /**
     * <p>The status of the change token.</p>
     */
    inline void SetChangeTokenStatus(ChangeTokenStatus&& value) { m_changeTokenStatus = std::move(value); }

    /**
     * <p>The status of the change token.</p>
     */
    inline GetChangeTokenStatusResult& WithChangeTokenStatus(const ChangeTokenStatus& value) { SetChangeTokenStatus(value); return *this;}

    /**
     * <p>The status of the change token.</p>
     */
    inline GetChangeTokenStatusResult& WithChangeTokenStatus(ChangeTokenStatus&& value) { SetChangeTokenStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetChangeTokenStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetChangeTokenStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetChangeTokenStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChangeTokenStatus m_changeTokenStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
