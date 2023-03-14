/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/LcmOperationInfo.h>
#include <aws/tnb/model/GetSolNetworkInstanceMetadata.h>
#include <aws/tnb/model/NsState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace tnb
{
namespace Model
{
  class GetSolNetworkInstanceResult
  {
  public:
    AWS_TNB_API GetSolNetworkInstanceResult();
    AWS_TNB_API GetSolNetworkInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API GetSolNetworkInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Network instance ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Network instance ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Network instance ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Network instance ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Network instance ARN.</p>
     */
    inline GetSolNetworkInstanceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Network instance ARN.</p>
     */
    inline GetSolNetworkInstanceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Network instance ARN.</p>
     */
    inline GetSolNetworkInstanceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Network instance ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Network instance ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Network instance ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Network instance ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Network instance ID.</p>
     */
    inline GetSolNetworkInstanceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Network instance ID.</p>
     */
    inline GetSolNetworkInstanceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Network instance ID.</p>
     */
    inline GetSolNetworkInstanceResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const LcmOperationInfo& GetLcmOpInfo() const{ return m_lcmOpInfo; }

    
    inline void SetLcmOpInfo(const LcmOperationInfo& value) { m_lcmOpInfo = value; }

    
    inline void SetLcmOpInfo(LcmOperationInfo&& value) { m_lcmOpInfo = std::move(value); }

    
    inline GetSolNetworkInstanceResult& WithLcmOpInfo(const LcmOperationInfo& value) { SetLcmOpInfo(value); return *this;}

    
    inline GetSolNetworkInstanceResult& WithLcmOpInfo(LcmOperationInfo&& value) { SetLcmOpInfo(std::move(value)); return *this;}


    
    inline const GetSolNetworkInstanceMetadata& GetMetadata() const{ return m_metadata; }

    
    inline void SetMetadata(const GetSolNetworkInstanceMetadata& value) { m_metadata = value; }

    
    inline void SetMetadata(GetSolNetworkInstanceMetadata&& value) { m_metadata = std::move(value); }

    
    inline GetSolNetworkInstanceResult& WithMetadata(const GetSolNetworkInstanceMetadata& value) { SetMetadata(value); return *this;}

    
    inline GetSolNetworkInstanceResult& WithMetadata(GetSolNetworkInstanceMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Network instance description.</p>
     */
    inline const Aws::String& GetNsInstanceDescription() const{ return m_nsInstanceDescription; }

    /**
     * <p>Network instance description.</p>
     */
    inline void SetNsInstanceDescription(const Aws::String& value) { m_nsInstanceDescription = value; }

    /**
     * <p>Network instance description.</p>
     */
    inline void SetNsInstanceDescription(Aws::String&& value) { m_nsInstanceDescription = std::move(value); }

    /**
     * <p>Network instance description.</p>
     */
    inline void SetNsInstanceDescription(const char* value) { m_nsInstanceDescription.assign(value); }

    /**
     * <p>Network instance description.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsInstanceDescription(const Aws::String& value) { SetNsInstanceDescription(value); return *this;}

    /**
     * <p>Network instance description.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsInstanceDescription(Aws::String&& value) { SetNsInstanceDescription(std::move(value)); return *this;}

    /**
     * <p>Network instance description.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsInstanceDescription(const char* value) { SetNsInstanceDescription(value); return *this;}


    /**
     * <p>Network instance name.</p>
     */
    inline const Aws::String& GetNsInstanceName() const{ return m_nsInstanceName; }

    /**
     * <p>Network instance name.</p>
     */
    inline void SetNsInstanceName(const Aws::String& value) { m_nsInstanceName = value; }

    /**
     * <p>Network instance name.</p>
     */
    inline void SetNsInstanceName(Aws::String&& value) { m_nsInstanceName = std::move(value); }

    /**
     * <p>Network instance name.</p>
     */
    inline void SetNsInstanceName(const char* value) { m_nsInstanceName.assign(value); }

    /**
     * <p>Network instance name.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsInstanceName(const Aws::String& value) { SetNsInstanceName(value); return *this;}

    /**
     * <p>Network instance name.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsInstanceName(Aws::String&& value) { SetNsInstanceName(std::move(value)); return *this;}

    /**
     * <p>Network instance name.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsInstanceName(const char* value) { SetNsInstanceName(value); return *this;}


    /**
     * <p>Network instance state.</p>
     */
    inline const NsState& GetNsState() const{ return m_nsState; }

    /**
     * <p>Network instance state.</p>
     */
    inline void SetNsState(const NsState& value) { m_nsState = value; }

    /**
     * <p>Network instance state.</p>
     */
    inline void SetNsState(NsState&& value) { m_nsState = std::move(value); }

    /**
     * <p>Network instance state.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsState(const NsState& value) { SetNsState(value); return *this;}

    /**
     * <p>Network instance state.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsState(NsState&& value) { SetNsState(std::move(value)); return *this;}


    /**
     * <p>Network service descriptor ID.</p>
     */
    inline const Aws::String& GetNsdId() const{ return m_nsdId; }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdId(const Aws::String& value) { m_nsdId = value; }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdId(Aws::String&& value) { m_nsdId = std::move(value); }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdId(const char* value) { m_nsdId.assign(value); }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsdId(const Aws::String& value) { SetNsdId(value); return *this;}

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsdId(Aws::String&& value) { SetNsdId(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsdId(const char* value) { SetNsdId(value); return *this;}


    /**
     * <p>Network service descriptor info ID.</p>
     */
    inline const Aws::String& GetNsdInfoId() const{ return m_nsdInfoId; }

    /**
     * <p>Network service descriptor info ID.</p>
     */
    inline void SetNsdInfoId(const Aws::String& value) { m_nsdInfoId = value; }

    /**
     * <p>Network service descriptor info ID.</p>
     */
    inline void SetNsdInfoId(Aws::String&& value) { m_nsdInfoId = std::move(value); }

    /**
     * <p>Network service descriptor info ID.</p>
     */
    inline void SetNsdInfoId(const char* value) { m_nsdInfoId.assign(value); }

    /**
     * <p>Network service descriptor info ID.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsdInfoId(const Aws::String& value) { SetNsdInfoId(value); return *this;}

    /**
     * <p>Network service descriptor info ID.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsdInfoId(Aws::String&& value) { SetNsdInfoId(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor info ID.</p>
     */
    inline GetSolNetworkInstanceResult& WithNsdInfoId(const char* value) { SetNsdInfoId(value); return *this;}


    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkInstanceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkInstanceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkInstanceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkInstanceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkInstanceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkInstanceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkInstanceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkInstanceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolNetworkInstanceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSolNetworkInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSolNetworkInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSolNetworkInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    LcmOperationInfo m_lcmOpInfo;

    GetSolNetworkInstanceMetadata m_metadata;

    Aws::String m_nsInstanceDescription;

    Aws::String m_nsInstanceName;

    NsState m_nsState;

    Aws::String m_nsdId;

    Aws::String m_nsdInfoId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
