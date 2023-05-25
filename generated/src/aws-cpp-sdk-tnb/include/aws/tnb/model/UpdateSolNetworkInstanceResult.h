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
  class UpdateSolNetworkInstanceResult
  {
  public:
    AWS_TNB_API UpdateSolNetworkInstanceResult();
    AWS_TNB_API UpdateSolNetworkInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API UpdateSolNetworkInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the network operation.</p>
     */
    inline const Aws::String& GetNsLcmOpOccId() const{ return m_nsLcmOpOccId; }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline void SetNsLcmOpOccId(const Aws::String& value) { m_nsLcmOpOccId = value; }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline void SetNsLcmOpOccId(Aws::String&& value) { m_nsLcmOpOccId = std::move(value); }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline void SetNsLcmOpOccId(const char* value) { m_nsLcmOpOccId.assign(value); }

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline UpdateSolNetworkInstanceResult& WithNsLcmOpOccId(const Aws::String& value) { SetNsLcmOpOccId(value); return *this;}

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline UpdateSolNetworkInstanceResult& WithNsLcmOpOccId(Aws::String&& value) { SetNsLcmOpOccId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the network operation.</p>
     */
    inline UpdateSolNetworkInstanceResult& WithNsLcmOpOccId(const char* value) { SetNsLcmOpOccId(value); return *this;}


    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline UpdateSolNetworkInstanceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline UpdateSolNetworkInstanceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline UpdateSolNetworkInstanceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline UpdateSolNetworkInstanceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline UpdateSolNetworkInstanceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline UpdateSolNetworkInstanceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline UpdateSolNetworkInstanceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline UpdateSolNetworkInstanceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. When you use this API, the tags are
     * transferred to the network operation that is created. Use tags to search and
     * filter your resources or track your Amazon Web Services costs.</p>
     */
    inline UpdateSolNetworkInstanceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSolNetworkInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSolNetworkInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSolNetworkInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nsLcmOpOccId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
