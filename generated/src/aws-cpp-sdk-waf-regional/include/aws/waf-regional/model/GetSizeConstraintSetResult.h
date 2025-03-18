/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/SizeConstraintSet.h>
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
  class GetSizeConstraintSetResult
  {
  public:
    AWS_WAFREGIONAL_API GetSizeConstraintSetResult() = default;
    AWS_WAFREGIONAL_API GetSizeConstraintSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetSizeConstraintSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>SizeConstraintSet</a> that you specified in the
     * <code>GetSizeConstraintSet</code> request. For more information, see the
     * following topics:</p> <ul> <li> <p> <a>SizeConstraintSet</a>: Contains
     * <code>SizeConstraintSetId</code>, <code>SizeConstraints</code>, and
     * <code>Name</code> </p> </li> <li> <p> <code>SizeConstraints</code>: Contains an
     * array of <a>SizeConstraint</a> objects. Each <code>SizeConstraint</code> object
     * contains <a>FieldToMatch</a>, <code>TextTransformation</code>,
     * <code>ComparisonOperator</code>, and <code>Size</code> </p> </li> <li> <p>
     * <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p> </li>
     * </ul>
     */
    inline const SizeConstraintSet& GetSizeConstraintSet() const { return m_sizeConstraintSet; }
    template<typename SizeConstraintSetT = SizeConstraintSet>
    void SetSizeConstraintSet(SizeConstraintSetT&& value) { m_sizeConstraintSetHasBeenSet = true; m_sizeConstraintSet = std::forward<SizeConstraintSetT>(value); }
    template<typename SizeConstraintSetT = SizeConstraintSet>
    GetSizeConstraintSetResult& WithSizeConstraintSet(SizeConstraintSetT&& value) { SetSizeConstraintSet(std::forward<SizeConstraintSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSizeConstraintSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SizeConstraintSet m_sizeConstraintSet;
    bool m_sizeConstraintSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
