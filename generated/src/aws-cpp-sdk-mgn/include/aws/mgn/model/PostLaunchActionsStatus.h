/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/JobPostLaunchActionsLaunchStatus.h>
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
   * <p>Status of the Post Launch Actions running on the Test or Cutover
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/PostLaunchActionsStatus">AWS
   * API Reference</a></p>
   */
  class PostLaunchActionsStatus
  {
  public:
    AWS_MGN_API PostLaunchActionsStatus() = default;
    AWS_MGN_API PostLaunchActionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API PostLaunchActionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of Post Launch Action status.</p>
     */
    inline const Aws::Vector<JobPostLaunchActionsLaunchStatus>& GetPostLaunchActionsLaunchStatusList() const { return m_postLaunchActionsLaunchStatusList; }
    inline bool PostLaunchActionsLaunchStatusListHasBeenSet() const { return m_postLaunchActionsLaunchStatusListHasBeenSet; }
    template<typename PostLaunchActionsLaunchStatusListT = Aws::Vector<JobPostLaunchActionsLaunchStatus>>
    void SetPostLaunchActionsLaunchStatusList(PostLaunchActionsLaunchStatusListT&& value) { m_postLaunchActionsLaunchStatusListHasBeenSet = true; m_postLaunchActionsLaunchStatusList = std::forward<PostLaunchActionsLaunchStatusListT>(value); }
    template<typename PostLaunchActionsLaunchStatusListT = Aws::Vector<JobPostLaunchActionsLaunchStatus>>
    PostLaunchActionsStatus& WithPostLaunchActionsLaunchStatusList(PostLaunchActionsLaunchStatusListT&& value) { SetPostLaunchActionsLaunchStatusList(std::forward<PostLaunchActionsLaunchStatusListT>(value)); return *this;}
    template<typename PostLaunchActionsLaunchStatusListT = JobPostLaunchActionsLaunchStatus>
    PostLaunchActionsStatus& AddPostLaunchActionsLaunchStatusList(PostLaunchActionsLaunchStatusListT&& value) { m_postLaunchActionsLaunchStatusListHasBeenSet = true; m_postLaunchActionsLaunchStatusList.emplace_back(std::forward<PostLaunchActionsLaunchStatusListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time where the AWS Systems Manager was detected as running on the Test or
     * Cutover instance.</p>
     */
    inline const Aws::String& GetSsmAgentDiscoveryDatetime() const { return m_ssmAgentDiscoveryDatetime; }
    inline bool SsmAgentDiscoveryDatetimeHasBeenSet() const { return m_ssmAgentDiscoveryDatetimeHasBeenSet; }
    template<typename SsmAgentDiscoveryDatetimeT = Aws::String>
    void SetSsmAgentDiscoveryDatetime(SsmAgentDiscoveryDatetimeT&& value) { m_ssmAgentDiscoveryDatetimeHasBeenSet = true; m_ssmAgentDiscoveryDatetime = std::forward<SsmAgentDiscoveryDatetimeT>(value); }
    template<typename SsmAgentDiscoveryDatetimeT = Aws::String>
    PostLaunchActionsStatus& WithSsmAgentDiscoveryDatetime(SsmAgentDiscoveryDatetimeT&& value) { SetSsmAgentDiscoveryDatetime(std::forward<SsmAgentDiscoveryDatetimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobPostLaunchActionsLaunchStatus> m_postLaunchActionsLaunchStatusList;
    bool m_postLaunchActionsLaunchStatusListHasBeenSet = false;

    Aws::String m_ssmAgentDiscoveryDatetime;
    bool m_ssmAgentDiscoveryDatetimeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
