/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/SuppressedDestination.h>
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

  private:

    SuppressedDestination m_suppressedDestination;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
