/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{
  class CreateAddressResult
  {
  public:
    AWS_SNOWBALL_API CreateAddressResult() = default;
    AWS_SNOWBALL_API CreateAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API CreateAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snow device for that
     * job shipped to.</p>
     */
    inline const Aws::String& GetAddressId() const { return m_addressId; }
    template<typename AddressIdT = Aws::String>
    void SetAddressId(AddressIdT&& value) { m_addressIdHasBeenSet = true; m_addressId = std::forward<AddressIdT>(value); }
    template<typename AddressIdT = Aws::String>
    CreateAddressResult& WithAddressId(AddressIdT&& value) { SetAddressId(std::forward<AddressIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAddressResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
