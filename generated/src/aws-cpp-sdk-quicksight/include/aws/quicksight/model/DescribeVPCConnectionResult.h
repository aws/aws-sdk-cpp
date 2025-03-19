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
    AWS_QUICKSIGHT_API DescribeVPCConnectionResult() = default;
    AWS_QUICKSIGHT_API DescribeVPCConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeVPCConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A response object that provides information for the specified VPC
     * connection.</p>
     */
    inline const VPCConnection& GetVPCConnection() const { return m_vPCConnection; }
    template<typename VPCConnectionT = VPCConnection>
    void SetVPCConnection(VPCConnectionT&& value) { m_vPCConnectionHasBeenSet = true; m_vPCConnection = std::forward<VPCConnectionT>(value); }
    template<typename VPCConnectionT = VPCConnection>
    DescribeVPCConnectionResult& WithVPCConnection(VPCConnectionT&& value) { SetVPCConnection(std::forward<VPCConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVPCConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeVPCConnectionResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    VPCConnection m_vPCConnection;
    bool m_vPCConnectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
