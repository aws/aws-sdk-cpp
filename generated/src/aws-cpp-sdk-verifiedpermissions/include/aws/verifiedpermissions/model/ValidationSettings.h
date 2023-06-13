/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/ValidationMode.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>A structure that contains Cedar policy validation settings for the policy
   * store. The validation mode determines which validation failures that Cedar
   * considers serious enough to block acceptance of a new or edited static policy or
   * policy template. </p> <p>This data type is used as a request parameter in the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicyStore.html">CreatePolicyStore</a>
   * and <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyStore.html">UpdatePolicyStore</a>
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ValidationSettings">AWS
   * API Reference</a></p>
   */
  class ValidationSettings
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ValidationSettings();
    AWS_VERIFIEDPERMISSIONS_API ValidationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ValidationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The validation mode currently configured for this policy store. The valid
     * values are:</p> <ul> <li> <p> <b>OFF</b> – Neither Verified Permissions nor
     * Cedar perform any validation on policies. No validation errors are reported by
     * either service.</p> </li> <li> <p> <b>STRICT</b> – Requires a schema to be
     * present in the policy store. Cedar performs validation on all submitted new or
     * updated static policies and policy templates. Any that fail validation are
     * rejected and Cedar doesn't store them in the policy store.</p> </li> </ul>
     *  <p>If <code>Mode=STRICT</code> and the policy store doesn't contain
     * a schema, Verified Permissions rejects all static policies and policy templates
     * because there is no schema to validate against. </p> <p>To submit a static
     * policy or policy template without a schema, you must turn off validation.</p>
     * 
     */
    inline const ValidationMode& GetMode() const{ return m_mode; }

    /**
     * <p>The validation mode currently configured for this policy store. The valid
     * values are:</p> <ul> <li> <p> <b>OFF</b> – Neither Verified Permissions nor
     * Cedar perform any validation on policies. No validation errors are reported by
     * either service.</p> </li> <li> <p> <b>STRICT</b> – Requires a schema to be
     * present in the policy store. Cedar performs validation on all submitted new or
     * updated static policies and policy templates. Any that fail validation are
     * rejected and Cedar doesn't store them in the policy store.</p> </li> </ul>
     *  <p>If <code>Mode=STRICT</code> and the policy store doesn't contain
     * a schema, Verified Permissions rejects all static policies and policy templates
     * because there is no schema to validate against. </p> <p>To submit a static
     * policy or policy template without a schema, you must turn off validation.</p>
     * 
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The validation mode currently configured for this policy store. The valid
     * values are:</p> <ul> <li> <p> <b>OFF</b> – Neither Verified Permissions nor
     * Cedar perform any validation on policies. No validation errors are reported by
     * either service.</p> </li> <li> <p> <b>STRICT</b> – Requires a schema to be
     * present in the policy store. Cedar performs validation on all submitted new or
     * updated static policies and policy templates. Any that fail validation are
     * rejected and Cedar doesn't store them in the policy store.</p> </li> </ul>
     *  <p>If <code>Mode=STRICT</code> and the policy store doesn't contain
     * a schema, Verified Permissions rejects all static policies and policy templates
     * because there is no schema to validate against. </p> <p>To submit a static
     * policy or policy template without a schema, you must turn off validation.</p>
     * 
     */
    inline void SetMode(const ValidationMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The validation mode currently configured for this policy store. The valid
     * values are:</p> <ul> <li> <p> <b>OFF</b> – Neither Verified Permissions nor
     * Cedar perform any validation on policies. No validation errors are reported by
     * either service.</p> </li> <li> <p> <b>STRICT</b> – Requires a schema to be
     * present in the policy store. Cedar performs validation on all submitted new or
     * updated static policies and policy templates. Any that fail validation are
     * rejected and Cedar doesn't store them in the policy store.</p> </li> </ul>
     *  <p>If <code>Mode=STRICT</code> and the policy store doesn't contain
     * a schema, Verified Permissions rejects all static policies and policy templates
     * because there is no schema to validate against. </p> <p>To submit a static
     * policy or policy template without a schema, you must turn off validation.</p>
     * 
     */
    inline void SetMode(ValidationMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The validation mode currently configured for this policy store. The valid
     * values are:</p> <ul> <li> <p> <b>OFF</b> – Neither Verified Permissions nor
     * Cedar perform any validation on policies. No validation errors are reported by
     * either service.</p> </li> <li> <p> <b>STRICT</b> – Requires a schema to be
     * present in the policy store. Cedar performs validation on all submitted new or
     * updated static policies and policy templates. Any that fail validation are
     * rejected and Cedar doesn't store them in the policy store.</p> </li> </ul>
     *  <p>If <code>Mode=STRICT</code> and the policy store doesn't contain
     * a schema, Verified Permissions rejects all static policies and policy templates
     * because there is no schema to validate against. </p> <p>To submit a static
     * policy or policy template without a schema, you must turn off validation.</p>
     * 
     */
    inline ValidationSettings& WithMode(const ValidationMode& value) { SetMode(value); return *this;}

    /**
     * <p>The validation mode currently configured for this policy store. The valid
     * values are:</p> <ul> <li> <p> <b>OFF</b> – Neither Verified Permissions nor
     * Cedar perform any validation on policies. No validation errors are reported by
     * either service.</p> </li> <li> <p> <b>STRICT</b> – Requires a schema to be
     * present in the policy store. Cedar performs validation on all submitted new or
     * updated static policies and policy templates. Any that fail validation are
     * rejected and Cedar doesn't store them in the policy store.</p> </li> </ul>
     *  <p>If <code>Mode=STRICT</code> and the policy store doesn't contain
     * a schema, Verified Permissions rejects all static policies and policy templates
     * because there is no schema to validate against. </p> <p>To submit a static
     * policy or policy template without a schema, you must turn off validation.</p>
     * 
     */
    inline ValidationSettings& WithMode(ValidationMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    ValidationMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
