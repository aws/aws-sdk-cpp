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
    AWS_SMS_API LaunchDetails();
    AWS_SMS_API LaunchDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API LaunchDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The latest time that this application was launched successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestLaunchTime() const{ return m_latestLaunchTime; }

    /**
     * <p>The latest time that this application was launched successfully.</p>
     */
    inline bool LatestLaunchTimeHasBeenSet() const { return m_latestLaunchTimeHasBeenSet; }

    /**
     * <p>The latest time that this application was launched successfully.</p>
     */
    inline void SetLatestLaunchTime(const Aws::Utils::DateTime& value) { m_latestLaunchTimeHasBeenSet = true; m_latestLaunchTime = value; }

    /**
     * <p>The latest time that this application was launched successfully.</p>
     */
    inline void SetLatestLaunchTime(Aws::Utils::DateTime&& value) { m_latestLaunchTimeHasBeenSet = true; m_latestLaunchTime = std::move(value); }

    /**
     * <p>The latest time that this application was launched successfully.</p>
     */
    inline LaunchDetails& WithLatestLaunchTime(const Aws::Utils::DateTime& value) { SetLatestLaunchTime(value); return *this;}

    /**
     * <p>The latest time that this application was launched successfully.</p>
     */
    inline LaunchDetails& WithLatestLaunchTime(Aws::Utils::DateTime&& value) { SetLatestLaunchTime(std::move(value)); return *this;}


    /**
     * <p>The name of the latest stack launched for this application.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the latest stack launched for this application.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the latest stack launched for this application.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the latest stack launched for this application.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the latest stack launched for this application.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The ID of the latest stack launched for this application.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the latest stack launched for this application.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The ID of the latest stack launched for this application.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the latest stack launched for this application.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The ID of the latest stack launched for this application.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The ID of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the latest stack launched for this application.</p>
     */
    inline LaunchDetails& WithStackId(const char* value) { SetStackId(value); return *this;}

  private:

    Aws::Utils::DateTime m_latestLaunchTime;
    bool m_latestLaunchTimeHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
