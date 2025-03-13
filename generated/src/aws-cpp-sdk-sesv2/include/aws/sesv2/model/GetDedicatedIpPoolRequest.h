/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to obtain more information about a dedicated IP pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpPoolRequest">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpPoolRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetDedicatedIpPoolRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDedicatedIpPool"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the dedicated IP pool to retrieve.</p>
     */
    inline const Aws::String& GetPoolName() const { return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    template<typename PoolNameT = Aws::String>
    void SetPoolName(PoolNameT&& value) { m_poolNameHasBeenSet = true; m_poolName = std::forward<PoolNameT>(value); }
    template<typename PoolNameT = Aws::String>
    GetDedicatedIpPoolRequest& WithPoolName(PoolNameT&& value) { SetPoolName(std::forward<PoolNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
