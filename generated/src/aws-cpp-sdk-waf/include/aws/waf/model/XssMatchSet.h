/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/XssMatchTuple.h>
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
namespace WAF
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/XssMatchSet">AWS API
   * Reference</a></p>
   */
  class XssMatchSet
  {
  public:
    AWS_WAF_API XssMatchSet();
    AWS_WAF_API XssMatchSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API XssMatchSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::String& GetXssMatchSetId() const{ return m_xssMatchSetId; }

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
    inline bool XssMatchSetIdHasBeenSet() const { return m_xssMatchSetIdHasBeenSet; }

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
    inline void SetXssMatchSetId(const Aws::String& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = value; }

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
    inline void SetXssMatchSetId(Aws::String&& value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId = std::move(value); }

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
    inline void SetXssMatchSetId(const char* value) { m_xssMatchSetIdHasBeenSet = true; m_xssMatchSetId.assign(value); }

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
    inline XssMatchSet& WithXssMatchSetId(const Aws::String& value) { SetXssMatchSetId(value); return *this;}

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
    inline XssMatchSet& WithXssMatchSetId(Aws::String&& value) { SetXssMatchSetId(std::move(value)); return *this;}

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
    inline XssMatchSet& WithXssMatchSetId(const char* value) { SetXssMatchSetId(value); return *this;}


    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline XssMatchSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline XssMatchSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name, if any, of the <code>XssMatchSet</code>.</p>
     */
    inline XssMatchSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline const Aws::Vector<XssMatchTuple>& GetXssMatchTuples() const{ return m_xssMatchTuples; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline bool XssMatchTuplesHasBeenSet() const { return m_xssMatchTuplesHasBeenSet; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline void SetXssMatchTuples(const Aws::Vector<XssMatchTuple>& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples = value; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline void SetXssMatchTuples(Aws::Vector<XssMatchTuple>&& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples = std::move(value); }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline XssMatchSet& WithXssMatchTuples(const Aws::Vector<XssMatchTuple>& value) { SetXssMatchTuples(value); return *this;}

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline XssMatchSet& WithXssMatchTuples(Aws::Vector<XssMatchTuple>&& value) { SetXssMatchTuples(std::move(value)); return *this;}

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline XssMatchSet& AddXssMatchTuples(const XssMatchTuple& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples.push_back(value); return *this; }

    /**
     * <p>Specifies the parts of web requests that you want to inspect for cross-site
     * scripting attacks.</p>
     */
    inline XssMatchSet& AddXssMatchTuples(XssMatchTuple&& value) { m_xssMatchTuplesHasBeenSet = true; m_xssMatchTuples.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_xssMatchSetId;
    bool m_xssMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<XssMatchTuple> m_xssMatchTuples;
    bool m_xssMatchTuplesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
