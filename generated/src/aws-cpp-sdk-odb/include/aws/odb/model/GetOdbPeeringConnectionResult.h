/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/OdbPeeringConnection.h>
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
  class GetOdbPeeringConnectionResult
  {
  public:
    AWS_ODB_API GetOdbPeeringConnectionResult() = default;
    AWS_ODB_API GetOdbPeeringConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API GetOdbPeeringConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const OdbPeeringConnection& GetOdbPeeringConnection() const { return m_odbPeeringConnection; }
    template<typename OdbPeeringConnectionT = OdbPeeringConnection>
    void SetOdbPeeringConnection(OdbPeeringConnectionT&& value) { m_odbPeeringConnectionHasBeenSet = true; m_odbPeeringConnection = std::forward<OdbPeeringConnectionT>(value); }
    template<typename OdbPeeringConnectionT = OdbPeeringConnection>
    GetOdbPeeringConnectionResult& WithOdbPeeringConnection(OdbPeeringConnectionT&& value) { SetOdbPeeringConnection(std::forward<OdbPeeringConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOdbPeeringConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OdbPeeringConnection m_odbPeeringConnection;
    bool m_odbPeeringConnectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
