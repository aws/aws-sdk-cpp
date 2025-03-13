/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/FirstBoot.h>
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
   * <p>Launched instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LaunchedInstance">AWS
   * API Reference</a></p>
   */
  class LaunchedInstance
  {
  public:
    AWS_MGN_API LaunchedInstance() = default;
    AWS_MGN_API LaunchedInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LaunchedInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Launched instance EC2 ID.</p>
     */
    inline const Aws::String& GetEc2InstanceID() const { return m_ec2InstanceID; }
    inline bool Ec2InstanceIDHasBeenSet() const { return m_ec2InstanceIDHasBeenSet; }
    template<typename Ec2InstanceIDT = Aws::String>
    void SetEc2InstanceID(Ec2InstanceIDT&& value) { m_ec2InstanceIDHasBeenSet = true; m_ec2InstanceID = std::forward<Ec2InstanceIDT>(value); }
    template<typename Ec2InstanceIDT = Aws::String>
    LaunchedInstance& WithEc2InstanceID(Ec2InstanceIDT&& value) { SetEc2InstanceID(std::forward<Ec2InstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launched instance first boot.</p>
     */
    inline FirstBoot GetFirstBoot() const { return m_firstBoot; }
    inline bool FirstBootHasBeenSet() const { return m_firstBootHasBeenSet; }
    inline void SetFirstBoot(FirstBoot value) { m_firstBootHasBeenSet = true; m_firstBoot = value; }
    inline LaunchedInstance& WithFirstBoot(FirstBoot value) { SetFirstBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launched instance Job ID.</p>
     */
    inline const Aws::String& GetJobID() const { return m_jobID; }
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
    template<typename JobIDT = Aws::String>
    void SetJobID(JobIDT&& value) { m_jobIDHasBeenSet = true; m_jobID = std::forward<JobIDT>(value); }
    template<typename JobIDT = Aws::String>
    LaunchedInstance& WithJobID(JobIDT&& value) { SetJobID(std::forward<JobIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ec2InstanceID;
    bool m_ec2InstanceIDHasBeenSet = false;

    FirstBoot m_firstBoot{FirstBoot::NOT_SET};
    bool m_firstBootHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
