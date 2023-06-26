/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/AddressType.h>
#include <aws/outposts/model/Address.h>
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
namespace Outposts
{
namespace Model
{
  class UpdateSiteAddressResult
  {
  public:
    AWS_OUTPOSTS_API UpdateSiteAddressResult();
    AWS_OUTPOSTS_API UpdateSiteAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API UpdateSiteAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The type of the address. </p>
     */
    inline const AddressType& GetAddressType() const{ return m_addressType; }

    /**
     * <p> The type of the address. </p>
     */
    inline void SetAddressType(const AddressType& value) { m_addressType = value; }

    /**
     * <p> The type of the address. </p>
     */
    inline void SetAddressType(AddressType&& value) { m_addressType = std::move(value); }

    /**
     * <p> The type of the address. </p>
     */
    inline UpdateSiteAddressResult& WithAddressType(const AddressType& value) { SetAddressType(value); return *this;}

    /**
     * <p> The type of the address. </p>
     */
    inline UpdateSiteAddressResult& WithAddressType(AddressType&& value) { SetAddressType(std::move(value)); return *this;}


    /**
     * <p> Information about an address. </p>
     */
    inline const Address& GetAddress() const{ return m_address; }

    /**
     * <p> Information about an address. </p>
     */
    inline void SetAddress(const Address& value) { m_address = value; }

    /**
     * <p> Information about an address. </p>
     */
    inline void SetAddress(Address&& value) { m_address = std::move(value); }

    /**
     * <p> Information about an address. </p>
     */
    inline UpdateSiteAddressResult& WithAddress(const Address& value) { SetAddress(value); return *this;}

    /**
     * <p> Information about an address. </p>
     */
    inline UpdateSiteAddressResult& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSiteAddressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSiteAddressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSiteAddressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AddressType m_addressType;

    Address m_address;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
