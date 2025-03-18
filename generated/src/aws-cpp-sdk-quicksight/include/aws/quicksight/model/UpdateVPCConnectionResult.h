/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VPCConnectionResourceStatus.h>
#include <aws/quicksight/model/VPCConnectionAvailabilityStatus.h>
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
  class UpdateVPCConnectionResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateVPCConnectionResult() = default;
    AWS_QUICKSIGHT_API UpdateVPCConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateVPCConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateVPCConnectionResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC connection that you are updating. This ID is a unique
     * identifier for each Amazon Web Services Region in anAmazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const { return m_vPCConnectionId; }
    template<typename VPCConnectionIdT = Aws::String>
    void SetVPCConnectionId(VPCConnectionIdT&& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = std::forward<VPCConnectionIdT>(value); }
    template<typename VPCConnectionIdT = Aws::String>
    UpdateVPCConnectionResult& WithVPCConnectionId(VPCConnectionIdT&& value) { SetVPCConnectionId(std::forward<VPCConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update status of the VPC connection's last update.</p>
     */
    inline VPCConnectionResourceStatus GetUpdateStatus() const { return m_updateStatus; }
    inline void SetUpdateStatus(VPCConnectionResourceStatus value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline UpdateVPCConnectionResult& WithUpdateStatus(VPCConnectionResourceStatus value) { SetUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability status of the VPC connection.</p>
     */
    inline VPCConnectionAvailabilityStatus GetAvailabilityStatus() const { return m_availabilityStatus; }
    inline void SetAvailabilityStatus(VPCConnectionAvailabilityStatus value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = value; }
    inline UpdateVPCConnectionResult& WithAvailabilityStatus(VPCConnectionAvailabilityStatus value) { SetAvailabilityStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateVPCConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateVPCConnectionResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_vPCConnectionId;
    bool m_vPCConnectionIdHasBeenSet = false;

    VPCConnectionResourceStatus m_updateStatus{VPCConnectionResourceStatus::NOT_SET};
    bool m_updateStatusHasBeenSet = false;

    VPCConnectionAvailabilityStatus m_availabilityStatus{VPCConnectionAvailabilityStatus::NOT_SET};
    bool m_availabilityStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
