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
  class DeleteVPCConnectionResult
  {
  public:
    AWS_QUICKSIGHT_API DeleteVPCConnectionResult() = default;
    AWS_QUICKSIGHT_API DeleteVPCConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DeleteVPCConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deleted VPC connection.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DeleteVPCConnectionResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC connection that you're creating. This ID is a unique
     * identifier for each Amazon Web Services Region in an Amazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const { return m_vPCConnectionId; }
    template<typename VPCConnectionIdT = Aws::String>
    void SetVPCConnectionId(VPCConnectionIdT&& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = std::forward<VPCConnectionIdT>(value); }
    template<typename VPCConnectionIdT = Aws::String>
    DeleteVPCConnectionResult& WithVPCConnectionId(VPCConnectionIdT&& value) { SetVPCConnectionId(std::forward<VPCConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion status of the VPC connection.</p>
     */
    inline VPCConnectionResourceStatus GetDeletionStatus() const { return m_deletionStatus; }
    inline void SetDeletionStatus(VPCConnectionResourceStatus value) { m_deletionStatusHasBeenSet = true; m_deletionStatus = value; }
    inline DeleteVPCConnectionResult& WithDeletionStatus(VPCConnectionResourceStatus value) { SetDeletionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability status of the VPC connection.</p>
     */
    inline VPCConnectionAvailabilityStatus GetAvailabilityStatus() const { return m_availabilityStatus; }
    inline void SetAvailabilityStatus(VPCConnectionAvailabilityStatus value) { m_availabilityStatusHasBeenSet = true; m_availabilityStatus = value; }
    inline DeleteVPCConnectionResult& WithAvailabilityStatus(VPCConnectionAvailabilityStatus value) { SetAvailabilityStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVPCConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteVPCConnectionResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_vPCConnectionId;
    bool m_vPCConnectionIdHasBeenSet = false;

    VPCConnectionResourceStatus m_deletionStatus{VPCConnectionResourceStatus::NOT_SET};
    bool m_deletionStatusHasBeenSet = false;

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
