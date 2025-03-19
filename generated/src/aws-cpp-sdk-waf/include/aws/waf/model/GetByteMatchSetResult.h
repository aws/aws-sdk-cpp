/**
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
    AWS_WAF_API GetByteMatchSetResult() = default;
    AWS_WAF_API GetByteMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetByteMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
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
    inline const ByteMatchSet& GetByteMatchSet() const { return m_byteMatchSet; }
    template<typename ByteMatchSetT = ByteMatchSet>
    void SetByteMatchSet(ByteMatchSetT&& value) { m_byteMatchSetHasBeenSet = true; m_byteMatchSet = std::forward<ByteMatchSetT>(value); }
    template<typename ByteMatchSetT = ByteMatchSet>
    GetByteMatchSetResult& WithByteMatchSet(ByteMatchSetT&& value) { SetByteMatchSet(std::forward<ByteMatchSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetByteMatchSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ByteMatchSet m_byteMatchSet;
    bool m_byteMatchSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
