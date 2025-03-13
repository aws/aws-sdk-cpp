/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore/model/Container.h>
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
namespace MediaStore
{
namespace Model
{
  class ListContainersResult
  {
  public:
    AWS_MEDIASTORE_API ListContainersResult() = default;
    AWS_MEDIASTORE_API ListContainersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API ListContainersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of the containers.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const { return m_containers; }
    template<typename ContainersT = Aws::Vector<Container>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<Container>>
    ListContainersResult& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = Container>
    ListContainersResult& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <code>NextToken</code> is the token to use in the next call to
     * <code>ListContainers</code>. This token is returned only if you included the
     * <code>MaxResults</code> tag in the original command, and only if there are still
     * containers to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContainersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContainersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Container> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
