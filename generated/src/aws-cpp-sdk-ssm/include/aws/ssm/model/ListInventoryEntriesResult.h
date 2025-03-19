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
    AWS_SSM_API ListInventoryEntriesResult() = default;
    AWS_SSM_API ListInventoryEntriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListInventoryEntriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The type of inventory item returned by the request.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    ListInventoryEntriesResult& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID targeted by the request to query inventory
     * information.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ListInventoryEntriesResult& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inventory schema version used by the managed nodes.</p>
     */
    inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
    template<typename SchemaVersionT = Aws::String>
    void SetSchemaVersion(SchemaVersionT&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::forward<SchemaVersionT>(value); }
    template<typename SchemaVersionT = Aws::String>
    ListInventoryEntriesResult& WithSchemaVersion(SchemaVersionT&& value) { SetSchemaVersion(std::forward<SchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that inventory information was collected for the managed nodes.</p>
     */
    inline const Aws::String& GetCaptureTime() const { return m_captureTime; }
    template<typename CaptureTimeT = Aws::String>
    void SetCaptureTime(CaptureTimeT&& value) { m_captureTimeHasBeenSet = true; m_captureTime = std::forward<CaptureTimeT>(value); }
    template<typename CaptureTimeT = Aws::String>
    ListInventoryEntriesResult& WithCaptureTime(CaptureTimeT&& value) { SetCaptureTime(std::forward<CaptureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of inventory items on the managed nodes.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetEntries() const { return m_entries; }
    template<typename EntriesT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    ListInventoryEntriesResult& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = Aws::Map<Aws::String, Aws::String>>
    ListInventoryEntriesResult& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInventoryEntriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInventoryEntriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_captureTime;
    bool m_captureTimeHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_entries;
    bool m_entriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
