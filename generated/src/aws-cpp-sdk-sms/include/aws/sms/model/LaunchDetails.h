/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Details about the latest launch of an application.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/LaunchDetails">AWS
   * API Reference</a></p>
   */
  class LaunchDetails
  {
  public:
    AWS_SMS_API LaunchDetails() = default;
    AWS_SMS_API LaunchDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API LaunchDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The latest time that this application was launched successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestLaunchTime() const { return m_latestLaunchTime; }
    inline bool LatestLaunchTimeHasBeenSet() const { return m_latestLaunchTimeHasBeenSet; }
    template<typename LatestLaunchTimeT = Aws::Utils::DateTime>
    void SetLatestLaunchTime(LatestLaunchTimeT&& value) { m_latestLaunchTimeHasBeenSet = true; m_latestLaunchTime = std::forward<LatestLaunchTimeT>(value); }
    template<typename LatestLaunchTimeT = Aws::Utils::DateTime>
    LaunchDetails& WithLatestLaunchTime(LatestLaunchTimeT&& value) { SetLatestLaunchTime(std::forward<LatestLaunchTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the latest stack launched for this application.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    LaunchDetails& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the latest stack launched for this application.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    LaunchDetails& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_latestLaunchTime{};
    bool m_latestLaunchTimeHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
