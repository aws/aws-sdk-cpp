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
   * <p>IAM Identity Center credentials. For more information see, <a
   * href="http://aws.amazon.com/identity-center/">IAM Identity Center</a>
   * .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/IamIdentityCenter">AWS
   * API Reference</a></p>
   */
  class IamIdentityCenter
  {
  public:
    AWS_MPA_API IamIdentityCenter() = default;
    AWS_MPA_API IamIdentityCenter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API IamIdentityCenter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    IamIdentityCenter& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services Region where the IAM Identity Center instance is
     * located.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    IamIdentityCenter& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
