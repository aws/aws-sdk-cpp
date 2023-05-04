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
  class CreateVPCConnectionResult
  {
  public:
    AWS_QUICKSIGHT_API CreateVPCConnectionResult();
    AWS_QUICKSIGHT_API CreateVPCConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateVPCConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateVPCConnectionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline CreateVPCConnectionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC connection.</p>
     */
    inline CreateVPCConnectionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID for the VPC connection that you're creating. This ID is unique per
     * Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const{ return m_vPCConnectionId; }

    /**
     * <p>The ID for the VPC connection that you're creating. This ID is unique per
     * Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetVPCConnectionId(const Aws::String& value) { m_vPCConnectionId = value; }

    /**
     * <p>The ID for the VPC connection that you're creating. This ID is unique per
     * Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetVPCConnectionId(Aws::String&& value) { m_vPCConnectionId = std::move(value); }

    /**
     * <p>The ID for the VPC connection that you're creating. This ID is unique per
     * Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetVPCConnectionId(const char* value) { m_vPCConnectionId.assign(value); }

    /**
     * <p>The ID for the VPC connection that you're creating. This ID is unique per
     * Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline CreateVPCConnectionResult& WithVPCConnectionId(const Aws::String& value) { SetVPCConnectionId(value); return *this;}

    /**
     * <p>The ID for the VPC connection that you're creating. This ID is unique per
     * Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline CreateVPCConnectionResult& WithVPCConnectionId(Aws::String&& value) { SetVPCConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID for the VPC connection that you're creating. This ID is unique per
     * Amazon Web Services Region for each Amazon Web Services account.</p>
     */
    inline CreateVPCConnectionResult& WithVPCConnectionId(const char* value) { SetVPCConnectionId(value); return *this;}


    /**
     * <p>The status of the creation of the VPC connection.</p>
     */
    inline const VPCConnectionResourceStatus& GetCreationStatus() const{ return m_creationStatus; }

    /**
     * <p>The status of the creation of the VPC connection.</p>
     */
    inline void SetCreationStatus(const VPCConnectionResourceStatus& value) { m_creationStatus = value; }

    /**
     * <p>The status of the creation of the VPC connection.</p>
     */
    inline void SetCreationStatus(VPCConnectionResourceStatus&& value) { m_creationStatus = std::move(value); }

    /**
     * <p>The status of the creation of the VPC connection.</p>
     */
    inline CreateVPCConnectionResult& WithCreationStatus(const VPCConnectionResourceStatus& value) { SetCreationStatus(value); return *this;}

    /**
     * <p>The status of the creation of the VPC connection.</p>
     */
    inline CreateVPCConnectionResult& WithCreationStatus(VPCConnectionResourceStatus&& value) { SetCreationStatus(std::move(value)); return *this;}


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
    inline CreateVPCConnectionResult& WithAvailabilityStatus(const VPCConnectionAvailabilityStatus& value) { SetAvailabilityStatus(value); return *this;}

    /**
     * <p>The availability status of the VPC connection.</p>
     */
    inline CreateVPCConnectionResult& WithAvailabilityStatus(VPCConnectionAvailabilityStatus&& value) { SetAvailabilityStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateVPCConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateVPCConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateVPCConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline CreateVPCConnectionResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_vPCConnectionId;

    VPCConnectionResourceStatus m_creationStatus;

    VPCConnectionAvailabilityStatus m_availabilityStatus;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
