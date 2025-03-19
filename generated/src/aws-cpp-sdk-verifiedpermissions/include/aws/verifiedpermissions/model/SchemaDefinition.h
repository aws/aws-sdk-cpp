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
    AWS_VERIFIEDPERMISSIONS_API SchemaDefinition() = default;
    AWS_VERIFIEDPERMISSIONS_API SchemaDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API SchemaDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A JSON string representation of the schema supported by applications that use
     * this policy store. To delete the schema, run <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_PutSchema.html">PutSchema</a>
     * with <code>{}</code> for this parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/schema.html">Policy
     * store schema</a> in the <i>Amazon Verified Permissions User Guide</i>.</p>
     */
    inline const Aws::String& GetCedarJson() const { return m_cedarJson; }
    inline bool CedarJsonHasBeenSet() const { return m_cedarJsonHasBeenSet; }
    template<typename CedarJsonT = Aws::String>
    void SetCedarJson(CedarJsonT&& value) { m_cedarJsonHasBeenSet = true; m_cedarJson = std::forward<CedarJsonT>(value); }
    template<typename CedarJsonT = Aws::String>
    SchemaDefinition& WithCedarJson(CedarJsonT&& value) { SetCedarJson(std::forward<CedarJsonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cedarJson;
    bool m_cedarJsonHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
