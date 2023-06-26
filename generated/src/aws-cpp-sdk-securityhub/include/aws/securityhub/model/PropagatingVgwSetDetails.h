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
   * <p> Describes a virtual private gateway propagating route. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/PropagatingVgwSetDetails">AWS
   * API Reference</a></p>
   */
  class PropagatingVgwSetDetails
  {
  public:
    AWS_SECURITYHUB_API PropagatingVgwSetDetails();
    AWS_SECURITYHUB_API PropagatingVgwSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API PropagatingVgwSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the virtual private gateway. </p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p> The ID of the virtual private gateway. </p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p> The ID of the virtual private gateway. </p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p> The ID of the virtual private gateway. </p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p> The ID of the virtual private gateway. </p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p> The ID of the virtual private gateway. </p>
     */
    inline PropagatingVgwSetDetails& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p> The ID of the virtual private gateway. </p>
     */
    inline PropagatingVgwSetDetails& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p> The ID of the virtual private gateway. </p>
     */
    inline PropagatingVgwSetDetails& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}

  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
