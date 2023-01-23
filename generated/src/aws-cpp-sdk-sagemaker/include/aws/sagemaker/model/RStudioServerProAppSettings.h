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
   * <code>RStudioServerPro</code> app. <code>RStudioServerProAppSettings</code>
   * cannot be updated. The <code>RStudioServerPro</code> app must be deleted and a
   * new one created to make any changes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RStudioServerProAppSettings">AWS
   * API Reference</a></p>
   */
  class RStudioServerProAppSettings
  {
  public:
    AWS_SAGEMAKER_API RStudioServerProAppSettings();
    AWS_SAGEMAKER_API RStudioServerProAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RStudioServerProAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the current user has access to the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline const RStudioServerProAccessStatus& GetAccessStatus() const{ return m_accessStatus; }

    /**
     * <p>Indicates whether the current user has access to the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline bool AccessStatusHasBeenSet() const { return m_accessStatusHasBeenSet; }

    /**
     * <p>Indicates whether the current user has access to the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline void SetAccessStatus(const RStudioServerProAccessStatus& value) { m_accessStatusHasBeenSet = true; m_accessStatus = value; }

    /**
     * <p>Indicates whether the current user has access to the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline void SetAccessStatus(RStudioServerProAccessStatus&& value) { m_accessStatusHasBeenSet = true; m_accessStatus = std::move(value); }

    /**
     * <p>Indicates whether the current user has access to the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline RStudioServerProAppSettings& WithAccessStatus(const RStudioServerProAccessStatus& value) { SetAccessStatus(value); return *this;}

    /**
     * <p>Indicates whether the current user has access to the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline RStudioServerProAppSettings& WithAccessStatus(RStudioServerProAccessStatus&& value) { SetAccessStatus(std::move(value)); return *this;}


    /**
     * <p>The level of permissions that the user has within the
     * <code>RStudioServerPro</code> app. This value defaults to `User`. The `Admin`
     * value allows the user access to the RStudio Administrative Dashboard.</p>
     */
    inline const RStudioServerProUserGroup& GetUserGroup() const{ return m_userGroup; }

    /**
     * <p>The level of permissions that the user has within the
     * <code>RStudioServerPro</code> app. This value defaults to `User`. The `Admin`
     * value allows the user access to the RStudio Administrative Dashboard.</p>
     */
    inline bool UserGroupHasBeenSet() const { return m_userGroupHasBeenSet; }

    /**
     * <p>The level of permissions that the user has within the
     * <code>RStudioServerPro</code> app. This value defaults to `User`. The `Admin`
     * value allows the user access to the RStudio Administrative Dashboard.</p>
     */
    inline void SetUserGroup(const RStudioServerProUserGroup& value) { m_userGroupHasBeenSet = true; m_userGroup = value; }

    /**
     * <p>The level of permissions that the user has within the
     * <code>RStudioServerPro</code> app. This value defaults to `User`. The `Admin`
     * value allows the user access to the RStudio Administrative Dashboard.</p>
     */
    inline void SetUserGroup(RStudioServerProUserGroup&& value) { m_userGroupHasBeenSet = true; m_userGroup = std::move(value); }

    /**
     * <p>The level of permissions that the user has within the
     * <code>RStudioServerPro</code> app. This value defaults to `User`. The `Admin`
     * value allows the user access to the RStudio Administrative Dashboard.</p>
     */
    inline RStudioServerProAppSettings& WithUserGroup(const RStudioServerProUserGroup& value) { SetUserGroup(value); return *this;}

    /**
     * <p>The level of permissions that the user has within the
     * <code>RStudioServerPro</code> app. This value defaults to `User`. The `Admin`
     * value allows the user access to the RStudio Administrative Dashboard.</p>
     */
    inline RStudioServerProAppSettings& WithUserGroup(RStudioServerProUserGroup&& value) { SetUserGroup(std::move(value)); return *this;}

  private:

    RStudioServerProAccessStatus m_accessStatus;
    bool m_accessStatusHasBeenSet = false;

    RStudioServerProUserGroup m_userGroup;
    bool m_userGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
