/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/OdbNetwork.h>
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
namespace odb
{
namespace Model
{
  class GetOdbNetworkResult
  {
  public:
    AWS_ODB_API GetOdbNetworkResult() = default;
    AWS_ODB_API GetOdbNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API GetOdbNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ODB network.</p>
     */
    inline const OdbNetwork& GetOdbNetwork() const { return m_odbNetwork; }
    template<typename OdbNetworkT = OdbNetwork>
    void SetOdbNetwork(OdbNetworkT&& value) { m_odbNetworkHasBeenSet = true; m_odbNetwork = std::forward<OdbNetworkT>(value); }
    template<typename OdbNetworkT = OdbNetwork>
    GetOdbNetworkResult& WithOdbNetwork(OdbNetworkT&& value) { SetOdbNetwork(std::forward<OdbNetworkT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOdbNetworkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OdbNetwork m_odbNetwork;
    bool m_odbNetworkHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
