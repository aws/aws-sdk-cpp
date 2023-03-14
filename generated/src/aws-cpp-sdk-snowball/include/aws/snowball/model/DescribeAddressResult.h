/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/Address.h>
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
  class DescribeAddressResult
  {
  public:
    AWS_SNOWBALL_API DescribeAddressResult();
    AWS_SNOWBALL_API DescribeAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API DescribeAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The address that you want the Snow device(s) associated with a specific job
     * to be shipped to.</p>
     */
    inline const Address& GetAddress() const{ return m_address; }

    /**
     * <p>The address that you want the Snow device(s) associated with a specific job
     * to be shipped to.</p>
     */
    inline void SetAddress(const Address& value) { m_address = value; }

    /**
     * <p>The address that you want the Snow device(s) associated with a specific job
     * to be shipped to.</p>
     */
    inline void SetAddress(Address&& value) { m_address = std::move(value); }

    /**
     * <p>The address that you want the Snow device(s) associated with a specific job
     * to be shipped to.</p>
     */
    inline DescribeAddressResult& WithAddress(const Address& value) { SetAddress(value); return *this;}

    /**
     * <p>The address that you want the Snow device(s) associated with a specific job
     * to be shipped to.</p>
     */
    inline DescribeAddressResult& WithAddress(Address&& value) { SetAddress(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAddressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAddressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAddressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Address m_address;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
