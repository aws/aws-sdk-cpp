/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/DataLakeSource.h>
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
namespace SecurityLake
{
namespace Model
{
  class GetDataLakeSourcesResult
  {
  public:
    AWS_SECURITYLAKE_API GetDataLakeSourcesResult() = default;
    AWS_SECURITYLAKE_API GetDataLakeSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDataLakeSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::String& GetDataLakeArn() const { return m_dataLakeArn; }
    template<typename DataLakeArnT = Aws::String>
    void SetDataLakeArn(DataLakeArnT&& value) { m_dataLakeArnHasBeenSet = true; m_dataLakeArn = std::forward<DataLakeArnT>(value); }
    template<typename DataLakeArnT = Aws::String>
    GetDataLakeSourcesResult& WithDataLakeArn(DataLakeArnT&& value) { SetDataLakeArn(std::forward<DataLakeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline const Aws::Vector<DataLakeSource>& GetDataLakeSources() const { return m_dataLakeSources; }
    template<typename DataLakeSourcesT = Aws::Vector<DataLakeSource>>
    void SetDataLakeSources(DataLakeSourcesT&& value) { m_dataLakeSourcesHasBeenSet = true; m_dataLakeSources = std::forward<DataLakeSourcesT>(value); }
    template<typename DataLakeSourcesT = Aws::Vector<DataLakeSource>>
    GetDataLakeSourcesResult& WithDataLakeSources(DataLakeSourcesT&& value) { SetDataLakeSources(std::forward<DataLakeSourcesT>(value)); return *this;}
    template<typename DataLakeSourcesT = DataLakeSource>
    GetDataLakeSourcesResult& AddDataLakeSources(DataLakeSourcesT&& value) { m_dataLakeSourcesHasBeenSet = true; m_dataLakeSources.emplace_back(std::forward<DataLakeSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDataLakeSourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataLakeSourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataLakeArn;
    bool m_dataLakeArnHasBeenSet = false;

    Aws::Vector<DataLakeSource> m_dataLakeSources;
    bool m_dataLakeSourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
