/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/PredicateType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Specifies the
   * <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
   * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, and
   * <a>SizeConstraintSet</a> objects that you want to add to a <code>Rule</code>
   * and, for each object, indicates whether you want to negate the settings, for
   * example, requests that do NOT originate from the IP address 192.0.2.44.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/Predicate">AWS
   * API Reference</a></p>
   */
  class Predicate
  {
  public:
    AWS_WAFREGIONAL_API Predicate();
    AWS_WAFREGIONAL_API Predicate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Predicate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set <code>Negated</code> to <code>False</code> if you want AWS WAF to allow,
     * block, or count requests based on the settings in the specified
     * <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow or block requests based on
     * that IP address.</p> <p>Set <code>Negated</code> to <code>True</code> if you
     * want AWS WAF to allow or block a request based on the negation of the settings
     * in the <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow, block, or count requests
     * based on all IP addresses <i>except</i> <code>192.0.2.44</code>.</p>
     */
    inline bool GetNegated() const{ return m_negated; }

    /**
     * <p>Set <code>Negated</code> to <code>False</code> if you want AWS WAF to allow,
     * block, or count requests based on the settings in the specified
     * <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow or block requests based on
     * that IP address.</p> <p>Set <code>Negated</code> to <code>True</code> if you
     * want AWS WAF to allow or block a request based on the negation of the settings
     * in the <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow, block, or count requests
     * based on all IP addresses <i>except</i> <code>192.0.2.44</code>.</p>
     */
    inline bool NegatedHasBeenSet() const { return m_negatedHasBeenSet; }

    /**
     * <p>Set <code>Negated</code> to <code>False</code> if you want AWS WAF to allow,
     * block, or count requests based on the settings in the specified
     * <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow or block requests based on
     * that IP address.</p> <p>Set <code>Negated</code> to <code>True</code> if you
     * want AWS WAF to allow or block a request based on the negation of the settings
     * in the <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow, block, or count requests
     * based on all IP addresses <i>except</i> <code>192.0.2.44</code>.</p>
     */
    inline void SetNegated(bool value) { m_negatedHasBeenSet = true; m_negated = value; }

    /**
     * <p>Set <code>Negated</code> to <code>False</code> if you want AWS WAF to allow,
     * block, or count requests based on the settings in the specified
     * <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow or block requests based on
     * that IP address.</p> <p>Set <code>Negated</code> to <code>True</code> if you
     * want AWS WAF to allow or block a request based on the negation of the settings
     * in the <a>ByteMatchSet</a>, <a>IPSet</a>, <a>SqlInjectionMatchSet</a>,
     * <a>XssMatchSet</a>, <a>RegexMatchSet</a>, <a>GeoMatchSet</a>, or
     * <a>SizeConstraintSet</a>. For example, if an <code>IPSet</code> includes the IP
     * address <code>192.0.2.44</code>, AWS WAF will allow, block, or count requests
     * based on all IP addresses <i>except</i> <code>192.0.2.44</code>.</p>
     */
    inline Predicate& WithNegated(bool value) { SetNegated(value); return *this;}


    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline const PredicateType& GetType() const{ return m_type; }

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline void SetType(const PredicateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline void SetType(PredicateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline Predicate& WithType(const PredicateType& value) { SetType(value); return *this;}

    /**
     * <p>The type of predicate in a <code>Rule</code>, such as <code>ByteMatch</code>
     * or <code>IPSet</code>.</p>
     */
    inline Predicate& WithType(PredicateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline const Aws::String& GetDataId() const{ return m_dataId; }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline bool DataIdHasBeenSet() const { return m_dataIdHasBeenSet; }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline void SetDataId(const Aws::String& value) { m_dataIdHasBeenSet = true; m_dataId = value; }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline void SetDataId(Aws::String&& value) { m_dataIdHasBeenSet = true; m_dataId = std::move(value); }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline void SetDataId(const char* value) { m_dataIdHasBeenSet = true; m_dataId.assign(value); }

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline Predicate& WithDataId(const Aws::String& value) { SetDataId(value); return *this;}

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline Predicate& WithDataId(Aws::String&& value) { SetDataId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a predicate in a <code>Rule</code>, such as
     * <code>ByteMatchSetId</code> or <code>IPSetId</code>. The ID is returned by the
     * corresponding <code>Create</code> or <code>List</code> command.</p>
     */
    inline Predicate& WithDataId(const char* value) { SetDataId(value); return *this;}

  private:

    bool m_negated;
    bool m_negatedHasBeenSet = false;

    PredicateType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_dataId;
    bool m_dataIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
