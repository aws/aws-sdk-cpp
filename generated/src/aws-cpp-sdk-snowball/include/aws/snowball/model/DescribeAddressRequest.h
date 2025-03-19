/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class DescribeAddressRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API DescribeAddressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAddress"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The automatically generated ID for a specific address.</p>
     */
    inline const Aws::String& GetAddressId() const { return m_addressId; }
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }
    template<typename AddressIdT = Aws::String>
    void SetAddressId(AddressIdT&& value) { m_addressIdHasBeenSet = true; m_addressId = std::forward<AddressIdT>(value); }
    template<typename AddressIdT = Aws::String>
    DescribeAddressRequest& WithAddressId(AddressIdT&& value) { SetAddressId(std::forward<AddressIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
