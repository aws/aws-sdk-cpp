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
    AWS_SNOWBALL_API CreateAddressResult();
    AWS_SNOWBALL_API CreateAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API CreateAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snow device for that
     * job shipped to.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snow device for that
     * job shipped to.</p>
     */
    inline void SetAddressId(const Aws::String& value) { m_addressId = value; }

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snow device for that
     * job shipped to.</p>
     */
    inline void SetAddressId(Aws::String&& value) { m_addressId = std::move(value); }

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snow device for that
     * job shipped to.</p>
     */
    inline void SetAddressId(const char* value) { m_addressId.assign(value); }

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snow device for that
     * job shipped to.</p>
     */
    inline CreateAddressResult& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snow device for that
     * job shipped to.</p>
     */
    inline CreateAddressResult& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}

    /**
     * <p>The automatically generated ID for a specific address. You'll use this ID
     * when you create a job to specify which address you want the Snow device for that
     * job shipped to.</p>
     */
    inline CreateAddressResult& WithAddressId(const char* value) { SetAddressId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAddressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAddressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAddressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_addressId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
