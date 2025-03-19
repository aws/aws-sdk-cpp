/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/XssMatchTuple.h>
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
   * endpoints for regional and global use. </p>  <p>A complex type that
   * contains <code>XssMatchTuple</code> objects, which specify the parts of web
   * requests that you want AWS WAF to inspect for cross-site scripting attacks and,
   * if you want AWS WAF to inspect a header, the name of the header. If a
   * <code>XssMatchSet</code> contains more than one <code>XssMatchTuple</code>
   * object, a request needs to include cross-site scripting attacks in only one of
   * the specified parts of the request to be considered a match.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/XssMatchSet">AWS
   * API Reference</a></p>
   */
  class XssMatchSet
  {
  public:
    AWS_WAFREGIONAL_API XssMatchSet() = default;
    AWS_WAFREGIONAL_API XssMatchSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API XssMatchSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about an <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline const Aws::String& GetXssMatchSetId() const { return m_xssMatchSetId; }
    inline bool XssMatchSetIdHasBeenSet() const { return m_xssMatchSetIdHasBeenSet; }
    template<typename XssMatchSetIdT = Aws::String>
    void SetXssMatchSetId(XssMatchSetIdT&& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = std::forward<XssMatchSetIdT>(value); }
    template<typename XssMatchSetIdT = Aws::String>
    XssMatchSet& WithXssMatchSetId(XssMatchSetIdT&& value) { SetXssMatchSetId(std::forward<XssMatchSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    XssMatchSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline const Aws::Vector<XssMatchTuple>& GetXssMatchTuples() const { return m_xssMatchTuples; }
    inline bool XssMatchTuplesHasBeenSet() const { return m_xssMatchTuplesHasBeenSet; }
    template<typename XssMatchTuplesT = Aws::Vector<XssMatchTuple>>
    void SetXssMatchTuples(XssMatchTuplesT&& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples = std::forward<XssMatchTuplesT>(value); }
    template<typename XssMatchTuplesT = Aws::Vector<XssMatchTuple>>
    XssMatchSet& WithXssMatchTuples(XssMatchTuplesT&& value) { SetXssMatchTuples(std::forward<XssMatchTuplesT>(value)); return *this;}
    template<typename XssMatchTuplesT = XssMatchTuple>
    XssMatchSet& AddXssMatchTuples(XssMatchTuplesT&& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples.emplace_back(std::forward<XssMatchTuplesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_xssMatchSetId;
    bool m_xssMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<XssMatchTuple> m_xssMatchTuples;
    bool m_xssMatchTuplesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
