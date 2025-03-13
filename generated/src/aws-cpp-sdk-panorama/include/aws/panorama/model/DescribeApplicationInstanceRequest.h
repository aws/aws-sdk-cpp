/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Panorama
{
namespace Model
{

  /**
   */
  class DescribeApplicationInstanceRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API DescribeApplicationInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplicationInstance"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The application instance's ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const { return m_applicationInstanceId; }
    inline bool ApplicationInstanceIdHasBeenSet() const { return m_applicationInstanceIdHasBeenSet; }
    template<typename ApplicationInstanceIdT = Aws::String>
    void SetApplicationInstanceId(ApplicationInstanceIdT&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::forward<ApplicationInstanceIdT>(value); }
    template<typename ApplicationInstanceIdT = Aws::String>
    DescribeApplicationInstanceRequest& WithApplicationInstanceId(ApplicationInstanceIdT&& value) { SetApplicationInstanceId(std::forward<ApplicationInstanceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
