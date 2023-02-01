/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
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
  class StartConnectionResult
  {
  public:
    AWS_OUTPOSTS_API StartConnectionResult();
    AWS_OUTPOSTS_API StartConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API StartConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the connection. </p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p> The ID of the connection. </p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    /**
     * <p> The ID of the connection. </p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }

    /**
     * <p> The ID of the connection. </p>
     */
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    /**
     * <p> The ID of the connection. </p>
     */
    inline StartConnectionResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p> The ID of the connection. </p>
     */
    inline StartConnectionResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p> The ID of the connection. </p>
     */
    inline StartConnectionResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p> The underlay IP address. </p>
     */
    inline const Aws::String& GetUnderlayIpAddress() const{ return m_underlayIpAddress; }

    /**
     * <p> The underlay IP address. </p>
     */
    inline void SetUnderlayIpAddress(const Aws::String& value) { m_underlayIpAddress = value; }

    /**
     * <p> The underlay IP address. </p>
     */
    inline void SetUnderlayIpAddress(Aws::String&& value) { m_underlayIpAddress = std::move(value); }

    /**
     * <p> The underlay IP address. </p>
     */
    inline void SetUnderlayIpAddress(const char* value) { m_underlayIpAddress.assign(value); }

    /**
     * <p> The underlay IP address. </p>
     */
    inline StartConnectionResult& WithUnderlayIpAddress(const Aws::String& value) { SetUnderlayIpAddress(value); return *this;}

    /**
     * <p> The underlay IP address. </p>
     */
    inline StartConnectionResult& WithUnderlayIpAddress(Aws::String&& value) { SetUnderlayIpAddress(std::move(value)); return *this;}

    /**
     * <p> The underlay IP address. </p>
     */
    inline StartConnectionResult& WithUnderlayIpAddress(const char* value) { SetUnderlayIpAddress(value); return *this;}

  private:

    Aws::String m_connectionId;

    Aws::String m_underlayIpAddress;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
