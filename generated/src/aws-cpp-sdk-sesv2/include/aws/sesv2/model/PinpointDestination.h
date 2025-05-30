﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines an Amazon Pinpoint project destination for email
   * events. You can send email event data to a Amazon Pinpoint project to view
   * metrics using the Transactional Messaging dashboards that are built in to Amazon
   * Pinpoint. For more information, see <a
   * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/analytics-transactional-messages.html">Transactional
   * Messaging Charts</a> in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PinpointDestination">AWS
   * API Reference</a></p>
   */
  class PinpointDestination
  {
  public:
    AWS_SESV2_API PinpointDestination() = default;
    AWS_SESV2_API PinpointDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API PinpointDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Pinpoint project to send email
     * events to.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    PinpointDestination& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
