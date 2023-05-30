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
    AWS_SECURITYLAKE_API GetDataLakeSourcesResult();
    AWS_SECURITYLAKE_API GetDataLakeSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDataLakeSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::String& GetDataLakeArn() const{ return m_dataLakeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetDataLakeArn(const Aws::String& value) { m_dataLakeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetDataLakeArn(Aws::String&& value) { m_dataLakeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetDataLakeArn(const char* value) { m_dataLakeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline GetDataLakeSourcesResult& WithDataLakeArn(const Aws::String& value) { SetDataLakeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline GetDataLakeSourcesResult& WithDataLakeArn(Aws::String&& value) { SetDataLakeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline GetDataLakeSourcesResult& WithDataLakeArn(const char* value) { SetDataLakeArn(value); return *this;}


    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline const Aws::Vector<DataLakeSource>& GetDataLakeSources() const{ return m_dataLakeSources; }

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline void SetDataLakeSources(const Aws::Vector<DataLakeSource>& value) { m_dataLakeSources = value; }

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline void SetDataLakeSources(Aws::Vector<DataLakeSource>&& value) { m_dataLakeSources = std::move(value); }

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline GetDataLakeSourcesResult& WithDataLakeSources(const Aws::Vector<DataLakeSource>& value) { SetDataLakeSources(value); return *this;}

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline GetDataLakeSourcesResult& WithDataLakeSources(Aws::Vector<DataLakeSource>&& value) { SetDataLakeSources(std::move(value)); return *this;}

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline GetDataLakeSourcesResult& AddDataLakeSources(const DataLakeSource& value) { m_dataLakeSources.push_back(value); return *this; }

    /**
     * <p>The list of enabled accounts and enabled sources.</p>
     */
    inline GetDataLakeSourcesResult& AddDataLakeSources(DataLakeSource&& value) { m_dataLakeSources.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline GetDataLakeSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline GetDataLakeSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Lists if there are more results available. The value of nextToken is a unique
     * pagination token for each page. Repeat the call using the returned token to
     * retrieve the next page. Keep all other arguments unchanged.</p> <p>Each
     * pagination token expires after 24 hours. Using an expired pagination token will
     * return an HTTP 400 InvalidToken error.</p>
     */
    inline GetDataLakeSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDataLakeSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDataLakeSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDataLakeSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dataLakeArn;

    Aws::Vector<DataLakeSource> m_dataLakeSources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
