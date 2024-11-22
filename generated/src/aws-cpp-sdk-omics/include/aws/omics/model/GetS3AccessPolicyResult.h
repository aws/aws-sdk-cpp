/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/StoreType.h>
#include <aws/core/utils/DateTime.h>
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
namespace Omics
{
namespace Model
{
  class GetS3AccessPolicyResult
  {
  public:
    AWS_OMICS_API GetS3AccessPolicyResult();
    AWS_OMICS_API GetS3AccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetS3AccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The S3 access point ARN that has the access policy.</p>
     */
    inline const Aws::String& GetS3AccessPointArn() const{ return m_s3AccessPointArn; }
    inline void SetS3AccessPointArn(const Aws::String& value) { m_s3AccessPointArn = value; }
    inline void SetS3AccessPointArn(Aws::String&& value) { m_s3AccessPointArn = std::move(value); }
    inline void SetS3AccessPointArn(const char* value) { m_s3AccessPointArn.assign(value); }
    inline GetS3AccessPolicyResult& WithS3AccessPointArn(const Aws::String& value) { SetS3AccessPointArn(value); return *this;}
    inline GetS3AccessPolicyResult& WithS3AccessPointArn(Aws::String&& value) { SetS3AccessPointArn(std::move(value)); return *this;}
    inline GetS3AccessPolicyResult& WithS3AccessPointArn(const char* value) { SetS3AccessPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS-generated Sequence Store or Reference Store ID.</p>
     */
    inline const Aws::String& GetStoreId() const{ return m_storeId; }
    inline void SetStoreId(const Aws::String& value) { m_storeId = value; }
    inline void SetStoreId(Aws::String&& value) { m_storeId = std::move(value); }
    inline void SetStoreId(const char* value) { m_storeId.assign(value); }
    inline GetS3AccessPolicyResult& WithStoreId(const Aws::String& value) { SetStoreId(value); return *this;}
    inline GetS3AccessPolicyResult& WithStoreId(Aws::String&& value) { SetStoreId(std::move(value)); return *this;}
    inline GetS3AccessPolicyResult& WithStoreId(const char* value) { SetStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of store associated with the access point.</p>
     */
    inline const StoreType& GetStoreType() const{ return m_storeType; }
    inline void SetStoreType(const StoreType& value) { m_storeType = value; }
    inline void SetStoreType(StoreType&& value) { m_storeType = std::move(value); }
    inline GetS3AccessPolicyResult& WithStoreType(const StoreType& value) { SetStoreType(value); return *this;}
    inline GetS3AccessPolicyResult& WithStoreType(StoreType&& value) { SetStoreType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetS3AccessPolicyResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetS3AccessPolicyResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current resource policy that controls S3 access on the store.</p>
     */
    inline const Aws::String& GetS3AccessPolicy() const{ return m_s3AccessPolicy; }
    inline void SetS3AccessPolicy(const Aws::String& value) { m_s3AccessPolicy = value; }
    inline void SetS3AccessPolicy(Aws::String&& value) { m_s3AccessPolicy = std::move(value); }
    inline void SetS3AccessPolicy(const char* value) { m_s3AccessPolicy.assign(value); }
    inline GetS3AccessPolicyResult& WithS3AccessPolicy(const Aws::String& value) { SetS3AccessPolicy(value); return *this;}
    inline GetS3AccessPolicyResult& WithS3AccessPolicy(Aws::String&& value) { SetS3AccessPolicy(std::move(value)); return *this;}
    inline GetS3AccessPolicyResult& WithS3AccessPolicy(const char* value) { SetS3AccessPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetS3AccessPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetS3AccessPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetS3AccessPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_s3AccessPointArn;

    Aws::String m_storeId;

    StoreType m_storeType;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_s3AccessPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
