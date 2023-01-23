/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/WebACL.h>
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
  class GetWebACLResult
  {
  public:
    AWS_WAFREGIONAL_API GetWebACLResult();
    AWS_WAFREGIONAL_API GetWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    WebACL m_webACL;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
