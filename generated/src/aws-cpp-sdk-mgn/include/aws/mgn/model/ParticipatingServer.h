/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/LaunchStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/PostLaunchActionsStatus.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Server participating in Job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ParticipatingServer">AWS
   * API Reference</a></p>
   */
  class ParticipatingServer
  {
  public:
    AWS_MGN_API ParticipatingServer() = default;
    AWS_MGN_API ParticipatingServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ParticipatingServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Participating server launch status.</p>
     */
    inline LaunchStatus GetLaunchStatus() const { return m_launchStatus; }
    inline bool LaunchStatusHasBeenSet() const { return m_launchStatusHasBeenSet; }
    inline void SetLaunchStatus(LaunchStatus value) { m_launchStatusHasBeenSet = true; m_launchStatus = value; }
    inline ParticipatingServer& WithLaunchStatus(LaunchStatus value) { SetLaunchStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Participating server's launched ec2 instance ID.</p>
     */
    inline const Aws::String& GetLaunchedEc2InstanceID() const { return m_launchedEc2InstanceID; }
    inline bool LaunchedEc2InstanceIDHasBeenSet() const { return m_launchedEc2InstanceIDHasBeenSet; }
    template<typename LaunchedEc2InstanceIDT = Aws::String>
    void SetLaunchedEc2InstanceID(LaunchedEc2InstanceIDT&& value) { m_launchedEc2InstanceIDHasBeenSet = true; m_launchedEc2InstanceID = std::forward<LaunchedEc2InstanceIDT>(value); }
    template<typename LaunchedEc2InstanceIDT = Aws::String>
    ParticipatingServer& WithLaunchedEc2InstanceID(LaunchedEc2InstanceIDT&& value) { SetLaunchedEc2InstanceID(std::forward<LaunchedEc2InstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Participating server's Post Launch Actions Status.</p>
     */
    inline const PostLaunchActionsStatus& GetPostLaunchActionsStatus() const { return m_postLaunchActionsStatus; }
    inline bool PostLaunchActionsStatusHasBeenSet() const { return m_postLaunchActionsStatusHasBeenSet; }
    template<typename PostLaunchActionsStatusT = PostLaunchActionsStatus>
    void SetPostLaunchActionsStatus(PostLaunchActionsStatusT&& value) { m_postLaunchActionsStatusHasBeenSet = true; m_postLaunchActionsStatus = std::forward<PostLaunchActionsStatusT>(value); }
    template<typename PostLaunchActionsStatusT = PostLaunchActionsStatus>
    ParticipatingServer& WithPostLaunchActionsStatus(PostLaunchActionsStatusT&& value) { SetPostLaunchActionsStatus(std::forward<PostLaunchActionsStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Participating server Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    ParticipatingServer& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}
  private:

    LaunchStatus m_launchStatus{LaunchStatus::NOT_SET};
    bool m_launchStatusHasBeenSet = false;

    Aws::String m_launchedEc2InstanceID;
    bool m_launchedEc2InstanceIDHasBeenSet = false;

    PostLaunchActionsStatus m_postLaunchActionsStatus;
    bool m_postLaunchActionsStatusHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
