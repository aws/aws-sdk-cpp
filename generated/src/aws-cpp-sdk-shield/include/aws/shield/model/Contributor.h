/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>A contributor to the attack and their contribution. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Contributor">AWS
   * API Reference</a></p>
   */
  class Contributor
  {
  public:
    AWS_SHIELD_API Contributor();
    AWS_SHIELD_API Contributor(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Contributor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the contributor. The type of name that you'll find here depends
     * on the <code>AttackPropertyIdentifier</code> setting in the
     * <code>AttackProperty</code> where this contributor is defined. For example, if
     * the <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the contributor. The type of name that you'll find here depends
     * on the <code>AttackPropertyIdentifier</code> setting in the
     * <code>AttackProperty</code> where this contributor is defined. For example, if
     * the <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the contributor. The type of name that you'll find here depends
     * on the <code>AttackPropertyIdentifier</code> setting in the
     * <code>AttackProperty</code> where this contributor is defined. For example, if
     * the <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the contributor. The type of name that you'll find here depends
     * on the <code>AttackPropertyIdentifier</code> setting in the
     * <code>AttackProperty</code> where this contributor is defined. For example, if
     * the <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the contributor. The type of name that you'll find here depends
     * on the <code>AttackPropertyIdentifier</code> setting in the
     * <code>AttackProperty</code> where this contributor is defined. For example, if
     * the <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the contributor. The type of name that you'll find here depends
     * on the <code>AttackPropertyIdentifier</code> setting in the
     * <code>AttackProperty</code> where this contributor is defined. For example, if
     * the <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline Contributor& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contributor. The type of name that you'll find here depends
     * on the <code>AttackPropertyIdentifier</code> setting in the
     * <code>AttackProperty</code> where this contributor is defined. For example, if
     * the <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline Contributor& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contributor. The type of name that you'll find here depends
     * on the <code>AttackPropertyIdentifier</code> setting in the
     * <code>AttackProperty</code> where this contributor is defined. For example, if
     * the <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline Contributor& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The contribution of this contributor expressed in <a>Protection</a> units.
     * For example <code>10,000</code>.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>The contribution of this contributor expressed in <a>Protection</a> units.
     * For example <code>10,000</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The contribution of this contributor expressed in <a>Protection</a> units.
     * For example <code>10,000</code>.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The contribution of this contributor expressed in <a>Protection</a> units.
     * For example <code>10,000</code>.</p>
     */
    inline Contributor& WithValue(long long value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
