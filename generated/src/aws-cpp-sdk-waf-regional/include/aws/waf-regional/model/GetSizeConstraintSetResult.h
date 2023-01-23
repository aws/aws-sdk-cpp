/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/SizeConstraintSet.h>
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
    AWS_WAFREGIONAL_API GetSizeConstraintSetResult();
    AWS_WAFREGIONAL_API GetSizeConstraintSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetSizeConstraintSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline const SizeConstraintSet& GetSizeConstraintSet() const{ return m_sizeConstraintSet; }

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
    inline void SetSizeConstraintSet(const SizeConstraintSet& value) { m_sizeConstraintSet = value; }

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
    inline void SetSizeConstraintSet(SizeConstraintSet&& value) { m_sizeConstraintSet = std::move(value); }

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
    inline GetSizeConstraintSetResult& WithSizeConstraintSet(const SizeConstraintSet& value) { SetSizeConstraintSet(value); return *this;}

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
    inline GetSizeConstraintSetResult& WithSizeConstraintSet(SizeConstraintSet&& value) { SetSizeConstraintSet(std::move(value)); return *this;}

  private:

    SizeConstraintSet m_sizeConstraintSet;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
