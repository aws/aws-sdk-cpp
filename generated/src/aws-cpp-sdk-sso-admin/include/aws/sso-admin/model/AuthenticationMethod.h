/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/IamAuthenticationMethod.h>
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
   * <p>A structure that describes an authentication method that can be used by an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AuthenticationMethod">AWS
   * API Reference</a></p>
   */
  class AuthenticationMethod
  {
  public:
    AWS_SSOADMIN_API AuthenticationMethod();
    AWS_SSOADMIN_API AuthenticationMethod(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AuthenticationMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that describes details for IAM authentication.</p>
     */
    inline const IamAuthenticationMethod& GetIam() const{ return m_iam; }

    /**
     * <p>A structure that describes details for IAM authentication.</p>
     */
    inline bool IamHasBeenSet() const { return m_iamHasBeenSet; }

    /**
     * <p>A structure that describes details for IAM authentication.</p>
     */
    inline void SetIam(const IamAuthenticationMethod& value) { m_iamHasBeenSet = true; m_iam = value; }

    /**
     * <p>A structure that describes details for IAM authentication.</p>
     */
    inline void SetIam(IamAuthenticationMethod&& value) { m_iamHasBeenSet = true; m_iam = std::move(value); }

    /**
     * <p>A structure that describes details for IAM authentication.</p>
     */
    inline AuthenticationMethod& WithIam(const IamAuthenticationMethod& value) { SetIam(value); return *this;}

    /**
     * <p>A structure that describes details for IAM authentication.</p>
     */
    inline AuthenticationMethod& WithIam(IamAuthenticationMethod&& value) { SetIam(std::move(value)); return *this;}

  private:

    IamAuthenticationMethod m_iam;
    bool m_iamHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
