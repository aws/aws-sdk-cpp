/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about the market (purchasing) option for an Amazon EC2
   * instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The market type. </p>
     */
    inline const Aws::String& GetMarketType() const { return m_marketType; }
    inline bool MarketTypeHasBeenSet() const { return m_marketTypeHasBeenSet; }
    template<typename MarketTypeT = Aws::String>
    void SetMarketType(MarketTypeT&& value) { m_marketTypeHasBeenSet = true; m_marketType = std::forward<MarketTypeT>(value); }
    template<typename MarketTypeT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& WithMarketType(MarketTypeT&& value) { SetMarketType(std::forward<MarketTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for Spot Instances. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& GetSpotOptions() const { return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    template<typename SpotOptionsT = AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails>
    void SetSpotOptions(SpotOptionsT&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::forward<SpotOptionsT>(value); }
    template<typename SpotOptionsT = AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails>
    AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& WithSpotOptions(SpotOptionsT&& value) { SetSpotOptions(std::forward<SpotOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marketType;
    bool m_marketTypeHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
