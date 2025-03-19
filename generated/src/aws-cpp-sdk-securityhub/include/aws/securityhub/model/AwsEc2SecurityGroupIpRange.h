/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A range of IPv4 addresses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2SecurityGroupIpRange">AWS
   * API Reference</a></p>
   */
  class AwsEc2SecurityGroupIpRange
  {
  public:
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpRange() = default;
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IPv4 CIDR range. You can specify either a CIDR range or a source security
     * group, but not both. To specify a single IPv4 address, use the /32 prefix
     * length.</p>
     */
    inline const Aws::String& GetCidrIp() const { return m_cidrIp; }
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }
    template<typename CidrIpT = Aws::String>
    void SetCidrIp(CidrIpT&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::forward<CidrIpT>(value); }
    template<typename CidrIpT = Aws::String>
    AwsEc2SecurityGroupIpRange& WithCidrIp(CidrIpT&& value) { SetCidrIp(std::forward<CidrIpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
