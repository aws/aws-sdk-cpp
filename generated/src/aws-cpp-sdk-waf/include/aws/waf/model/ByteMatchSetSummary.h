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
   * endpoints for regional and global use. </p>  <p>Returned by
   * <a>ListByteMatchSets</a>. Each <code>ByteMatchSetSummary</code> object includes
   * the <code>Name</code> and <code>ByteMatchSetId</code> for one
   * <a>ByteMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/ByteMatchSetSummary">AWS
   * API Reference</a></p>
   */
  class ByteMatchSetSummary
  {
  public:
    AWS_WAF_API ByteMatchSetSummary() = default;
    AWS_WAF_API ByteMatchSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API ByteMatchSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ByteMatchSetId</code> for a <code>ByteMatchSet</code>. You use
     * <code>ByteMatchSetId</code> to get information about a
     * <code>ByteMatchSet</code>, update a <code>ByteMatchSet</code>, remove a
     * <code>ByteMatchSet</code> from a <code>Rule</code>, and delete a
     * <code>ByteMatchSet</code> from AWS WAF.</p> <p> <code>ByteMatchSetId</code> is
     * returned by <a>CreateByteMatchSet</a> and by <a>ListByteMatchSets</a>.</p>
     */
    inline const Aws::String& GetByteMatchSetId() const { return m_byteMatchSetId; }
    inline bool ByteMatchSetIdHasBeenSet() const { return m_byteMatchSetIdHasBeenSet; }
    template<typename ByteMatchSetIdT = Aws::String>
    void SetByteMatchSetId(ByteMatchSetIdT&& value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId = std::forward<ByteMatchSetIdT>(value); }
    template<typename ByteMatchSetIdT = Aws::String>
    ByteMatchSetSummary& WithByteMatchSetId(ByteMatchSetIdT&& value) { SetByteMatchSetId(std::forward<ByteMatchSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description of the <a>ByteMatchSet</a>. You can't change
     * <code>Name</code> after you create a <code>ByteMatchSet</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ByteMatchSetSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_byteMatchSetId;
    bool m_byteMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
