/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/snowball/model/Address.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class CreateAddressRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API CreateAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAddress"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The address that you want the Snow device shipped to.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }

    /**
     * <p>The address that you want the Snow device shipped to.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The address that you want the Snow device shipped to.</p>
     */
    inline void SetAddress(const Address& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The address that you want the Snow device shipped to.</p>
     */
    inline void SetAddress(Address&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The address that you want the Snow device shipped to.</p>
     */
    inline CreateAddressRequest& WithAddress(const Address& value) { SetAddress(value); return *this;}

    /**
     * <p>The address that you want the Snow device shipped to.</p>
     */
    inline CreateAddressRequest& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}

  private:

    Address m_address;
    bool m_addressHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
