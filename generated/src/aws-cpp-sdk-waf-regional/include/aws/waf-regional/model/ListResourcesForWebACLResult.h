﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WAFRegional
{
namespace Model
{
  class ListResourcesForWebACLResult
  {
  public:
    AWS_WAFREGIONAL_API ListResourcesForWebACLResult();
    AWS_WAFREGIONAL_API ListResourcesForWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API ListResourcesForWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of ARNs (Amazon Resource Names) of the resources associated with the
     * specified web ACL. An array with zero elements is returned if there are no
     * resources associated with the web ACL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArns = value; }
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArns = std::move(value); }
    inline ListResourcesForWebACLResult& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}
    inline ListResourcesForWebACLResult& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}
    inline ListResourcesForWebACLResult& AddResourceArns(const Aws::String& value) { m_resourceArns.push_back(value); return *this; }
    inline ListResourcesForWebACLResult& AddResourceArns(Aws::String&& value) { m_resourceArns.push_back(std::move(value)); return *this; }
    inline ListResourcesForWebACLResult& AddResourceArns(const char* value) { m_resourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResourcesForWebACLResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResourcesForWebACLResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResourcesForWebACLResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceArns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
