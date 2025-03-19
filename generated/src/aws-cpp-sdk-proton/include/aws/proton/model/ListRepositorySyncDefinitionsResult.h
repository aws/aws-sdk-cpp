/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/RepositorySyncDefinition.h>
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
namespace Proton
{
namespace Model
{
  class ListRepositorySyncDefinitionsResult
  {
  public:
    AWS_PROTON_API ListRepositorySyncDefinitionsResult() = default;
    AWS_PROTON_API ListRepositorySyncDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListRepositorySyncDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates the location of the next repository sync definition in
     * the array of repository sync definitions, after the current requested list of
     * repository sync definitions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositorySyncDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of repository sync definitions.</p>
     */
    inline const Aws::Vector<RepositorySyncDefinition>& GetSyncDefinitions() const { return m_syncDefinitions; }
    template<typename SyncDefinitionsT = Aws::Vector<RepositorySyncDefinition>>
    void SetSyncDefinitions(SyncDefinitionsT&& value) { m_syncDefinitionsHasBeenSet = true; m_syncDefinitions = std::forward<SyncDefinitionsT>(value); }
    template<typename SyncDefinitionsT = Aws::Vector<RepositorySyncDefinition>>
    ListRepositorySyncDefinitionsResult& WithSyncDefinitions(SyncDefinitionsT&& value) { SetSyncDefinitions(std::forward<SyncDefinitionsT>(value)); return *this;}
    template<typename SyncDefinitionsT = RepositorySyncDefinition>
    ListRepositorySyncDefinitionsResult& AddSyncDefinitions(SyncDefinitionsT&& value) { m_syncDefinitionsHasBeenSet = true; m_syncDefinitions.emplace_back(std::forward<SyncDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRepositorySyncDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RepositorySyncDefinition> m_syncDefinitions;
    bool m_syncDefinitionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
