/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/IamIdentityCenter.h>
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
   * <p>Contains details for the resource that provides identities to the identity
   * source. For example, an IAM Identity Center instance.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/IdentitySourceParameters">AWS
   * API Reference</a></p>
   */
  class IdentitySourceParameters
  {
  public:
    AWS_MPA_API IdentitySourceParameters() = default;
    AWS_MPA_API IdentitySourceParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API IdentitySourceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IAM Identity Center credentials.</p>
     */
    inline const IamIdentityCenter& GetIamIdentityCenter() const { return m_iamIdentityCenter; }
    inline bool IamIdentityCenterHasBeenSet() const { return m_iamIdentityCenterHasBeenSet; }
    template<typename IamIdentityCenterT = IamIdentityCenter>
    void SetIamIdentityCenter(IamIdentityCenterT&& value) { m_iamIdentityCenterHasBeenSet = true; m_iamIdentityCenter = std::forward<IamIdentityCenterT>(value); }
    template<typename IamIdentityCenterT = IamIdentityCenter>
    IdentitySourceParameters& WithIamIdentityCenter(IamIdentityCenterT&& value) { SetIamIdentityCenter(std::forward<IamIdentityCenterT>(value)); return *this;}
    ///@}
  private:

    IamIdentityCenter m_iamIdentityCenter;
    bool m_iamIdentityCenterHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
