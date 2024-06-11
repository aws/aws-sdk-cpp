﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/IPSet.h>
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
  class GetIPSetResult
  {
  public:
    AWS_WAF_API GetIPSetResult();
    AWS_WAF_API GetIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>IPSet</a> that you specified in the
     * <code>GetIPSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>IPSet</a>: Contains <code>IPSetDescriptors</code>,
     * <code>IPSetId</code>, and <code>Name</code> </p> </li> <li> <p>
     * <code>IPSetDescriptors</code>: Contains an array of <a>IPSetDescriptor</a>
     * objects. Each <code>IPSetDescriptor</code> object contains <code>Type</code> and
     * <code>Value</code> </p> </li> </ul>
     */
    inline const IPSet& GetIPSet() const{ return m_iPSet; }
    inline void SetIPSet(const IPSet& value) { m_iPSet = value; }
    inline void SetIPSet(IPSet&& value) { m_iPSet = std::move(value); }
    inline GetIPSetResult& WithIPSet(const IPSet& value) { SetIPSet(value); return *this;}
    inline GetIPSetResult& WithIPSet(IPSet&& value) { SetIPSet(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIPSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIPSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIPSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IPSet m_iPSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
