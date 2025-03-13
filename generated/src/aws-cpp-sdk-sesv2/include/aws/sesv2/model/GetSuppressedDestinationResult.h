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
    AWS_SESV2_API GetSuppressedDestinationResult() = default;
    AWS_SESV2_API GetSuppressedDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetSuppressedDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object containing information about the suppressed email address.</p>
     */
    inline const SuppressedDestination& GetSuppressedDestination() const { return m_suppressedDestination; }
    template<typename SuppressedDestinationT = SuppressedDestination>
    void SetSuppressedDestination(SuppressedDestinationT&& value) { m_suppressedDestinationHasBeenSet = true; m_suppressedDestination = std::forward<SuppressedDestinationT>(value); }
    template<typename SuppressedDestinationT = SuppressedDestination>
    GetSuppressedDestinationResult& WithSuppressedDestination(SuppressedDestinationT&& value) { SetSuppressedDestination(std::forward<SuppressedDestinationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSuppressedDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SuppressedDestination m_suppressedDestination;
    bool m_suppressedDestinationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
