/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains a list of principal types, resource types, and actions that can be
   * specified in policies stored in the same policy store. If the validation mode
   * for the policy store is set to <code>STRICT</code>, then policies that can't be
   * validated by this schema are rejected by Verified Permissions and can't be
   * stored in the policy store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/SchemaDefinition">AWS
   * API Reference</a></p>
   */
  class SchemaDefinition
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API SchemaDefinition();
    AWS_VERIFIEDPERMISSIONS_API SchemaDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API SchemaDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A JSON string representation of the schema supported by applications that use
     * this policy store. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/schema.html">Policy
     * store schema</a> in the <i>Amazon Verified Permissions User Guide</i>.</p>
     */
    inline const Aws::String& GetCedarJson() const{ return m_cedarJson; }

    /**
     * <p>A JSON string representation of the schema supported by applications that use
     * this policy store. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/schema.html">Policy
     * store schema</a> in the <i>Amazon Verified Permissions User Guide</i>.</p>
     */
    inline bool CedarJsonHasBeenSet() const { return m_cedarJsonHasBeenSet; }

    /**
     * <p>A JSON string representation of the schema supported by applications that use
     * this policy store. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/schema.html">Policy
     * store schema</a> in the <i>Amazon Verified Permissions User Guide</i>.</p>
     */
    inline void SetCedarJson(const Aws::String& value) { m_cedarJsonHasBeenSet = true; m_cedarJson = value; }

    /**
     * <p>A JSON string representation of the schema supported by applications that use
     * this policy store. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/schema.html">Policy
     * store schema</a> in the <i>Amazon Verified Permissions User Guide</i>.</p>
     */
    inline void SetCedarJson(Aws::String&& value) { m_cedarJsonHasBeenSet = true; m_cedarJson = std::move(value); }

    /**
     * <p>A JSON string representation of the schema supported by applications that use
     * this policy store. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/schema.html">Policy
     * store schema</a> in the <i>Amazon Verified Permissions User Guide</i>.</p>
     */
    inline void SetCedarJson(const char* value) { m_cedarJsonHasBeenSet = true; m_cedarJson.assign(value); }

    /**
     * <p>A JSON string representation of the schema supported by applications that use
     * this policy store. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/schema.html">Policy
     * store schema</a> in the <i>Amazon Verified Permissions User Guide</i>.</p>
     */
    inline SchemaDefinition& WithCedarJson(const Aws::String& value) { SetCedarJson(value); return *this;}

    /**
     * <p>A JSON string representation of the schema supported by applications that use
     * this policy store. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/schema.html">Policy
     * store schema</a> in the <i>Amazon Verified Permissions User Guide</i>.</p>
     */
    inline SchemaDefinition& WithCedarJson(Aws::String&& value) { SetCedarJson(std::move(value)); return *this;}

    /**
     * <p>A JSON string representation of the schema supported by applications that use
     * this policy store. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/schema.html">Policy
     * store schema</a> in the <i>Amazon Verified Permissions User Guide</i>.</p>
     */
    inline SchemaDefinition& WithCedarJson(const char* value) { SetCedarJson(value); return *this;}

  private:

    Aws::String m_cedarJson;
    bool m_cedarJsonHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
