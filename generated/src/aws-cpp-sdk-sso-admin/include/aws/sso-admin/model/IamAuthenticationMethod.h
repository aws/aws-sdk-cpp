/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes details for authentication that uses
   * IAM.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/IamAuthenticationMethod">AWS
   * API Reference</a></p>
   */
  class IamAuthenticationMethod
  {
  public:
    AWS_SSOADMIN_API IamAuthenticationMethod() = default;
    AWS_SSOADMIN_API IamAuthenticationMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API IamAuthenticationMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An IAM policy document in JSON.</p>
     */
    inline Aws::Utils::DocumentView GetActorPolicy() const { return m_actorPolicy; }
    inline bool ActorPolicyHasBeenSet() const { return m_actorPolicyHasBeenSet; }
    template<typename ActorPolicyT = Aws::Utils::Document>
    void SetActorPolicy(ActorPolicyT&& value) { m_actorPolicyHasBeenSet = true; m_actorPolicy = std::forward<ActorPolicyT>(value); }
    template<typename ActorPolicyT = Aws::Utils::Document>
    IamAuthenticationMethod& WithActorPolicy(ActorPolicyT&& value) { SetActorPolicy(std::forward<ActorPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_actorPolicy;
    bool m_actorPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
