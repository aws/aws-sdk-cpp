/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/tnb/model/NsdOperationalState.h>
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
  class UpdateSolNetworkPackageResult
  {
  public:
    AWS_TNB_API UpdateSolNetworkPackageResult();
    AWS_TNB_API UpdateSolNetworkPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API UpdateSolNetworkPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline const NsdOperationalState& GetNsdOperationalState() const{ return m_nsdOperationalState; }

    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline void SetNsdOperationalState(const NsdOperationalState& value) { m_nsdOperationalState = value; }

    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline void SetNsdOperationalState(NsdOperationalState&& value) { m_nsdOperationalState = std::move(value); }

    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline UpdateSolNetworkPackageResult& WithNsdOperationalState(const NsdOperationalState& value) { SetNsdOperationalState(value); return *this;}

    /**
     * <p>Operational state of the network service descriptor in the network
     * package.</p>
     */
    inline UpdateSolNetworkPackageResult& WithNsdOperationalState(NsdOperationalState&& value) { SetNsdOperationalState(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSolNetworkPackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSolNetworkPackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSolNetworkPackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    NsdOperationalState m_nsdOperationalState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
