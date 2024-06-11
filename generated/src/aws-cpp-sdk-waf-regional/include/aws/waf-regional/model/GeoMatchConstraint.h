﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/GeoMatchConstraintType.h>
#include <aws/waf-regional/model/GeoMatchConstraintValue.h>
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
   * endpoints for regional and global use. </p>  <p>The country from which
   * web requests originate that you want AWS WAF to search for.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/GeoMatchConstraint">AWS
   * API Reference</a></p>
   */
  class GeoMatchConstraint
  {
  public:
    AWS_WAFREGIONAL_API GeoMatchConstraint();
    AWS_WAFREGIONAL_API GeoMatchConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API GeoMatchConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of geographical area you want AWS WAF to search for. Currently
     * <code>Country</code> is the only valid value.</p>
     */
    inline const GeoMatchConstraintType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const GeoMatchConstraintType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(GeoMatchConstraintType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline GeoMatchConstraint& WithType(const GeoMatchConstraintType& value) { SetType(value); return *this;}
    inline GeoMatchConstraint& WithType(GeoMatchConstraintType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The country that you want AWS WAF to search for.</p>
     */
    inline const GeoMatchConstraintValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const GeoMatchConstraintValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(GeoMatchConstraintValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline GeoMatchConstraint& WithValue(const GeoMatchConstraintValue& value) { SetValue(value); return *this;}
    inline GeoMatchConstraint& WithValue(GeoMatchConstraintValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    GeoMatchConstraintType m_type;
    bool m_typeHasBeenSet = false;

    GeoMatchConstraintValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
