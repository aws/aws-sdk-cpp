/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSM
{
namespace Model
{
  class ListInventoryEntriesResult
  {
  public:
    AWS_SSM_API ListInventoryEntriesResult();
    AWS_SSM_API ListInventoryEntriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListInventoryEntriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of inventory item returned by the request.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }
    inline ListInventoryEntriesResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline ListInventoryEntriesResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline ListInventoryEntriesResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID targeted by the request to query inventory
     * information.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }
    inline ListInventoryEntriesResult& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ListInventoryEntriesResult& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ListInventoryEntriesResult& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inventory schema version used by the managed nodes.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersion.assign(value); }
    inline ListInventoryEntriesResult& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline ListInventoryEntriesResult& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline ListInventoryEntriesResult& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that inventory information was collected for the managed nodes.</p>
     */
    inline const Aws::String& GetCaptureTime() const{ return m_captureTime; }
    inline void SetCaptureTime(const Aws::String& value) { m_captureTime = value; }
    inline void SetCaptureTime(Aws::String&& value) { m_captureTime = std::move(value); }
    inline void SetCaptureTime(const char* value) { m_captureTime.assign(value); }
    inline ListInventoryEntriesResult& WithCaptureTime(const Aws::String& value) { SetCaptureTime(value); return *this;}
    inline ListInventoryEntriesResult& WithCaptureTime(Aws::String&& value) { SetCaptureTime(std::move(value)); return *this;}
    inline ListInventoryEntriesResult& WithCaptureTime(const char* value) { SetCaptureTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of inventory items on the managed nodes.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetEntries() const{ return m_entries; }
    inline void SetEntries(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_entries = value; }
    inline void SetEntries(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_entries = std::move(value); }
    inline ListInventoryEntriesResult& WithEntries(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetEntries(value); return *this;}
    inline ListInventoryEntriesResult& WithEntries(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetEntries(std::move(value)); return *this;}
    inline ListInventoryEntriesResult& AddEntries(const Aws::Map<Aws::String, Aws::String>& value) { m_entries.push_back(value); return *this; }
    inline ListInventoryEntriesResult& AddEntries(Aws::Map<Aws::String, Aws::String>&& value) { m_entries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInventoryEntriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInventoryEntriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInventoryEntriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInventoryEntriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInventoryEntriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInventoryEntriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_typeName;

    Aws::String m_instanceId;

    Aws::String m_schemaVersion;

    Aws::String m_captureTime;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_entries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
