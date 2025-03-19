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
   * <code>Name</code> of a <code>SqlInjectionMatchSet</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/SqlInjectionMatchSetSummary">AWS
   * API Reference</a></p>
   */
  class SqlInjectionMatchSetSummary
  {
  public:
    AWS_WAF_API SqlInjectionMatchSetSummary() = default;
    AWS_WAF_API SqlInjectionMatchSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API SqlInjectionMatchSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a <code>SqlInjectionMatchSet</code>. You use
     * <code>SqlInjectionMatchSetId</code> to get information about a
     * <code>SqlInjectionMatchSet</code> (see <a>GetSqlInjectionMatchSet</a>), update a
     * <code>SqlInjectionMatchSet</code> (see <a>UpdateSqlInjectionMatchSet</a>),
     * insert a <code>SqlInjectionMatchSet</code> into a <code>Rule</code> or delete
     * one from a <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SqlInjectionMatchSet</code> from AWS WAF (see
     * <a>DeleteSqlInjectionMatchSet</a>).</p> <p> <code>SqlInjectionMatchSetId</code>
     * is returned by <a>CreateSqlInjectionMatchSet</a> and by
     * <a>ListSqlInjectionMatchSets</a>.</p>
     */
    inline const Aws::String& GetSqlInjectionMatchSetId() const { return m_sqlInjectionMatchSetId; }
    inline bool SqlInjectionMatchSetIdHasBeenSet() const { return m_sqlInjectionMatchSetIdHasBeenSet; }
    template<typename SqlInjectionMatchSetIdT = Aws::String>
    void SetSqlInjectionMatchSetId(SqlInjectionMatchSetIdT&& value) { m_sqlInjectionMatchSetIdHasBeenSet = true; m_sqlInjectionMatchSetId = std::forward<SqlInjectionMatchSetIdT>(value); }
    template<typename SqlInjectionMatchSetIdT = Aws::String>
    SqlInjectionMatchSetSummary& WithSqlInjectionMatchSetId(SqlInjectionMatchSetIdT&& value) { SetSqlInjectionMatchSetId(std::forward<SqlInjectionMatchSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>SqlInjectionMatchSet</code>, if any, specified by
     * <code>Id</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SqlInjectionMatchSetSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sqlInjectionMatchSetId;
    bool m_sqlInjectionMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
