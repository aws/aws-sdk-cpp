﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ByteMatchSet.h>
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
  class GetByteMatchSetResult
  {
  public:
    AWS_WAF_API GetByteMatchSetResult();
    AWS_WAF_API GetByteMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetByteMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline const ByteMatchSet& GetByteMatchSet() const{ return m_byteMatchSet; }

    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline void SetByteMatchSet(const ByteMatchSet& value) { m_byteMatchSet = value; }

    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline void SetByteMatchSet(ByteMatchSet&& value) { m_byteMatchSet = std::move(value); }

    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline GetByteMatchSetResult& WithByteMatchSet(const ByteMatchSet& value) { SetByteMatchSet(value); return *this;}

    /**
     * <p>Information about the <a>ByteMatchSet</a> that you specified in the
     * <code>GetByteMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>ByteMatchSet</a>: Contains
     * <code>ByteMatchSetId</code>, <code>ByteMatchTuples</code>, and <code>Name</code>
     * </p> </li> <li> <p> <code>ByteMatchTuples</code>: Contains an array of
     * <a>ByteMatchTuple</a> objects. Each <code>ByteMatchTuple</code> object contains
     * <a>FieldToMatch</a>, <code>PositionalConstraint</code>,
     * <code>TargetString</code>, and <code>TextTransformation</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline GetByteMatchSetResult& WithByteMatchSet(ByteMatchSet&& value) { SetByteMatchSet(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetByteMatchSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetByteMatchSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetByteMatchSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ByteMatchSet m_byteMatchSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
