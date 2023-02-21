/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
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
namespace tnb
{
namespace Model
{
  class TerminateSolNetworkInstanceResult
  {
  public:
    AWS_TNB_API TerminateSolNetworkInstanceResult();
    AWS_TNB_API TerminateSolNetworkInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API TerminateSolNetworkInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the operation occurrence.</p>
     */
    inline const Aws::String& GetNsLcmOpOccId() const{ return m_nsLcmOpOccId; }

    /**
     * <p>The identifier of the operation occurrence.</p>
     */
    inline void SetNsLcmOpOccId(const Aws::String& value) { m_nsLcmOpOccId = value; }

    /**
     * <p>The identifier of the operation occurrence.</p>
     */
    inline void SetNsLcmOpOccId(Aws::String&& value) { m_nsLcmOpOccId = std::move(value); }

    /**
     * <p>The identifier of the operation occurrence.</p>
     */
    inline void SetNsLcmOpOccId(const char* value) { m_nsLcmOpOccId.assign(value); }

    /**
     * <p>The identifier of the operation occurrence.</p>
     */
    inline TerminateSolNetworkInstanceResult& WithNsLcmOpOccId(const Aws::String& value) { SetNsLcmOpOccId(value); return *this;}

    /**
     * <p>The identifier of the operation occurrence.</p>
     */
    inline TerminateSolNetworkInstanceResult& WithNsLcmOpOccId(Aws::String&& value) { SetNsLcmOpOccId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the operation occurrence.</p>
     */
    inline TerminateSolNetworkInstanceResult& WithNsLcmOpOccId(const char* value) { SetNsLcmOpOccId(value); return *this;}

  private:

    Aws::String m_nsLcmOpOccId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
