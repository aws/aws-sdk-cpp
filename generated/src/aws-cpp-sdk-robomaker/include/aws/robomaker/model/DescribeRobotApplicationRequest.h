/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class DescribeRobotApplicationRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API DescribeRobotApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRobotApplication"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline DescribeRobotApplicationRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline DescribeRobotApplicationRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline DescribeRobotApplicationRequest& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The version of the robot application to describe.</p>
     */
    inline const Aws::String& GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The version of the robot application to describe.</p>
     */
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }

    /**
     * <p>The version of the robot application to describe.</p>
     */
    inline void SetApplicationVersion(const Aws::String& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }

    /**
     * <p>The version of the robot application to describe.</p>
     */
    inline void SetApplicationVersion(Aws::String&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::move(value); }

    /**
     * <p>The version of the robot application to describe.</p>
     */
    inline void SetApplicationVersion(const char* value) { m_applicationVersionHasBeenSet = true; m_applicationVersion.assign(value); }

    /**
     * <p>The version of the robot application to describe.</p>
     */
    inline DescribeRobotApplicationRequest& WithApplicationVersion(const Aws::String& value) { SetApplicationVersion(value); return *this;}

    /**
     * <p>The version of the robot application to describe.</p>
     */
    inline DescribeRobotApplicationRequest& WithApplicationVersion(Aws::String&& value) { SetApplicationVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the robot application to describe.</p>
     */
    inline DescribeRobotApplicationRequest& WithApplicationVersion(const char* value) { SetApplicationVersion(value); return *this;}

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    Aws::String m_applicationVersion;
    bool m_applicationVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
