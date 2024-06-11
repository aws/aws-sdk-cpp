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
   * <p>A static routes associated with the VPN connection.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpnConnectionRoutesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpnConnectionRoutesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpnConnectionRoutesDetails();
    AWS_SECURITYHUB_API AwsEc2VpnConnectionRoutesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionRoutesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIDR block associated with the local subnet of the customer data
     * center.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }
    inline AwsEc2VpnConnectionRoutesDetails& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}
    inline AwsEc2VpnConnectionRoutesDetails& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}
    inline AwsEc2VpnConnectionRoutesDetails& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the static route.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline AwsEc2VpnConnectionRoutesDetails& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline AwsEc2VpnConnectionRoutesDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline AwsEc2VpnConnectionRoutesDetails& WithState(const char* value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
