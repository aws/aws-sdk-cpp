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
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/IamIdentityCenterForGet">AWS
   * API Reference</a></p>
   */
  class IamIdentityCenterForGet
  {
  public:
    AWS_MPA_API IamIdentityCenterForGet() = default;
    AWS_MPA_API IamIdentityCenterForGet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API IamIdentityCenterForGet& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    IamIdentityCenterForGet& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URL for the approval portal associated with the IAM Identity Center
     * instance.</p>
     */
    inline const Aws::String& GetApprovalPortalUrl() const { return m_approvalPortalUrl; }
    inline bool ApprovalPortalUrlHasBeenSet() const { return m_approvalPortalUrlHasBeenSet; }
    template<typename ApprovalPortalUrlT = Aws::String>
    void SetApprovalPortalUrl(ApprovalPortalUrlT&& value) { m_approvalPortalUrlHasBeenSet = true; m_approvalPortalUrl = std::forward<ApprovalPortalUrlT>(value); }
    template<typename ApprovalPortalUrlT = Aws::String>
    IamIdentityCenterForGet& WithApprovalPortalUrl(ApprovalPortalUrlT&& value) { SetApprovalPortalUrl(std::forward<ApprovalPortalUrlT>(value)); return *this;}
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
    IamIdentityCenterForGet& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_approvalPortalUrl;
    bool m_approvalPortalUrlHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
