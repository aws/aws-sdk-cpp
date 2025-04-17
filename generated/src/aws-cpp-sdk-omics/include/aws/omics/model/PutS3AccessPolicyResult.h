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
    AWS_OMICS_API PutS3AccessPolicyResult() = default;
    AWS_OMICS_API PutS3AccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API PutS3AccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The S3 access point ARN that now has the access policy.</p>
     */
    inline const Aws::String& GetS3AccessPointArn() const { return m_s3AccessPointArn; }
    template<typename S3AccessPointArnT = Aws::String>
    void SetS3AccessPointArn(S3AccessPointArnT&& value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn = std::forward<S3AccessPointArnT>(value); }
    template<typename S3AccessPointArnT = Aws::String>
    PutS3AccessPolicyResult& WithS3AccessPointArn(S3AccessPointArnT&& value) { SetS3AccessPointArn(std::forward<S3AccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services-generated Sequence Store or Reference Store ID.</p>
     */
    inline const Aws::String& GetStoreId() const { return m_storeId; }
    template<typename StoreIdT = Aws::String>
    void SetStoreId(StoreIdT&& value) { m_storeIdHasBeenSet = true; m_storeId = std::forward<StoreIdT>(value); }
    template<typename StoreIdT = Aws::String>
    PutS3AccessPolicyResult& WithStoreId(StoreIdT&& value) { SetStoreId(std::forward<StoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of store associated with the access point.</p>
     */
    inline StoreType GetStoreType() const { return m_storeType; }
    inline void SetStoreType(StoreType value) { m_storeTypeHasBeenSet = true; m_storeType = value; }
    inline PutS3AccessPolicyResult& WithStoreType(StoreType value) { SetStoreType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutS3AccessPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3AccessPointArn;
    bool m_s3AccessPointArnHasBeenSet = false;

    Aws::String m_storeId;
    bool m_storeIdHasBeenSet = false;

    StoreType m_storeType{StoreType::NOT_SET};
    bool m_storeTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
