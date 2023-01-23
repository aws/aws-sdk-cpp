/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
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
   * endpoints for regional and global use. </p>  <p>The <code>Id</code> and
   * <code>Name</code> of an <code>XssMatchSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/XssMatchSetSummary">AWS
   * API Reference</a></p>
   */
  class XssMatchSetSummary
  {
  public:
    AWS_WAF_API XssMatchSetSummary();
    AWS_WAF_API XssMatchSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API XssMatchSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
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
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
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
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
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
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
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
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
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
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline XssMatchSetSummary& WithXssMatchSetId(const Aws::String& value) { SetXssMatchSetId(value); return *this;}

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline XssMatchSetSummary& WithXssMatchSetId(Aws::String&& value) { SetXssMatchSetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for an <code>XssMatchSet</code>. You use
     * <code>XssMatchSetId</code> to get information about a <code>XssMatchSet</code>
     * (see <a>GetXssMatchSet</a>), update an <code>XssMatchSet</code> (see
     * <a>UpdateXssMatchSet</a>), insert an <code>XssMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete an <code>XssMatchSet</code> from AWS WAF (see
     * <a>DeleteXssMatchSet</a>).</p> <p> <code>XssMatchSetId</code> is returned by
     * <a>CreateXssMatchSet</a> and by <a>ListXssMatchSets</a>.</p>
     */
    inline XssMatchSetSummary& WithXssMatchSetId(const char* value) { SetXssMatchSetId(value); return *this;}


    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline XssMatchSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline XssMatchSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>XssMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline XssMatchSetSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_xssMatchSetId;
    bool m_xssMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
