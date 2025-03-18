/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Information about the IAM Identity Center Application used to configure
   * authentication for a plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/IdcAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class IdcAuthConfiguration
  {
  public:
    AWS_QBUSINESS_API IdcAuthConfiguration() = default;
    AWS_QBUSINESS_API IdcAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API IdcAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center Application used to
     * configure authentication.</p>
     */
    inline const Aws::String& GetIdcApplicationArn() const { return m_idcApplicationArn; }
    inline bool IdcApplicationArnHasBeenSet() const { return m_idcApplicationArnHasBeenSet; }
    template<typename IdcApplicationArnT = Aws::String>
    void SetIdcApplicationArn(IdcApplicationArnT&& value) { m_idcApplicationArnHasBeenSet = true; m_idcApplicationArn = std::forward<IdcApplicationArnT>(value); }
    template<typename IdcApplicationArnT = Aws::String>
    IdcAuthConfiguration& WithIdcApplicationArn(IdcApplicationArnT&& value) { SetIdcApplicationArn(std::forward<IdcApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role with permissions to perform
     * actions on Amazon Web Services services on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    IdcAuthConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_idcApplicationArn;
    bool m_idcApplicationArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
