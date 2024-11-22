/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/StoreType.h>
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
  class PutS3AccessPolicyResult
  {
  public:
    AWS_OMICS_API PutS3AccessPolicyResult();
    AWS_OMICS_API PutS3AccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API PutS3AccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The S3 access point ARN that now has the access policy.</p>
     */
    inline const Aws::String& GetS3AccessPointArn() const{ return m_s3AccessPointArn; }
    inline void SetS3AccessPointArn(const Aws::String& value) { m_s3AccessPointArn = value; }
    inline void SetS3AccessPointArn(Aws::String&& value) { m_s3AccessPointArn = std::move(value); }
    inline void SetS3AccessPointArn(const char* value) { m_s3AccessPointArn.assign(value); }
    inline PutS3AccessPolicyResult& WithS3AccessPointArn(const Aws::String& value) { SetS3AccessPointArn(value); return *this;}
    inline PutS3AccessPolicyResult& WithS3AccessPointArn(Aws::String&& value) { SetS3AccessPointArn(std::move(value)); return *this;}
    inline PutS3AccessPolicyResult& WithS3AccessPointArn(const char* value) { SetS3AccessPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS-generated Sequence Store or Reference Store ID.</p>
     */
    inline const Aws::String& GetStoreId() const{ return m_storeId; }
    inline void SetStoreId(const Aws::String& value) { m_storeId = value; }
    inline void SetStoreId(Aws::String&& value) { m_storeId = std::move(value); }
    inline void SetStoreId(const char* value) { m_storeId.assign(value); }
    inline PutS3AccessPolicyResult& WithStoreId(const Aws::String& value) { SetStoreId(value); return *this;}
    inline PutS3AccessPolicyResult& WithStoreId(Aws::String&& value) { SetStoreId(std::move(value)); return *this;}
    inline PutS3AccessPolicyResult& WithStoreId(const char* value) { SetStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of store associated with the access point.</p>
     */
    inline const StoreType& GetStoreType() const{ return m_storeType; }
    inline void SetStoreType(const StoreType& value) { m_storeType = value; }
    inline void SetStoreType(StoreType&& value) { m_storeType = std::move(value); }
    inline PutS3AccessPolicyResult& WithStoreType(const StoreType& value) { SetStoreType(value); return *this;}
    inline PutS3AccessPolicyResult& WithStoreType(StoreType&& value) { SetStoreType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutS3AccessPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutS3AccessPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutS3AccessPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_s3AccessPointArn;

    Aws::String m_storeId;

    StoreType m_storeType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
