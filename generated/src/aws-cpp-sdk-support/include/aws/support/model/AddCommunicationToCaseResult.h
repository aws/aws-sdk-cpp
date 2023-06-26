/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The result of the <a>AddCommunicationToCase</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddCommunicationToCaseResponse">AWS
   * API Reference</a></p>
   */
  class AddCommunicationToCaseResult
  {
  public:
    AWS_SUPPORT_API AddCommunicationToCaseResult();
    AWS_SUPPORT_API AddCommunicationToCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API AddCommunicationToCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>True if <a>AddCommunicationToCase</a> succeeds. Otherwise, returns an
     * error.</p>
     */
    inline bool GetResult() const{ return m_result; }

    /**
     * <p>True if <a>AddCommunicationToCase</a> succeeds. Otherwise, returns an
     * error.</p>
     */
    inline void SetResult(bool value) { m_result = value; }

    /**
     * <p>True if <a>AddCommunicationToCase</a> succeeds. Otherwise, returns an
     * error.</p>
     */
    inline AddCommunicationToCaseResult& WithResult(bool value) { SetResult(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AddCommunicationToCaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AddCommunicationToCaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AddCommunicationToCaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_result;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
