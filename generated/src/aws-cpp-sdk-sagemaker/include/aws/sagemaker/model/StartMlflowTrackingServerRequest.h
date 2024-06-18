/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class StartMlflowTrackingServerRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API StartMlflowTrackingServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMlflowTrackingServer"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the tracking server to start.</p>
     */
    inline const Aws::String& GetTrackingServerName() const{ return m_trackingServerName; }
    inline bool TrackingServerNameHasBeenSet() const { return m_trackingServerNameHasBeenSet; }
    inline void SetTrackingServerName(const Aws::String& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = value; }
    inline void SetTrackingServerName(Aws::String&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::move(value); }
    inline void SetTrackingServerName(const char* value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName.assign(value); }
    inline StartMlflowTrackingServerRequest& WithTrackingServerName(const Aws::String& value) { SetTrackingServerName(value); return *this;}
    inline StartMlflowTrackingServerRequest& WithTrackingServerName(Aws::String&& value) { SetTrackingServerName(std::move(value)); return *this;}
    inline StartMlflowTrackingServerRequest& WithTrackingServerName(const char* value) { SetTrackingServerName(value); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
