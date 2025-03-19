/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ChangeAction.h>
#include <aws/waf/model/GeoMatchConstraint.h>
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
   * endpoints for regional and global use. </p>  <p>Specifies the type of
   * update to perform to an <a>GeoMatchSet</a> with
   * <a>UpdateGeoMatchSet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GeoMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class GeoMatchSetUpdate
  {
  public:
    AWS_WAF_API GeoMatchSetUpdate() = default;
    AWS_WAF_API GeoMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API GeoMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to insert or delete a country with
     * <a>UpdateGeoMatchSet</a>.</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline GeoMatchSetUpdate& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country from which web requests originate that you want AWS WAF to search
     * for.</p>
     */
    inline const GeoMatchConstraint& GetGeoMatchConstraint() const { return m_geoMatchConstraint; }
    inline bool GeoMatchConstraintHasBeenSet() const { return m_geoMatchConstraintHasBeenSet; }
    template<typename GeoMatchConstraintT = GeoMatchConstraint>
    void SetGeoMatchConstraint(GeoMatchConstraintT&& value) { m_geoMatchConstraintHasBeenSet = true; m_geoMatchConstraint = std::forward<GeoMatchConstraintT>(value); }
    template<typename GeoMatchConstraintT = GeoMatchConstraint>
    GeoMatchSetUpdate& WithGeoMatchConstraint(GeoMatchConstraintT&& value) { SetGeoMatchConstraint(std::forward<GeoMatchConstraintT>(value)); return *this;}
    ///@}
  private:

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    GeoMatchConstraint m_geoMatchConstraint;
    bool m_geoMatchConstraintHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
