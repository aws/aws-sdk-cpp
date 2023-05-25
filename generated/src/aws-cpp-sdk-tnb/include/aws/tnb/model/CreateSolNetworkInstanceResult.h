/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateSolNetworkInstanceResult
  {
  public:
    AWS_TNB_API CreateSolNetworkInstanceResult();
    AWS_TNB_API CreateSolNetworkInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API CreateSolNetworkInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateSolNetworkInstanceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Network instance ARN.</p>
     */
    inline CreateSolNetworkInstanceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Network instance ARN.</p>
     */
    inline CreateSolNetworkInstanceResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline CreateSolNetworkInstanceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Network instance ID.</p>
     */
    inline CreateSolNetworkInstanceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Network instance ID.</p>
     */
    inline CreateSolNetworkInstanceResult& WithId(const char* value) { SetId(value); return *this;}


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
    inline CreateSolNetworkInstanceResult& WithNsInstanceName(const Aws::String& value) { SetNsInstanceName(value); return *this;}

    /**
     * <p>Network instance name.</p>
     */
    inline CreateSolNetworkInstanceResult& WithNsInstanceName(Aws::String&& value) { SetNsInstanceName(std::move(value)); return *this;}

    /**
     * <p>Network instance name.</p>
     */
    inline CreateSolNetworkInstanceResult& WithNsInstanceName(const char* value) { SetNsInstanceName(value); return *this;}


    /**
     * <p>Network service descriptor ID.</p>
     */
    inline const Aws::String& GetNsdInfoId() const{ return m_nsdInfoId; }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdInfoId(const Aws::String& value) { m_nsdInfoId = value; }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdInfoId(Aws::String&& value) { m_nsdInfoId = std::move(value); }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline void SetNsdInfoId(const char* value) { m_nsdInfoId.assign(value); }

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline CreateSolNetworkInstanceResult& WithNsdInfoId(const Aws::String& value) { SetNsdInfoId(value); return *this;}

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline CreateSolNetworkInstanceResult& WithNsdInfoId(Aws::String&& value) { SetNsdInfoId(std::move(value)); return *this;}

    /**
     * <p>Network service descriptor ID.</p>
     */
    inline CreateSolNetworkInstanceResult& WithNsdInfoId(const char* value) { SetNsdInfoId(value); return *this;}


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
    inline CreateSolNetworkInstanceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline CreateSolNetworkInstanceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSolNetworkInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSolNetworkInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSolNetworkInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_nsInstanceName;

    Aws::String m_nsdInfoId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
