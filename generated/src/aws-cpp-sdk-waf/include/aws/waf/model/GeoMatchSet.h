/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * endpoints for regional and global use. </p>  <p>Contains one or more
   * countries that AWS WAF will search for.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/GeoMatchSet">AWS API
   * Reference</a></p>
   */
  class GeoMatchSet
  {
  public:
    AWS_WAF_API GeoMatchSet();
    AWS_WAF_API GeoMatchSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API GeoMatchSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>GeoMatchSetId</code> for an <code>GeoMatchSet</code>. You use
     * <code>GeoMatchSetId</code> to get information about a <code>GeoMatchSet</code>
     * (see <a>GeoMatchSet</a>), update a <code>GeoMatchSet</code> (see
     * <a>UpdateGeoMatchSet</a>), insert a <code>GeoMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>GeoMatchSet</code> from AWS WAF (see
     * <a>DeleteGeoMatchSet</a>).</p> <p> <code>GeoMatchSetId</code> is returned by
     * <a>CreateGeoMatchSet</a> and by <a>ListGeoMatchSets</a>.</p>
     */
    inline const Aws::String& GetGeoMatchSetId() const{ return m_geoMatchSetId; }

    /**
     * <p>The <code>GeoMatchSetId</code> for an <code>GeoMatchSet</code>. You use
     * <code>GeoMatchSetId</code> to get information about a <code>GeoMatchSet</code>
     * (see <a>GeoMatchSet</a>), update a <code>GeoMatchSet</code> (see
     * <a>UpdateGeoMatchSet</a>), insert a <code>GeoMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>GeoMatchSet</code> from AWS WAF (see
     * <a>DeleteGeoMatchSet</a>).</p> <p> <code>GeoMatchSetId</code> is returned by
     * <a>CreateGeoMatchSet</a> and by <a>ListGeoMatchSets</a>.</p>
     */
    inline bool GeoMatchSetIdHasBeenSet() const { return m_geoMatchSetIdHasBeenSet; }

    /**
     * <p>The <code>GeoMatchSetId</code> for an <code>GeoMatchSet</code>. You use
     * <code>GeoMatchSetId</code> to get information about a <code>GeoMatchSet</code>
     * (see <a>GeoMatchSet</a>), update a <code>GeoMatchSet</code> (see
     * <a>UpdateGeoMatchSet</a>), insert a <code>GeoMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>GeoMatchSet</code> from AWS WAF (see
     * <a>DeleteGeoMatchSet</a>).</p> <p> <code>GeoMatchSetId</code> is returned by
     * <a>CreateGeoMatchSet</a> and by <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(const Aws::String& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = value; }

    /**
     * <p>The <code>GeoMatchSetId</code> for an <code>GeoMatchSet</code>. You use
     * <code>GeoMatchSetId</code> to get information about a <code>GeoMatchSet</code>
     * (see <a>GeoMatchSet</a>), update a <code>GeoMatchSet</code> (see
     * <a>UpdateGeoMatchSet</a>), insert a <code>GeoMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>GeoMatchSet</code> from AWS WAF (see
     * <a>DeleteGeoMatchSet</a>).</p> <p> <code>GeoMatchSetId</code> is returned by
     * <a>CreateGeoMatchSet</a> and by <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(Aws::String&& value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId = std::move(value); }

    /**
     * <p>The <code>GeoMatchSetId</code> for an <code>GeoMatchSet</code>. You use
     * <code>GeoMatchSetId</code> to get information about a <code>GeoMatchSet</code>
     * (see <a>GeoMatchSet</a>), update a <code>GeoMatchSet</code> (see
     * <a>UpdateGeoMatchSet</a>), insert a <code>GeoMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>GeoMatchSet</code> from AWS WAF (see
     * <a>DeleteGeoMatchSet</a>).</p> <p> <code>GeoMatchSetId</code> is returned by
     * <a>CreateGeoMatchSet</a> and by <a>ListGeoMatchSets</a>.</p>
     */
    inline void SetGeoMatchSetId(const char* value) { m_geoMatchSetIdHasBeenSet = true; m_geoMatchSetId.assign(value); }

    /**
     * <p>The <code>GeoMatchSetId</code> for an <code>GeoMatchSet</code>. You use
     * <code>GeoMatchSetId</code> to get information about a <code>GeoMatchSet</code>
     * (see <a>GeoMatchSet</a>), update a <code>GeoMatchSet</code> (see
     * <a>UpdateGeoMatchSet</a>), insert a <code>GeoMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>GeoMatchSet</code> from AWS WAF (see
     * <a>DeleteGeoMatchSet</a>).</p> <p> <code>GeoMatchSetId</code> is returned by
     * <a>CreateGeoMatchSet</a> and by <a>ListGeoMatchSets</a>.</p>
     */
    inline GeoMatchSet& WithGeoMatchSetId(const Aws::String& value) { SetGeoMatchSetId(value); return *this;}

    /**
     * <p>The <code>GeoMatchSetId</code> for an <code>GeoMatchSet</code>. You use
     * <code>GeoMatchSetId</code> to get information about a <code>GeoMatchSet</code>
     * (see <a>GeoMatchSet</a>), update a <code>GeoMatchSet</code> (see
     * <a>UpdateGeoMatchSet</a>), insert a <code>GeoMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>GeoMatchSet</code> from AWS WAF (see
     * <a>DeleteGeoMatchSet</a>).</p> <p> <code>GeoMatchSetId</code> is returned by
     * <a>CreateGeoMatchSet</a> and by <a>ListGeoMatchSets</a>.</p>
     */
    inline GeoMatchSet& WithGeoMatchSetId(Aws::String&& value) { SetGeoMatchSetId(std::move(value)); return *this;}

    /**
     * <p>The <code>GeoMatchSetId</code> for an <code>GeoMatchSet</code>. You use
     * <code>GeoMatchSetId</code> to get information about a <code>GeoMatchSet</code>
     * (see <a>GeoMatchSet</a>), update a <code>GeoMatchSet</code> (see
     * <a>UpdateGeoMatchSet</a>), insert a <code>GeoMatchSet</code> into a
     * <code>Rule</code> or delete one from a <code>Rule</code> (see
     * <a>UpdateRule</a>), and delete a <code>GeoMatchSet</code> from AWS WAF (see
     * <a>DeleteGeoMatchSet</a>).</p> <p> <code>GeoMatchSetId</code> is returned by
     * <a>CreateGeoMatchSet</a> and by <a>ListGeoMatchSets</a>.</p>
     */
    inline GeoMatchSet& WithGeoMatchSetId(const char* value) { SetGeoMatchSetId(value); return *this;}


    /**
     * <p>A friendly name or description of the <a>GeoMatchSet</a>. You can't change
     * the name of an <code>GeoMatchSet</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>GeoMatchSet</a>. You can't change
     * the name of an <code>GeoMatchSet</code> after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <a>GeoMatchSet</a>. You can't change
     * the name of an <code>GeoMatchSet</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>GeoMatchSet</a>. You can't change
     * the name of an <code>GeoMatchSet</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>GeoMatchSet</a>. You can't change
     * the name of an <code>GeoMatchSet</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>GeoMatchSet</a>. You can't change
     * the name of an <code>GeoMatchSet</code> after you create it.</p>
     */
    inline GeoMatchSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>GeoMatchSet</a>. You can't change
     * the name of an <code>GeoMatchSet</code> after you create it.</p>
     */
    inline GeoMatchSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>GeoMatchSet</a>. You can't change
     * the name of an <code>GeoMatchSet</code> after you create it.</p>
     */
    inline GeoMatchSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An array of <a>GeoMatchConstraint</a> objects, which contain the country that
     * you want AWS WAF to search for.</p>
     */
    inline const Aws::Vector<GeoMatchConstraint>& GetGeoMatchConstraints() const{ return m_geoMatchConstraints; }

    /**
     * <p>An array of <a>GeoMatchConstraint</a> objects, which contain the country that
     * you want AWS WAF to search for.</p>
     */
    inline bool GeoMatchConstraintsHasBeenSet() const { return m_geoMatchConstraintsHasBeenSet; }

    /**
     * <p>An array of <a>GeoMatchConstraint</a> objects, which contain the country that
     * you want AWS WAF to search for.</p>
     */
    inline void SetGeoMatchConstraints(const Aws::Vector<GeoMatchConstraint>& value) { m_geoMatchConstraintsHasBeenSet = true; m_geoMatchConstraints = value; }

    /**
     * <p>An array of <a>GeoMatchConstraint</a> objects, which contain the country that
     * you want AWS WAF to search for.</p>
     */
    inline void SetGeoMatchConstraints(Aws::Vector<GeoMatchConstraint>&& value) { m_geoMatchConstraintsHasBeenSet = true; m_geoMatchConstraints = std::move(value); }

    /**
     * <p>An array of <a>GeoMatchConstraint</a> objects, which contain the country that
     * you want AWS WAF to search for.</p>
     */
    inline GeoMatchSet& WithGeoMatchConstraints(const Aws::Vector<GeoMatchConstraint>& value) { SetGeoMatchConstraints(value); return *this;}

    /**
     * <p>An array of <a>GeoMatchConstraint</a> objects, which contain the country that
     * you want AWS WAF to search for.</p>
     */
    inline GeoMatchSet& WithGeoMatchConstraints(Aws::Vector<GeoMatchConstraint>&& value) { SetGeoMatchConstraints(std::move(value)); return *this;}

    /**
     * <p>An array of <a>GeoMatchConstraint</a> objects, which contain the country that
     * you want AWS WAF to search for.</p>
     */
    inline GeoMatchSet& AddGeoMatchConstraints(const GeoMatchConstraint& value) { m_geoMatchConstraintsHasBeenSet = true; m_geoMatchConstraints.push_back(value); return *this; }

    /**
     * <p>An array of <a>GeoMatchConstraint</a> objects, which contain the country that
     * you want AWS WAF to search for.</p>
     */
    inline GeoMatchSet& AddGeoMatchConstraints(GeoMatchConstraint&& value) { m_geoMatchConstraintsHasBeenSet = true; m_geoMatchConstraints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_geoMatchSetId;
    bool m_geoMatchSetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<GeoMatchConstraint> m_geoMatchConstraints;
    bool m_geoMatchConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
