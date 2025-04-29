/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-guiconnect/SSMGuiConnect_EXPORTS.h>
#include <aws/ssm-guiconnect/SSMGuiConnectRequest.h>

namespace Aws
{
namespace SSMGuiConnect
{
namespace Model
{

  /**
   */
  class GetConnectionRecordingPreferencesRequest : public SSMGuiConnectRequest
  {
  public:
    AWS_SSMGUICONNECT_API GetConnectionRecordingPreferencesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectionRecordingPreferences"; }

    AWS_SSMGUICONNECT_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace SSMGuiConnect
} // namespace Aws
