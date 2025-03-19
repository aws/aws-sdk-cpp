/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rolesanywhere/model/CrlDetail.h>
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
namespace RolesAnywhere
{
namespace Model
{
  class ListCrlsResult
  {
  public:
    AWS_ROLESANYWHERE_API ListCrlsResult() = default;
    AWS_ROLESANYWHERE_API ListCrlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROLESANYWHERE_API ListCrlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of certificate revocation lists (CRL). </p>
     */
    inline const Aws::Vector<CrlDetail>& GetCrls() const { return m_crls; }
    template<typename CrlsT = Aws::Vector<CrlDetail>>
    void SetCrls(CrlsT&& value) { m_crlsHasBeenSet = true; m_crls = std::forward<CrlsT>(value); }
    template<typename CrlsT = Aws::Vector<CrlDetail>>
    ListCrlsResult& WithCrls(CrlsT&& value) { SetCrls(std::forward<CrlsT>(value)); return *this;}
    template<typename CrlsT = CrlDetail>
    ListCrlsResult& AddCrls(CrlsT&& value) { m_crlsHasBeenSet = true; m_crls.emplace_back(std::forward<CrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * request did not show all results. To get the next results, make the request
     * again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCrlsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCrlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CrlDetail> m_crls;
    bool m_crlsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
