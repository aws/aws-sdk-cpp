/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DescribeAccountConfigurationRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeAccountConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class DescribeAccountConfigurationRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DescribeAccountConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountConfiguration"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
