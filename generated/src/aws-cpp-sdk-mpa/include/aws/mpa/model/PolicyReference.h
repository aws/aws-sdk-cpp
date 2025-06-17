/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains the Amazon Resource Name (ARN) for a policy. Policies define what
   * operations a team that define the permissions for team resources.</p> <p>The
   * protected operation for a service integration might require specific
   * permissions. For more information, see <a
   * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-integrations.html">How
   * other services work with Multi-party approval</a> in the <i>Multi-party approval
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/PolicyReference">AWS
   * API Reference</a></p>
   */
  class PolicyReference
  {
  public:
    AWS_MPA_API PolicyReference() = default;
    AWS_MPA_API PolicyReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API PolicyReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    PolicyReference& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
