/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ClientPropertiesResult.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeClientPropertiesResult
  {
  public:
    AWS_WORKSPACES_API DescribeClientPropertiesResult() = default;
    AWS_WORKSPACES_API DescribeClientPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeClientPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the specified Amazon WorkSpaces clients.</p>
     */
    inline const Aws::Vector<ClientPropertiesResult>& GetClientPropertiesList() const { return m_clientPropertiesList; }
    template<typename ClientPropertiesListT = Aws::Vector<ClientPropertiesResult>>
    void SetClientPropertiesList(ClientPropertiesListT&& value) { m_clientPropertiesListHasBeenSet = true; m_clientPropertiesList = std::forward<ClientPropertiesListT>(value); }
    template<typename ClientPropertiesListT = Aws::Vector<ClientPropertiesResult>>
    DescribeClientPropertiesResult& WithClientPropertiesList(ClientPropertiesListT&& value) { SetClientPropertiesList(std::forward<ClientPropertiesListT>(value)); return *this;}
    template<typename ClientPropertiesListT = ClientPropertiesResult>
    DescribeClientPropertiesResult& AddClientPropertiesList(ClientPropertiesListT&& value) { m_clientPropertiesListHasBeenSet = true; m_clientPropertiesList.emplace_back(std::forward<ClientPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClientPropertiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClientPropertiesResult> m_clientPropertiesList;
    bool m_clientPropertiesListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
