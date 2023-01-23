/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/Address.h>
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

  private:

    Address m_address;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
