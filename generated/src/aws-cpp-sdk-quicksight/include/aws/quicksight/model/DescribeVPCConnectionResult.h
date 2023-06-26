/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/VPCConnection.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeVPCConnectionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeVPCConnectionResult();
    AWS_QUICKSIGHT_API DescribeVPCConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeVPCConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A response object that provides information for the specified VPC
     * connection.</p>
     */
    inline const VPCConnection& GetVPCConnection() const{ return m_vPCConnection; }

    /**
     * <p>A response object that provides information for the specified VPC
     * connection.</p>
     */
    inline void SetVPCConnection(const VPCConnection& value) { m_vPCConnection = value; }

    /**
     * <p>A response object that provides information for the specified VPC
     * connection.</p>
     */
    inline void SetVPCConnection(VPCConnection&& value) { m_vPCConnection = std::move(value); }

    /**
     * <p>A response object that provides information for the specified VPC
     * connection.</p>
     */
    inline DescribeVPCConnectionResult& WithVPCConnection(const VPCConnection& value) { SetVPCConnection(value); return *this;}

    /**
     * <p>A response object that provides information for the specified VPC
     * connection.</p>
     */
    inline DescribeVPCConnectionResult& WithVPCConnection(VPCConnection&& value) { SetVPCConnection(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeVPCConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeVPCConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeVPCConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeVPCConnectionResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    VPCConnection m_vPCConnection;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
