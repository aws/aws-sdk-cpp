/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/UpdateStaticPolicyDefinition.h>
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
   * <p>Contains information about updates to be applied to a policy.</p> <p>This
   * data type is used as a request parameter in the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicy.html">UpdatePolicy</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdatePolicyDefinition">AWS
   * API Reference</a></p>
   */
  class UpdatePolicyDefinition
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdatePolicyDefinition() = default;
    AWS_VERIFIEDPERMISSIONS_API UpdatePolicyDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API UpdatePolicyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details about the updates to be applied to a static policy.</p>
     */
    inline const UpdateStaticPolicyDefinition& GetStatic() const { return m_static; }
    inline bool StaticHasBeenSet() const { return m_staticHasBeenSet; }
    template<typename StaticT = UpdateStaticPolicyDefinition>
    void SetStatic(StaticT&& value) { m_staticHasBeenSet = true; m_static = std::forward<StaticT>(value); }
    template<typename StaticT = UpdateStaticPolicyDefinition>
    UpdatePolicyDefinition& WithStatic(StaticT&& value) { SetStatic(std::forward<StaticT>(value)); return *this;}
    ///@}
  private:

    UpdateStaticPolicyDefinition m_static;
    bool m_staticHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
