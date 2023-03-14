/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/WebACL.h>
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
  class GetWebACLResult
  {
  public:
    AWS_WAF_API GetWebACLResult();
    AWS_WAF_API GetWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>WebACL</a> that you specified in the
     * <code>GetWebACL</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>WebACL</a>: Contains <code>DefaultAction</code>,
     * <code>MetricName</code>, <code>Name</code>, an array of <code>Rule</code>
     * objects, and <code>WebACLId</code> </p> </li> <li> <p>
     * <code>DefaultAction</code> (Data type is <a>WafAction</a>): Contains
     * <code>Type</code> </p> </li> <li> <p> <code>Rules</code>: Contains an array of
     * <code>ActivatedRule</code> objects, which contain <code>Action</code>,
     * <code>Priority</code>, and <code>RuleId</code> </p> </li> <li> <p>
     * <code>Action</code>: Contains <code>Type</code> </p> </li> </ul>
     */
    inline const WebACL& GetWebACL() const{ return m_webACL; }

    /**
     * <p>Information about the <a>WebACL</a> that you specified in the
     * <code>GetWebACL</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>WebACL</a>: Contains <code>DefaultAction</code>,
     * <code>MetricName</code>, <code>Name</code>, an array of <code>Rule</code>
     * objects, and <code>WebACLId</code> </p> </li> <li> <p>
     * <code>DefaultAction</code> (Data type is <a>WafAction</a>): Contains
     * <code>Type</code> </p> </li> <li> <p> <code>Rules</code>: Contains an array of
     * <code>ActivatedRule</code> objects, which contain <code>Action</code>,
     * <code>Priority</code>, and <code>RuleId</code> </p> </li> <li> <p>
     * <code>Action</code>: Contains <code>Type</code> </p> </li> </ul>
     */
    inline void SetWebACL(const WebACL& value) { m_webACL = value; }

    /**
     * <p>Information about the <a>WebACL</a> that you specified in the
     * <code>GetWebACL</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>WebACL</a>: Contains <code>DefaultAction</code>,
     * <code>MetricName</code>, <code>Name</code>, an array of <code>Rule</code>
     * objects, and <code>WebACLId</code> </p> </li> <li> <p>
     * <code>DefaultAction</code> (Data type is <a>WafAction</a>): Contains
     * <code>Type</code> </p> </li> <li> <p> <code>Rules</code>: Contains an array of
     * <code>ActivatedRule</code> objects, which contain <code>Action</code>,
     * <code>Priority</code>, and <code>RuleId</code> </p> </li> <li> <p>
     * <code>Action</code>: Contains <code>Type</code> </p> </li> </ul>
     */
    inline void SetWebACL(WebACL&& value) { m_webACL = std::move(value); }

    /**
     * <p>Information about the <a>WebACL</a> that you specified in the
     * <code>GetWebACL</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>WebACL</a>: Contains <code>DefaultAction</code>,
     * <code>MetricName</code>, <code>Name</code>, an array of <code>Rule</code>
     * objects, and <code>WebACLId</code> </p> </li> <li> <p>
     * <code>DefaultAction</code> (Data type is <a>WafAction</a>): Contains
     * <code>Type</code> </p> </li> <li> <p> <code>Rules</code>: Contains an array of
     * <code>ActivatedRule</code> objects, which contain <code>Action</code>,
     * <code>Priority</code>, and <code>RuleId</code> </p> </li> <li> <p>
     * <code>Action</code>: Contains <code>Type</code> </p> </li> </ul>
     */
    inline GetWebACLResult& WithWebACL(const WebACL& value) { SetWebACL(value); return *this;}

    /**
     * <p>Information about the <a>WebACL</a> that you specified in the
     * <code>GetWebACL</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>WebACL</a>: Contains <code>DefaultAction</code>,
     * <code>MetricName</code>, <code>Name</code>, an array of <code>Rule</code>
     * objects, and <code>WebACLId</code> </p> </li> <li> <p>
     * <code>DefaultAction</code> (Data type is <a>WafAction</a>): Contains
     * <code>Type</code> </p> </li> <li> <p> <code>Rules</code>: Contains an array of
     * <code>ActivatedRule</code> objects, which contain <code>Action</code>,
     * <code>Priority</code>, and <code>RuleId</code> </p> </li> <li> <p>
     * <code>Action</code>: Contains <code>Type</code> </p> </li> </ul>
     */
    inline GetWebACLResult& WithWebACL(WebACL&& value) { SetWebACL(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetWebACLResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetWebACLResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetWebACLResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    WebACL m_webACL;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
