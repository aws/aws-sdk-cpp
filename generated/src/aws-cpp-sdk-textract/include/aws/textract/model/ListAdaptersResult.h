/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/AdapterOverview.h>
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
  class ListAdaptersResult
  {
  public:
    AWS_TEXTRACT_API ListAdaptersResult() = default;
    AWS_TEXTRACT_API ListAdaptersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API ListAdaptersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of adapters that matches the filtering criteria specified when calling
     * ListAdapters.</p>
     */
    inline const Aws::Vector<AdapterOverview>& GetAdapters() const { return m_adapters; }
    template<typename AdaptersT = Aws::Vector<AdapterOverview>>
    void SetAdapters(AdaptersT&& value) { m_adaptersHasBeenSet = true; m_adapters = std::forward<AdaptersT>(value); }
    template<typename AdaptersT = Aws::Vector<AdapterOverview>>
    ListAdaptersResult& WithAdapters(AdaptersT&& value) { SetAdapters(std::forward<AdaptersT>(value)); return *this;}
    template<typename AdaptersT = AdapterOverview>
    ListAdaptersResult& AddAdapters(AdaptersT&& value) { m_adaptersHasBeenSet = true; m_adapters.emplace_back(std::forward<AdaptersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return when listing adapters.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAdaptersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAdaptersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AdapterOverview> m_adapters;
    bool m_adaptersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
