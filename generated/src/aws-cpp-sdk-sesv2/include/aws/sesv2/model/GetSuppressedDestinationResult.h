/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SuppressedDestination.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about the suppressed email address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetSuppressedDestinationResponse">AWS
   * API Reference</a></p>
   */
  class GetSuppressedDestinationResult
  {
  public:
    AWS_SESV2_API GetSuppressedDestinationResult();
    AWS_SESV2_API GetSuppressedDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetSuppressedDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about the suppressed email address.</p>
     */
    inline const SuppressedDestination& GetSuppressedDestination() const{ return m_suppressedDestination; }

    /**
     * <p>An object containing information about the suppressed email address.</p>
     */
    inline void SetSuppressedDestination(const SuppressedDestination& value) { m_suppressedDestination = value; }

    /**
     * <p>An object containing information about the suppressed email address.</p>
     */
    inline void SetSuppressedDestination(SuppressedDestination&& value) { m_suppressedDestination = std::move(value); }

    /**
     * <p>An object containing information about the suppressed email address.</p>
     */
    inline GetSuppressedDestinationResult& WithSuppressedDestination(const SuppressedDestination& value) { SetSuppressedDestination(value); return *this;}

    /**
     * <p>An object containing information about the suppressed email address.</p>
     */
    inline GetSuppressedDestinationResult& WithSuppressedDestination(SuppressedDestination&& value) { SetSuppressedDestination(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSuppressedDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSuppressedDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSuppressedDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SuppressedDestination m_suppressedDestination;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
