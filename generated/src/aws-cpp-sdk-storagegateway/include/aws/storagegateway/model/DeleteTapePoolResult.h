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
  class DeleteTapePoolResult
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteTapePoolResult();
    AWS_STORAGEGATEWAY_API DeleteTapePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DeleteTapePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline const Aws::String& GetPoolARN() const{ return m_poolARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline void SetPoolARN(const Aws::String& value) { m_poolARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline void SetPoolARN(Aws::String&& value) { m_poolARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline void SetPoolARN(const char* value) { m_poolARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline DeleteTapePoolResult& WithPoolARN(const Aws::String& value) { SetPoolARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline DeleteTapePoolResult& WithPoolARN(Aws::String&& value) { SetPoolARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool being deleted.</p>
     */
    inline DeleteTapePoolResult& WithPoolARN(const char* value) { SetPoolARN(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteTapePoolResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteTapePoolResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteTapePoolResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_poolARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
