/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Handshake.h>
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
namespace Organizations
{
namespace Model
{
  class DescribeHandshakeResult
  {
  public:
    AWS_ORGANIZATIONS_API DescribeHandshakeResult();
    AWS_ORGANIZATIONS_API DescribeHandshakeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DescribeHandshakeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about the specified handshake.</p>
     */
    inline const Handshake& GetHandshake() const{ return m_handshake; }

    /**
     * <p>A structure that contains information about the specified handshake.</p>
     */
    inline void SetHandshake(const Handshake& value) { m_handshake = value; }

    /**
     * <p>A structure that contains information about the specified handshake.</p>
     */
    inline void SetHandshake(Handshake&& value) { m_handshake = std::move(value); }

    /**
     * <p>A structure that contains information about the specified handshake.</p>
     */
    inline DescribeHandshakeResult& WithHandshake(const Handshake& value) { SetHandshake(value); return *this;}

    /**
     * <p>A structure that contains information about the specified handshake.</p>
     */
    inline DescribeHandshakeResult& WithHandshake(Handshake&& value) { SetHandshake(std::move(value)); return *this;}

  private:

    Handshake m_handshake;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
