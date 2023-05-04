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
    AWS_QUICKSIGHT_API UpdateVPCConnectionResult();
    AWS_QUICKSIGHT_API UpdateVPCConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateVPCConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline UpdateVPCConnectionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline UpdateVPCConnectionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline UpdateVPCConnectionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the VPC connection that you are updating. This ID is a unique
     * identifier for each Amazon Web Services Region in anAmazon Web Services
     * account.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const{ return m_vPCConnectionId; }

    /**
     * <p>The ID of the VPC connection that you are updating. This ID is a unique
     * identifier for each Amazon Web Services Region in anAmazon Web Services
     * account.</p>
     */
    inline void SetVPCConnectionId(const Aws::String& value) { m_vPCConnectionId = value; }

    /**
     * <p>The ID of the VPC connection that you are updating. This ID is a unique
     * identifier for each Amazon Web Services Region in anAmazon Web Services
     * account.</p>
     */
    inline void SetVPCConnectionId(Aws::String&& value) { m_vPCConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC connection that you are updating. This ID is a unique
     * identifier for each Amazon Web Services Region in anAmazon Web Services
     * account.</p>
     */
    inline void SetVPCConnectionId(const char* value) { m_vPCConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC connection that you are updating. This ID is a unique
     * identifier for each Amazon Web Services Region in anAmazon Web Services
     * account.</p>
     */
    inline UpdateVPCConnectionResult& WithVPCConnectionId(const Aws::String& value) { SetVPCConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC connection that you are updating. This ID is a unique
     * identifier for each Amazon Web Services Region in anAmazon Web Services
     * account.</p>
     */
    inline UpdateVPCConnectionResult& WithVPCConnectionId(Aws::String&& value) { SetVPCConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC connection that you are updating. This ID is a unique
     * identifier for each Amazon Web Services Region in anAmazon Web Services
     * account.</p>
     */
    inline UpdateVPCConnectionResult& WithVPCConnectionId(const char* value) { SetVPCConnectionId(value); return *this;}


    /**
     * <p>The update status of the VPC connection's last update.</p>
     */
    inline const VPCConnectionResourceStatus& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>The update status of the VPC connection's last update.</p>
     */
    inline void SetUpdateStatus(const VPCConnectionResourceStatus& value) { m_updateStatus = value; }

    /**
     * <p>The update status of the VPC connection's last update.</p>
     */
    inline void SetUpdateStatus(VPCConnectionResourceStatus&& value) { m_updateStatus = std::move(value); }

    /**
     * <p>The update status of the VPC connection's last update.</p>
     */
    inline UpdateVPCConnectionResult& WithUpdateStatus(const VPCConnectionResourceStatus& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>The update status of the VPC connection's last update.</p>
     */
    inline UpdateVPCConnectionResult& WithUpdateStatus(VPCConnectionResourceStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}


    /**
     * <p>The availability status of the VPC connection.</p>
     */
    inline const VPCConnectionAvailabilityStatus& GetAvailabilityStatus() const{ return m_availabilityStatus; }

    /**
     * <p>The availability status of the VPC connection.</p>
     */
    inline void SetAvailabilityStatus(const VPCConnectionAvailabilityStatus& value) { m_availabilityStatus = value; }

    /**
     * <p>The availability status of the VPC connection.</p>
     */
    inline void SetAvailabilityStatus(VPCConnectionAvailabilityStatus&& value) { m_availabilityStatus = std::move(value); }

    /**
     * <p>The availability status of the VPC connection.</p>
     */
    inline UpdateVPCConnectionResult& WithAvailabilityStatus(const VPCConnectionAvailabilityStatus& value) { SetAvailabilityStatus(value); return *this;}

    /**
     * <p>The availability status of the VPC connection.</p>
     */
    inline UpdateVPCConnectionResult& WithAvailabilityStatus(VPCConnectionAvailabilityStatus&& value) { SetAvailabilityStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateVPCConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateVPCConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateVPCConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline UpdateVPCConnectionResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_vPCConnectionId;

    VPCConnectionResourceStatus m_updateStatus;

    VPCConnectionAvailabilityStatus m_availabilityStatus;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
