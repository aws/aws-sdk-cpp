/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/AdapterVersionOverview.h>
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
namespace Textract
{
namespace Model
{
  class ListAdapterVersionsResult
  {
  public:
    AWS_TEXTRACT_API ListAdapterVersionsResult() = default;
    AWS_TEXTRACT_API ListAdapterVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API ListAdapterVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Adapter versions that match the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline const Aws::Vector<AdapterVersionOverview>& GetAdapterVersions() const { return m_adapterVersions; }
    template<typename AdapterVersionsT = Aws::Vector<AdapterVersionOverview>>
    void SetAdapterVersions(AdapterVersionsT&& value) { m_adapterVersionsHasBeenSet = true; m_adapterVersions = std::forward<AdapterVersionsT>(value); }
    template<typename AdapterVersionsT = Aws::Vector<AdapterVersionOverview>>
    ListAdapterVersionsResult& WithAdapterVersions(AdapterVersionsT&& value) { SetAdapterVersions(std::forward<AdapterVersionsT>(value)); return *this;}
    template<typename AdapterVersionsT = AdapterVersionOverview>
    ListAdapterVersionsResult& AddAdapterVersions(AdapterVersionsT&& value) { m_adapterVersionsHasBeenSet = true; m_adapterVersions.emplace_back(std::forward<AdapterVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return when listing adapter
     * versions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAdapterVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAdapterVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AdapterVersionOverview> m_adapterVersions;
    bool m_adapterVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
