﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/XssMatchSet.h>
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
  /**
   * <p>The response to a <a>GetXssMatchSet</a> request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GetXssMatchSetResponse">AWS
   * API Reference</a></p>
   */
  class GetXssMatchSetResult
  {
  public:
    AWS_WAF_API GetXssMatchSetResult() = default;
    AWS_WAF_API GetXssMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetXssMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>XssMatchSet</a> that you specified in the
     * <code>GetXssMatchSet</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>XssMatchSet</a>: Contains <code>Name</code>,
     * <code>XssMatchSetId</code>, and an array of <code>XssMatchTuple</code>
     * objects</p> </li> <li> <p> <a>XssMatchTuple</a>: Each <code>XssMatchTuple</code>
     * object contains <code>FieldToMatch</code> and <code>TextTransformation</code>
     * </p> </li> <li> <p> <a>FieldToMatch</a>: Contains <code>Data</code> and
     * <code>Type</code> </p> </li> </ul>
     */
    inline const XssMatchSet& GetXssMatchSet() const { return m_xssMatchSet; }
    template<typename XssMatchSetT = XssMatchSet>
    void SetXssMatchSet(XssMatchSetT&& value) { m_xssMatchSetHasBeenSet = true; m_xssMatchSet = std::forward<XssMatchSetT>(value); }
    template<typename XssMatchSetT = XssMatchSet>
    GetXssMatchSetResult& WithXssMatchSet(XssMatchSetT&& value) { SetXssMatchSet(std::forward<XssMatchSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetXssMatchSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    XssMatchSet m_xssMatchSet;
    bool m_xssMatchSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
