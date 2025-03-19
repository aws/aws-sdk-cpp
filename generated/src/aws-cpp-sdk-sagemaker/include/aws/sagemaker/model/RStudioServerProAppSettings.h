/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RStudioServerProAccessStatus.h>
#include <aws/sagemaker/model/RStudioServerProUserGroup.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A collection of settings that configure user interaction with the
   * <code>RStudioServerPro</code> app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RStudioServerProAppSettings">AWS
   * API Reference</a></p>
   */
  class RStudioServerProAppSettings
  {
  public:
    AWS_SAGEMAKER_API RStudioServerProAppSettings() = default;
    AWS_SAGEMAKER_API RStudioServerProAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RStudioServerProAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the current user has access to the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline RStudioServerProAccessStatus GetAccessStatus() const { return m_accessStatus; }
    inline bool AccessStatusHasBeenSet() const { return m_accessStatusHasBeenSet; }
    inline void SetAccessStatus(RStudioServerProAccessStatus value) { m_accessStatusHasBeenSet = true; m_accessStatus = value; }
    inline RStudioServerProAppSettings& WithAccessStatus(RStudioServerProAccessStatus value) { SetAccessStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of permissions that the user has within the
     * <code>RStudioServerPro</code> app. This value defaults to `User`. The `Admin`
     * value allows the user access to the RStudio Administrative Dashboard.</p>
     */
    inline RStudioServerProUserGroup GetUserGroup() const { return m_userGroup; }
    inline bool UserGroupHasBeenSet() const { return m_userGroupHasBeenSet; }
    inline void SetUserGroup(RStudioServerProUserGroup value) { m_userGroupHasBeenSet = true; m_userGroup = value; }
    inline RStudioServerProAppSettings& WithUserGroup(RStudioServerProUserGroup value) { SetUserGroup(value); return *this;}
    ///@}
  private:

    RStudioServerProAccessStatus m_accessStatus{RStudioServerProAccessStatus::NOT_SET};
    bool m_accessStatusHasBeenSet = false;

    RStudioServerProUserGroup m_userGroup{RStudioServerProUserGroup::NOT_SET};
    bool m_userGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
