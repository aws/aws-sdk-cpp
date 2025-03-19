/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/SizeConstraint.h>
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
   * contains <code>SizeConstraint</code> objects, which specify the parts of web
   * requests that you want AWS WAF to inspect the size of. If a
   * <code>SizeConstraintSet</code> contains more than one
   * <code>SizeConstraint</code> object, a request only needs to match one constraint
   * to be considered a match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/SizeConstraintSet">AWS
   * API Reference</a></p>
   */
  class SizeConstraintSet
  {
  public:
    AWS_WAF_API SizeConstraintSet() = default;
    AWS_WAF_API SizeConstraintSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API SizeConstraintSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a <code>SizeConstraintSet</code>. You use
     * <code>SizeConstraintSetId</code> to get information about a
     * <code>SizeConstraintSet</code> (see <a>GetSizeConstraintSet</a>), update a
     * <code>SizeConstraintSet</code> (see <a>UpdateSizeConstraintSet</a>), insert a
     * <code>SizeConstraintSet</code> into a <code>Rule</code> or delete one from a
     * <code>Rule</code> (see <a>UpdateRule</a>), and delete a
     * <code>SizeConstraintSet</code> from AWS WAF (see
     * <a>DeleteSizeConstraintSet</a>).</p> <p> <code>SizeConstraintSetId</code> is
     * returned by <a>CreateSizeConstraintSet</a> and by
     * <a>ListSizeConstraintSets</a>.</p>
     */
    inline const Aws::String& GetSizeConstraintSetId() const { return m_sizeConstraintSetId; }
    inline bool SizeConstraintSetIdHasBeenSet() const { return m_sizeConstraintSetIdHasBeenSet; }
    template<typename SizeConstraintSetIdT = Aws::String>
    void SetSizeConstraintSetId(SizeConstraintSetIdT&& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = std::forward<SizeConstraintSetIdT>(value); }
    template<typename SizeConstraintSetIdT = Aws::String>
    SizeConstraintSet& WithSizeConstraintSetId(SizeConstraintSetIdT&& value) { SetSizeConstraintSetId(std::forward<SizeConstraintSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name, if any, of the <code>SizeConstraintSet</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SizeConstraintSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the parts of web requests that you want to inspect the size of.</p>
     */
    inline const Aws::Vector<SizeConstraint>& GetSizeConstraints() const { return m_sizeConstraints; }
    inline bool SizeConstraintsHasBeenSet() const { return m_sizeConstraintsHasBeenSet; }
    template<typename SizeConstraintsT = Aws::Vector<SizeConstraint>>
    void SetSizeConstraints(SizeConstraintsT&& value) { m_sizeConstraintsHasBeenSet = true; m_sizeConstraints = std::forward<SizeConstraintsT>(value); }
    template<typename SizeConstraintsT = Aws::Vector<SizeConstraint>>
    SizeConstraintSet& WithSizeConstraints(SizeConstraintsT&& value) { SetSizeConstraints(std::forward<SizeConstraintsT>(value)); return *this;}
    template<typename SizeConstraintsT = SizeConstraint>
    SizeConstraintSet& AddSizeConstraints(SizeConstraintsT&& value) { m_sizeConstraintsHasBeenSet = true; m_sizeConstraints.emplace_back(std::forward<SizeConstraintsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sizeConstraintSetId;
    bool m_sizeConstraintSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SizeConstraint> m_sizeConstraints;
    bool m_sizeConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
