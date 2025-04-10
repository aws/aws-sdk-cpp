﻿/**
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
   * <p>Contains information about one of the policies that determined an
   * authorization decision.</p> <p>This data type is used as an element in a
   * response parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorized.html">IsAuthorized</a>,
   * <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_BatchIsAuthorized.html">BatchIsAuthorized</a>,
   * and <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorizedWithToken.html">IsAuthorizedWithToken</a>
   * operations.</p> <p>Example:
   * <code>"determiningPolicies":[{"policyId":"SPEXAMPLEabcdefg111111"}]</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/DeterminingPolicyItem">AWS
   * API Reference</a></p>
   */
  class DeterminingPolicyItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API DeterminingPolicyItem() = default;
    AWS_VERIFIEDPERMISSIONS_API DeterminingPolicyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API DeterminingPolicyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Id of a policy that determined to an authorization decision.</p>
     * <p>Example: <code>"policyId":"SPEXAMPLEabcdefg111111"</code> </p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    DeterminingPolicyItem& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
