/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/Accessor.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class GetAccessorResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API GetAccessorResult();
    AWS_MANAGEDBLOCKCHAIN_API GetAccessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API GetAccessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the accessor.</p>
     */
    inline const Accessor& GetAccessor() const{ return m_accessor; }

    /**
     * <p>The properties of the accessor.</p>
     */
    inline void SetAccessor(const Accessor& value) { m_accessor = value; }

    /**
     * <p>The properties of the accessor.</p>
     */
    inline void SetAccessor(Accessor&& value) { m_accessor = std::move(value); }

    /**
     * <p>The properties of the accessor.</p>
     */
    inline GetAccessorResult& WithAccessor(const Accessor& value) { SetAccessor(value); return *this;}

    /**
     * <p>The properties of the accessor.</p>
     */
    inline GetAccessorResult& WithAccessor(Accessor&& value) { SetAccessor(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccessorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccessorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccessorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Accessor m_accessor;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
