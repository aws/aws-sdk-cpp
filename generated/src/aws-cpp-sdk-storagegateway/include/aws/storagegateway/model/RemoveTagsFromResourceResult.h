/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>RemoveTagsFromResourceOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RemoveTagsFromResourceOutput">AWS
   * API Reference</a></p>
   */
  class RemoveTagsFromResourceResult
  {
  public:
    AWS_STORAGEGATEWAY_API RemoveTagsFromResourceResult();
    AWS_STORAGEGATEWAY_API RemoveTagsFromResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API RemoveTagsFromResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the tags were removed
     * from.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the tags were removed
     * from.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the tags were removed
     * from.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the tags were removed
     * from.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the tags were removed
     * from.</p>
     */
    inline RemoveTagsFromResourceResult& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the tags were removed
     * from.</p>
     */
    inline RemoveTagsFromResourceResult& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that the tags were removed
     * from.</p>
     */
    inline RemoveTagsFromResourceResult& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RemoveTagsFromResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RemoveTagsFromResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RemoveTagsFromResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_resourceARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
