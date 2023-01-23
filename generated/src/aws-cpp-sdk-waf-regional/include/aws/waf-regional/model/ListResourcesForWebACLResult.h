/**
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


    /**
     * <p>An array of ARNs (Amazon Resource Names) of the resources associated with the
     * specified web ACL. An array with zero elements is returned if there are no
     * resources associated with the web ACL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>An array of ARNs (Amazon Resource Names) of the resources associated with the
     * specified web ACL. An array with zero elements is returned if there are no
     * resources associated with the web ACL.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArns = value; }

    /**
     * <p>An array of ARNs (Amazon Resource Names) of the resources associated with the
     * specified web ACL. An array with zero elements is returned if there are no
     * resources associated with the web ACL.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArns = std::move(value); }

    /**
     * <p>An array of ARNs (Amazon Resource Names) of the resources associated with the
     * specified web ACL. An array with zero elements is returned if there are no
     * resources associated with the web ACL.</p>
     */
    inline ListResourcesForWebACLResult& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>An array of ARNs (Amazon Resource Names) of the resources associated with the
     * specified web ACL. An array with zero elements is returned if there are no
     * resources associated with the web ACL.</p>
     */
    inline ListResourcesForWebACLResult& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>An array of ARNs (Amazon Resource Names) of the resources associated with the
     * specified web ACL. An array with zero elements is returned if there are no
     * resources associated with the web ACL.</p>
     */
    inline ListResourcesForWebACLResult& AddResourceArns(const Aws::String& value) { m_resourceArns.push_back(value); return *this; }

    /**
     * <p>An array of ARNs (Amazon Resource Names) of the resources associated with the
     * specified web ACL. An array with zero elements is returned if there are no
     * resources associated with the web ACL.</p>
     */
    inline ListResourcesForWebACLResult& AddResourceArns(Aws::String&& value) { m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of ARNs (Amazon Resource Names) of the resources associated with the
     * specified web ACL. An array with zero elements is returned if there are no
     * resources associated with the web ACL.</p>
     */
    inline ListResourcesForWebACLResult& AddResourceArns(const char* value) { m_resourceArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_resourceArns;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
