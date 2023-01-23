/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/Rule.h>
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
  class GetRuleResult
  {
  public:
    AWS_WAFREGIONAL_API GetRuleResult();
    AWS_WAFREGIONAL_API GetRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline const Rule& GetRule() const{ return m_rule; }

    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline void SetRule(const Rule& value) { m_rule = value; }

    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline void SetRule(Rule&& value) { m_rule = std::move(value); }

    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline GetRuleResult& WithRule(const Rule& value) { SetRule(value); return *this;}

    /**
     * <p>Information about the <a>Rule</a> that you specified in the
     * <code>GetRule</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>Rule</a>: Contains <code>MetricName</code>,
     * <code>Name</code>, an array of <code>Predicate</code> objects, and
     * <code>RuleId</code> </p> </li> <li> <p> <a>Predicate</a>: Each
     * <code>Predicate</code> object contains <code>DataId</code>,
     * <code>Negated</code>, and <code>Type</code> </p> </li> </ul>
     */
    inline GetRuleResult& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}

  private:

    Rule m_rule;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
