﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/SqlInjectionMatchSet.h>
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
  /**
   * <p>The response to a <a>GetSqlInjectionMatchSet</a> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GetSqlInjectionMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class GetSqlInjectionMatchSetResult
  {
  public:
    AWS_WAFREGIONAL_API GetSqlInjectionMatchSetResult();
    AWS_WAFREGIONAL_API GetSqlInjectionMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetSqlInjectionMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline const SqlInjectionMatchSet& GetSqlInjectionMatchSet() const{ return m_sqlInjectionMatchSet; }

    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline void SetSqlInjectionMatchSet(const SqlInjectionMatchSet& value) { m_sqlInjectionMatchSet = value; }

    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline void SetSqlInjectionMatchSet(SqlInjectionMatchSet&& value) { m_sqlInjectionMatchSet = std::move(value); }

    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline GetSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(const SqlInjectionMatchSet& value) { SetSqlInjectionMatchSet(value); return *this;}

    /**
     * <p>Information about the <a>SqlInjectionMatchSet</a> that you specified in the
     * <code>GetSqlInjectionMatchSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SqlInjectionMatchSet</a>: Contains
     * <code>Name</code>, <code>SqlInjectionMatchSetId</code>, and an array of
     * <code>SqlInjectionMatchTuple</code> objects</p> </li> <li> <p>
     * <a>SqlInjectionMatchTuple</a>: Each <code>SqlInjectionMatchTuple</code> object
     * contains <code>FieldToMatch</code> and <code>TextTransformation</code> </p>
     * </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline GetSqlInjectionMatchSetResult& WithSqlInjectionMatchSet(SqlInjectionMatchSet&& value) { SetSqlInjectionMatchSet(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSqlInjectionMatchSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSqlInjectionMatchSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSqlInjectionMatchSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SqlInjectionMatchSet m_sqlInjectionMatchSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
