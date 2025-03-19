/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/Mode.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies settings for invoking an AWS Lambda function that customizes a
   * segment for a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignHook">AWS
   * API Reference</a></p>
   */
  class CampaignHook
  {
  public:
    AWS_PINPOINT_API CampaignHook() = default;
    AWS_PINPOINT_API CampaignHook(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the AWS Lambda function that Amazon
     * Pinpoint invokes to customize a segment for a campaign.</p>
     */
    inline const Aws::String& GetLambdaFunctionName() const { return m_lambdaFunctionName; }
    inline bool LambdaFunctionNameHasBeenSet() const { return m_lambdaFunctionNameHasBeenSet; }
    template<typename LambdaFunctionNameT = Aws::String>
    void SetLambdaFunctionName(LambdaFunctionNameT&& value) { m_lambdaFunctionNameHasBeenSet = true; m_lambdaFunctionName = std::forward<LambdaFunctionNameT>(value); }
    template<typename LambdaFunctionNameT = Aws::String>
    CampaignHook& WithLambdaFunctionName(LambdaFunctionNameT&& value) { SetLambdaFunctionName(std::forward<LambdaFunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode that Amazon Pinpoint uses to invoke the AWS Lambda function.
     * Possible values are:</p> <ul><li><p>FILTER - Invoke the function to customize
     * the segment that's used by a campaign.</p></li> <li><p>DELIVERY - (Deprecated)
     * Previously, invoked the function to send a campaign through a custom channel.
     * This functionality is not supported anymore. To send a campaign through a custom
     * channel, use the CustomDeliveryConfiguration and CampaignCustomMessage objects
     * of the campaign.</p></li></ul>
     */
    inline Mode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(Mode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline CampaignHook& WithMode(Mode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The web URL that Amazon Pinpoint calls to invoke the AWS Lambda function over
     * HTTPS.</p>
     */
    inline const Aws::String& GetWebUrl() const { return m_webUrl; }
    inline bool WebUrlHasBeenSet() const { return m_webUrlHasBeenSet; }
    template<typename WebUrlT = Aws::String>
    void SetWebUrl(WebUrlT&& value) { m_webUrlHasBeenSet = true; m_webUrl = std::forward<WebUrlT>(value); }
    template<typename WebUrlT = Aws::String>
    CampaignHook& WithWebUrl(WebUrlT&& value) { SetWebUrl(std::forward<WebUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lambdaFunctionName;
    bool m_lambdaFunctionNameHasBeenSet = false;

    Mode m_mode{Mode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_webUrl;
    bool m_webUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
