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
  class DeleteSimulationApplicationRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API DeleteSimulationApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSimulationApplication"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The application information for the simulation application to delete.</p>
     */
    inline const Aws::String& GetApplication() const { return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    template<typename ApplicationT = Aws::String>
    void SetApplication(ApplicationT&& value) { m_applicationHasBeenSet = true; m_application = std::forward<ApplicationT>(value); }
    template<typename ApplicationT = Aws::String>
    DeleteSimulationApplicationRequest& WithApplication(ApplicationT&& value) { SetApplication(std::forward<ApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the simulation application to delete.</p>
     */
    inline const Aws::String& GetApplicationVersion() const { return m_applicationVersion; }
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }
    template<typename ApplicationVersionT = Aws::String>
    void SetApplicationVersion(ApplicationVersionT&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::forward<ApplicationVersionT>(value); }
    template<typename ApplicationVersionT = Aws::String>
    DeleteSimulationApplicationRequest& WithApplicationVersion(ApplicationVersionT&& value) { SetApplicationVersion(std::forward<ApplicationVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet = false;

    Aws::String m_applicationVersion;
    bool m_applicationVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
